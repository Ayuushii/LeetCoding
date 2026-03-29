# 0/1 Knapsack


### Questions

<details>
<summary>Identification of this Pattern</summary>
- Pattern covers problems where you include/exclude an item to find an optimal solution (min/max)
- Unbounded knapsack - supply of items is unlimited
- Fractional Knapsack is Greedy - _**Link to that**_

</details>

<details>
<summary>[0/1 Knapsack Problem](https://www.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1) - Given list of items with their values and weights and a bag with weight W, choose items to fill in the bag such that profit is maximised.</summary>
- We need **BASE CONDITION + CHOICE DIAGRAM**

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYQ5XL55%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIQCb9%2Bx393EnJK5iR6QaO8fcOgxeLRuO%2BpKoZIztqeeZkgIgHqfGEloNCkz07lsaAWsaDRvtbVRM852tmyWkqEef%2BfAq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDLejdJjEM9auyguCKyrcA40kjfmDOgP7bZsQjsrVxCUrtziZQrDXN1ZVhmjrBVsXHpvoXwFnU5UxtooxyyAmK4LFIe55FvTqACf8qx4z4Yg62sRvySOyIauR56kO5C9wKk48iWGdS6pSYtMuTplPl2B7BnRvoZiQ1BwKuban%2FU3yeoK4Ahs1OnmVHVzWWMAllT26DvgsyMmJBZYPgbWyK1%2BEiTJ5yTluXhkOOnYJBvEqXlmFpA1UehJ3Zj94b%2BW7JnNO24ppdUAK1w7hiTQknXH9w5nEeTLqRnwZIRiIisyar0QcT9zNeuC2W5pl7S8kvlShIKMPbXgJLozHE6zvDrQ1ZMylzDF3hxzV%2BLaHNZVjN4aigC39ey%2BMt3Nd0ehMWh2Scx3jNPPuSoJuGvmKVw9yUCMC%2B0W8lgC%2FvCIV6XZqc5vdB22warc3TkL9%2F%2BUUvIEPVYL9vinn2EDPfrYMoJbEj7FPNDtxCermztUq2wtA3%2BGLCA60AI5IUMRmqJqlX6VZgU0f0rlO%2ByZcCO%2Bi69HbcwyVgJBgmLNoulDVXjcfimDKf0RRqNxwyf6xeF9GHzO3cfdLys6Q9iNbWGwYhy0%2FaMN98DrA6aRfsNmgbYn0uXwBv9WjMWejjPad0IVCzgmLBMwq1%2BacVvVsMMG6o84GOqUBnvYvUukU30d6hR9WKgZvWeBDsvAzzNzA69ZlYjhfyQD8qzeolbKFKkwlRwOD%2BR73OqqRUigXPE%2F6lKzh8igsJoqbISPwE%2Fv%2Fz9JvI6D1tNyLkUK0upwvG7fzYSqFIBHKBam96AWu1QxnEHwa5xr3q1a47bzfXkgaQfgbtua9vHMu2%2FzZzd2OOgKwJjMqdYEGcgxqtPG1ubhYwKc36FtzXzsO5IJs&X-Amz-Signature=d908396d1bb803cdd091eb05e1d4b17869620ddb1476871fa38724142972e1a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYQ5XL55%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIQCb9%2Bx393EnJK5iR6QaO8fcOgxeLRuO%2BpKoZIztqeeZkgIgHqfGEloNCkz07lsaAWsaDRvtbVRM852tmyWkqEef%2BfAq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDLejdJjEM9auyguCKyrcA40kjfmDOgP7bZsQjsrVxCUrtziZQrDXN1ZVhmjrBVsXHpvoXwFnU5UxtooxyyAmK4LFIe55FvTqACf8qx4z4Yg62sRvySOyIauR56kO5C9wKk48iWGdS6pSYtMuTplPl2B7BnRvoZiQ1BwKuban%2FU3yeoK4Ahs1OnmVHVzWWMAllT26DvgsyMmJBZYPgbWyK1%2BEiTJ5yTluXhkOOnYJBvEqXlmFpA1UehJ3Zj94b%2BW7JnNO24ppdUAK1w7hiTQknXH9w5nEeTLqRnwZIRiIisyar0QcT9zNeuC2W5pl7S8kvlShIKMPbXgJLozHE6zvDrQ1ZMylzDF3hxzV%2BLaHNZVjN4aigC39ey%2BMt3Nd0ehMWh2Scx3jNPPuSoJuGvmKVw9yUCMC%2B0W8lgC%2FvCIV6XZqc5vdB22warc3TkL9%2F%2BUUvIEPVYL9vinn2EDPfrYMoJbEj7FPNDtxCermztUq2wtA3%2BGLCA60AI5IUMRmqJqlX6VZgU0f0rlO%2ByZcCO%2Bi69HbcwyVgJBgmLNoulDVXjcfimDKf0RRqNxwyf6xeF9GHzO3cfdLys6Q9iNbWGwYhy0%2FaMN98DrA6aRfsNmgbYn0uXwBv9WjMWejjPad0IVCzgmLBMwq1%2BacVvVsMMG6o84GOqUBnvYvUukU30d6hR9WKgZvWeBDsvAzzNzA69ZlYjhfyQD8qzeolbKFKkwlRwOD%2BR73OqqRUigXPE%2F6lKzh8igsJoqbISPwE%2Fv%2Fz9JvI6D1tNyLkUK0upwvG7fzYSqFIBHKBam96AWu1QxnEHwa5xr3q1a47bzfXkgaQfgbtua9vHMu2%2FzZzd2OOgKwJjMqdYEGcgxqtPG1ubhYwKc36FtzXzsO5IJs&X-Amz-Signature=904c7892184c3c35333b40315117471aa2066ffcc9000a12d90cf6e64e409e48&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYQ5XL55%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIQCb9%2Bx393EnJK5iR6QaO8fcOgxeLRuO%2BpKoZIztqeeZkgIgHqfGEloNCkz07lsaAWsaDRvtbVRM852tmyWkqEef%2BfAq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDLejdJjEM9auyguCKyrcA40kjfmDOgP7bZsQjsrVxCUrtziZQrDXN1ZVhmjrBVsXHpvoXwFnU5UxtooxyyAmK4LFIe55FvTqACf8qx4z4Yg62sRvySOyIauR56kO5C9wKk48iWGdS6pSYtMuTplPl2B7BnRvoZiQ1BwKuban%2FU3yeoK4Ahs1OnmVHVzWWMAllT26DvgsyMmJBZYPgbWyK1%2BEiTJ5yTluXhkOOnYJBvEqXlmFpA1UehJ3Zj94b%2BW7JnNO24ppdUAK1w7hiTQknXH9w5nEeTLqRnwZIRiIisyar0QcT9zNeuC2W5pl7S8kvlShIKMPbXgJLozHE6zvDrQ1ZMylzDF3hxzV%2BLaHNZVjN4aigC39ey%2BMt3Nd0ehMWh2Scx3jNPPuSoJuGvmKVw9yUCMC%2B0W8lgC%2FvCIV6XZqc5vdB22warc3TkL9%2F%2BUUvIEPVYL9vinn2EDPfrYMoJbEj7FPNDtxCermztUq2wtA3%2BGLCA60AI5IUMRmqJqlX6VZgU0f0rlO%2ByZcCO%2Bi69HbcwyVgJBgmLNoulDVXjcfimDKf0RRqNxwyf6xeF9GHzO3cfdLys6Q9iNbWGwYhy0%2FaMN98DrA6aRfsNmgbYn0uXwBv9WjMWejjPad0IVCzgmLBMwq1%2BacVvVsMMG6o84GOqUBnvYvUukU30d6hR9WKgZvWeBDsvAzzNzA69ZlYjhfyQD8qzeolbKFKkwlRwOD%2BR73OqqRUigXPE%2F6lKzh8igsJoqbISPwE%2Fv%2Fz9JvI6D1tNyLkUK0upwvG7fzYSqFIBHKBam96AWu1QxnEHwa5xr3q1a47bzfXkgaQfgbtua9vHMu2%2FzZzd2OOgKwJjMqdYEGcgxqtPG1ubhYwKc36FtzXzsO5IJs&X-Amz-Signature=9953d5913d9c8d7abcda069b1411e6d8a365a826f168fd1a5c41ce437032b06b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VDD7IOY%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIA6BPHqJJy08tBoHbGTaWTg8dshGz598LrVY4E%2B3HInJAiEA2g4YYbuRSs49VNSdkq2JJ9Q3YRR5s87fG71NAa10viIq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDKr7ycCp5iwfOF7yVCrcAxUtL6in6GaKVTIbe4L1Z9M4rtZhJX1pI8eu2BGNgvT0b7bzo%2FLl7797ukCCZX0HRb8d0BTwDIC8pDRCp7ezEyFGaK6AVMNMbggh4FFCQGej6yVvByy2ZRnz44%2Fs9KzxJ0vyDcdsaFF7ky77b1cTfJ%2FcflhIboLY5hryc90ZfUsN%2FAgReQO%2FG56yPIlx%2BvSQO52Hl2ZiOgqE2fxY1u%2BzvWGKcpE56MgoZaQCZHy0x4ZuDt7WMPt1GUeOPbrvl5h8kSKC%2BU5oIjAGF%2FTg1mRDx%2B2Kg5bLGDc5Q17GRwT%2FLtrwzPbIwwkCTShaEVHp02zcD%2FiAZvz6wNmZR5Se8En%2FTNnSejqI8XgcHZRk8eEHLkSsk2epKizyimJqk3t%2FqAK1wfNmV6ev9j1KZBbKY4%2F56e8BnVjaZoMZZa87Sg%2FE4SA5h5Nf%2B2RjtisCzLCgHzSTixQyvY7ezm%2BWnIkaD940SUYOc5rbk2a7UbF%2FItbkwqZXVCVAv7LVvYJOVWT5OzY0D6wvS4K%2Fc66xDQjzTbcmqKvSYccR%2BT4sEDJLHcJBKE5ql5w%2FNPEwWFlpmyGb6Ms7Dz05Ye9l1dHlbn18fvZbKSVNckD3DqrwA1BEG6ekdQa3C6OIHOIWyHCVB%2BPGMLiuo84GOqUBpMGfqPCQBEVkqnNWnrd90Glyn1wNI9joJaa9mDXiAsnieheDZt7ffu4q70E55BWnGggmwBjrj1Ymd8G3lBVvjI3FbPEbJoZCvo5%2Bs68vtnZ0UQL%2BTFRnSOsnpBwezpUewbOSVCa15VNNqCdFCu0U0sYaQC1%2Fjnlr5BC2u4ga7PJvT68CMLvyZiL5dBLFy%2BKW7r4LTyChsgvcC%2Bypfn4mNIDyp9RT&X-Amz-Signature=d83bd4176e5e18fe9687bca5fd4c61c2f121657d9074aee19b4fce5645cb8eb1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VDD7IOY%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIA6BPHqJJy08tBoHbGTaWTg8dshGz598LrVY4E%2B3HInJAiEA2g4YYbuRSs49VNSdkq2JJ9Q3YRR5s87fG71NAa10viIq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDKr7ycCp5iwfOF7yVCrcAxUtL6in6GaKVTIbe4L1Z9M4rtZhJX1pI8eu2BGNgvT0b7bzo%2FLl7797ukCCZX0HRb8d0BTwDIC8pDRCp7ezEyFGaK6AVMNMbggh4FFCQGej6yVvByy2ZRnz44%2Fs9KzxJ0vyDcdsaFF7ky77b1cTfJ%2FcflhIboLY5hryc90ZfUsN%2FAgReQO%2FG56yPIlx%2BvSQO52Hl2ZiOgqE2fxY1u%2BzvWGKcpE56MgoZaQCZHy0x4ZuDt7WMPt1GUeOPbrvl5h8kSKC%2BU5oIjAGF%2FTg1mRDx%2B2Kg5bLGDc5Q17GRwT%2FLtrwzPbIwwkCTShaEVHp02zcD%2FiAZvz6wNmZR5Se8En%2FTNnSejqI8XgcHZRk8eEHLkSsk2epKizyimJqk3t%2FqAK1wfNmV6ev9j1KZBbKY4%2F56e8BnVjaZoMZZa87Sg%2FE4SA5h5Nf%2B2RjtisCzLCgHzSTixQyvY7ezm%2BWnIkaD940SUYOc5rbk2a7UbF%2FItbkwqZXVCVAv7LVvYJOVWT5OzY0D6wvS4K%2Fc66xDQjzTbcmqKvSYccR%2BT4sEDJLHcJBKE5ql5w%2FNPEwWFlpmyGb6Ms7Dz05Ye9l1dHlbn18fvZbKSVNckD3DqrwA1BEG6ekdQa3C6OIHOIWyHCVB%2BPGMLiuo84GOqUBpMGfqPCQBEVkqnNWnrd90Glyn1wNI9joJaa9mDXiAsnieheDZt7ffu4q70E55BWnGggmwBjrj1Ymd8G3lBVvjI3FbPEbJoZCvo5%2Bs68vtnZ0UQL%2BTFRnSOsnpBwezpUewbOSVCa15VNNqCdFCu0U0sYaQC1%2Fjnlr5BC2u4ga7PJvT68CMLvyZiL5dBLFy%2BKW7r4LTyChsgvcC%2Bypfn4mNIDyp9RT&X-Amz-Signature=8dfee08c409437d418897f707323a451804947d90a5a59fef3707124828bdc45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VDD7IOY%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIA6BPHqJJy08tBoHbGTaWTg8dshGz598LrVY4E%2B3HInJAiEA2g4YYbuRSs49VNSdkq2JJ9Q3YRR5s87fG71NAa10viIq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDKr7ycCp5iwfOF7yVCrcAxUtL6in6GaKVTIbe4L1Z9M4rtZhJX1pI8eu2BGNgvT0b7bzo%2FLl7797ukCCZX0HRb8d0BTwDIC8pDRCp7ezEyFGaK6AVMNMbggh4FFCQGej6yVvByy2ZRnz44%2Fs9KzxJ0vyDcdsaFF7ky77b1cTfJ%2FcflhIboLY5hryc90ZfUsN%2FAgReQO%2FG56yPIlx%2BvSQO52Hl2ZiOgqE2fxY1u%2BzvWGKcpE56MgoZaQCZHy0x4ZuDt7WMPt1GUeOPbrvl5h8kSKC%2BU5oIjAGF%2FTg1mRDx%2B2Kg5bLGDc5Q17GRwT%2FLtrwzPbIwwkCTShaEVHp02zcD%2FiAZvz6wNmZR5Se8En%2FTNnSejqI8XgcHZRk8eEHLkSsk2epKizyimJqk3t%2FqAK1wfNmV6ev9j1KZBbKY4%2F56e8BnVjaZoMZZa87Sg%2FE4SA5h5Nf%2B2RjtisCzLCgHzSTixQyvY7ezm%2BWnIkaD940SUYOc5rbk2a7UbF%2FItbkwqZXVCVAv7LVvYJOVWT5OzY0D6wvS4K%2Fc66xDQjzTbcmqKvSYccR%2BT4sEDJLHcJBKE5ql5w%2FNPEwWFlpmyGb6Ms7Dz05Ye9l1dHlbn18fvZbKSVNckD3DqrwA1BEG6ekdQa3C6OIHOIWyHCVB%2BPGMLiuo84GOqUBpMGfqPCQBEVkqnNWnrd90Glyn1wNI9joJaa9mDXiAsnieheDZt7ffu4q70E55BWnGggmwBjrj1Ymd8G3lBVvjI3FbPEbJoZCvo5%2Bs68vtnZ0UQL%2BTFRnSOsnpBwezpUewbOSVCa15VNNqCdFCu0U0sYaQC1%2Fjnlr5BC2u4ga7PJvT68CMLvyZiL5dBLFy%2BKW7r4LTyChsgvcC%2Bypfn4mNIDyp9RT&X-Amz-Signature=a72689071bf13088386d9dad7b539ae158f1ab9753bd65e0123d761c1f476e89&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665VDD7IOY%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083934Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJHMEUCIA6BPHqJJy08tBoHbGTaWTg8dshGz598LrVY4E%2B3HInJAiEA2g4YYbuRSs49VNSdkq2JJ9Q3YRR5s87fG71NAa10viIq%2FwMICRAAGgw2Mzc0MjMxODM4MDUiDKr7ycCp5iwfOF7yVCrcAxUtL6in6GaKVTIbe4L1Z9M4rtZhJX1pI8eu2BGNgvT0b7bzo%2FLl7797ukCCZX0HRb8d0BTwDIC8pDRCp7ezEyFGaK6AVMNMbggh4FFCQGej6yVvByy2ZRnz44%2Fs9KzxJ0vyDcdsaFF7ky77b1cTfJ%2FcflhIboLY5hryc90ZfUsN%2FAgReQO%2FG56yPIlx%2BvSQO52Hl2ZiOgqE2fxY1u%2BzvWGKcpE56MgoZaQCZHy0x4ZuDt7WMPt1GUeOPbrvl5h8kSKC%2BU5oIjAGF%2FTg1mRDx%2B2Kg5bLGDc5Q17GRwT%2FLtrwzPbIwwkCTShaEVHp02zcD%2FiAZvz6wNmZR5Se8En%2FTNnSejqI8XgcHZRk8eEHLkSsk2epKizyimJqk3t%2FqAK1wfNmV6ev9j1KZBbKY4%2F56e8BnVjaZoMZZa87Sg%2FE4SA5h5Nf%2B2RjtisCzLCgHzSTixQyvY7ezm%2BWnIkaD940SUYOc5rbk2a7UbF%2FItbkwqZXVCVAv7LVvYJOVWT5OzY0D6wvS4K%2Fc66xDQjzTbcmqKvSYccR%2BT4sEDJLHcJBKE5ql5w%2FNPEwWFlpmyGb6Ms7Dz05Ye9l1dHlbn18fvZbKSVNckD3DqrwA1BEG6ekdQa3C6OIHOIWyHCVB%2BPGMLiuo84GOqUBpMGfqPCQBEVkqnNWnrd90Glyn1wNI9joJaa9mDXiAsnieheDZt7ffu4q70E55BWnGggmwBjrj1Ymd8G3lBVvjI3FbPEbJoZCvo5%2Bs68vtnZ0UQL%2BTFRnSOsnpBwezpUewbOSVCa15VNNqCdFCu0U0sYaQC1%2Fjnlr5BC2u4ga7PJvT68CMLvyZiL5dBLFy%2BKW7r4LTyChsgvcC%2Bypfn4mNIDyp9RT&X-Amz-Signature=7e1874375f11548003de2251e4e683335625d623a2615d95cabca8cd0edf4266&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XE53BPR4%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083935Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJIMEYCIQDYIJXkNZ6YHHAqWX8aCLuDDXH2Z5d8Nc3ou3anjUb4%2BQIhAPb2kOUG7U8FZMEwn7F4bMToQ91EdTk7ibc%2F67Icy2nnKv8DCAkQABoMNjM3NDIzMTgzODA1IgyiiVzIe7%2Fr8hDTIZ4q3AMkgP%2F1TPraJY43lvvaHL0thMDLuVECA1hSs4%2BUpnCsMTj1hkK1uWPPjMug5KbDaGEgizGMONwYqwXGNe%2BdMJ5WRHGTdxUvWKdzOPeX2uoJO2OvNbw0Afe%2Bcuxso8qXvQV%2Bz2O%2FBrY2UrL8W4f0in0mXfFehu3khZJ3Ss%2FrbW0EcB1KPPwAuKHXd3TAoHvCBjKiONbQwSd0q49pqGDTi8BVZOohNMApFTpE567C%2BgERydUtqJyOsml2Ad5CZ%2FkmJSOhCkaao01udM%2BZdJyUJP7lEs1rSgHnr4WU7XJS7miiFfQYiZNJfv6yw1JQTATOYYEnClY%2BIglqUkxhxbk%2BrDoPmGhEv5Y9GG3AHJ0%2BBQpqdAqDKdzTbdgjTqOo0aaY0a5DUpQsH%2Bo8CaT5L6qJNOzDIq68WwO5jjVlEYPTj1m4QLyoLCgu7fdTXVal%2FxQBlb%2BVIhTdglYcnAW66DIWLPqFt5qbz8wx7GrTMvm9jtavrtH9v8ZmjcaixtpN7uDUFfqUhGyBCSTYlCFVxH53SNHCkG23A%2Ffi0NhOwVQ1EYhwk88bD4jdesbTR8Nb2Z90edqe6Mdjk5VoaecexpGAPzvp48%2BXFFO%2FadwDgClfPZt8PHgZEznqHEy9FwbxqTD0raPOBjqkAXh%2Fb7jNgr5Qp8nOwXtnSXWUb966b4YeteUSz0PIdHPUe34B3%2FLK%2BavGKCstAIHu4oFtpTgX2vXwzuwEtf2grs8A%2Bm6WluxgOJTgyHpOHajN4MYcqzJjK3o%2B87Czjy6aZrC%2BqVuFF%2FNL22u0o6olChPW1M0%2FStvaUbfeXcbpond8lERKxBcIEwAgdEm3lFE1JXMvmR%2BIWCY%2BoYDFX7kgjIwybkVY&X-Amz-Signature=41ca33db01d60882a8143b10952e2d1315524f6cd564148e80f396831c6e8b11&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665GKD3C2X%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083935Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJIMEYCIQD2dks3c5X1kfShWEcMKnV2yZEWTzUGBM5OnO4hVhP%2BJAIhAL%2BE%2FOzU%2FcLgRe88K11cFQSNPR0G5fiuKm0CIWYoA6JxKv8DCAkQABoMNjM3NDIzMTgzODA1IgzstS%2FIUgD%2BjUgevWEq3ANClWUoiDUPotW38ezlGx%2FtCOI5IUC30qraGYJhq%2F9Z4%2FIIZeXDzh9exItJijhTxWfugHsgQQloGl49KzbEQFZnShqrIXL%2FkIzWtFdgo82M%2FW%2BvVOMoU8NRH2XawHbe4H%2BDqBjiPBJ68K4R5hcFMti92xSy2fPKAQjqxDwAKs55Psqc8kot3ayFKEV9xElCmfCJnhe5diBdRwxTL0mQIL9Hrs9I8Z1zmvUJY3uAlOWijp1hUy2pdjLBTG6b9Cmowp5504Vj0kLcZ%2F7QqRv3OgUXxG7EQQ76q1rk3LbO5X2Ih8NCFj5xLmRAC6I7HLx4qxcVOteeGMLK%2FE2y6eh5pI6p%2FYdZrq%2Bt40i2%2BuQhKsgjDFxzSLr1RBirB7oQgn2PqTFPrFRNH35mAwenDHluwpf0VfsQNZzTaCkp%2FtRsx%2BeSMrMZhU%2FtAfgmEk21Sks9zKyaQIuNaU%2BhZv8LuqA8l50splHsHSD1cKWQ65IB6YOa0XnT5U0QY3QJ7A%2B5zu8Gbbh55R1oEQQ1MkZ2jWFay7eHPVQLMAXrf3npQ9rmCNhY3jfGbxBsk26e%2BmxiCw5emm%2FJoPiouWbhR4wGUWzUu3hY9SjI12lIc7GuI4IyJwFfR0vSsjTPteTvyYhKeDCur6POBjqkAXF87X6RWL%2FkHu7aSO2OUd6RMS2NrvxBp7DbAj6joIa7vxXJM97qS3Cv359KFmbYxnPGbkwR9jlPAYrkENzT3PJX9Va9CEAvRwxuK7%2FRQgR9I14qMLa1zCkPqsws1I1tAGizZ443msgr49O475wvKpB%2FE%2FUbNiPOEAjmDNTnFDuMhq%2FKaYGdhLxQGuKyy8uJc1WBGHhmvx2vr6tkgjF3Dxh9CGGi&X-Amz-Signature=d00a98a1e84d8427d2d6ca729281f30651fc8b12334dd9ce5429c4182dfbc5fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665GKD3C2X%2F20260329%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260329T083935Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEAaCXVzLXdlc3QtMiJIMEYCIQD2dks3c5X1kfShWEcMKnV2yZEWTzUGBM5OnO4hVhP%2BJAIhAL%2BE%2FOzU%2FcLgRe88K11cFQSNPR0G5fiuKm0CIWYoA6JxKv8DCAkQABoMNjM3NDIzMTgzODA1IgzstS%2FIUgD%2BjUgevWEq3ANClWUoiDUPotW38ezlGx%2FtCOI5IUC30qraGYJhq%2F9Z4%2FIIZeXDzh9exItJijhTxWfugHsgQQloGl49KzbEQFZnShqrIXL%2FkIzWtFdgo82M%2FW%2BvVOMoU8NRH2XawHbe4H%2BDqBjiPBJ68K4R5hcFMti92xSy2fPKAQjqxDwAKs55Psqc8kot3ayFKEV9xElCmfCJnhe5diBdRwxTL0mQIL9Hrs9I8Z1zmvUJY3uAlOWijp1hUy2pdjLBTG6b9Cmowp5504Vj0kLcZ%2F7QqRv3OgUXxG7EQQ76q1rk3LbO5X2Ih8NCFj5xLmRAC6I7HLx4qxcVOteeGMLK%2FE2y6eh5pI6p%2FYdZrq%2Bt40i2%2BuQhKsgjDFxzSLr1RBirB7oQgn2PqTFPrFRNH35mAwenDHluwpf0VfsQNZzTaCkp%2FtRsx%2BeSMrMZhU%2FtAfgmEk21Sks9zKyaQIuNaU%2BhZv8LuqA8l50splHsHSD1cKWQ65IB6YOa0XnT5U0QY3QJ7A%2B5zu8Gbbh55R1oEQQ1MkZ2jWFay7eHPVQLMAXrf3npQ9rmCNhY3jfGbxBsk26e%2BmxiCw5emm%2FJoPiouWbhR4wGUWzUu3hY9SjI12lIc7GuI4IyJwFfR0vSsjTPteTvyYhKeDCur6POBjqkAXF87X6RWL%2FkHu7aSO2OUd6RMS2NrvxBp7DbAj6joIa7vxXJM97qS3Cv359KFmbYxnPGbkwR9jlPAYrkENzT3PJX9Va9CEAvRwxuK7%2FRQgR9I14qMLa1zCkPqsws1I1tAGizZ443msgr49O475wvKpB%2FE%2FUbNiPOEAjmDNTnFDuMhq%2FKaYGdhLxQGuKyy8uJc1WBGHhmvx2vr6tkgjF3Dxh9CGGi&X-Amz-Signature=93c576cec04087f50555d90396f9d7559c898187c6cdee37d7723407a2494490&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Equal Sum Partition](https://leetcode.com/problems/partition-equal-subset-sum/description/) - Given an array, return true if it can be divided into two subsets with equal sum?</summary>
- For equal sum equation becomes 2s = S where S is the target sum. s = S/2. If there is a subset equal to S/2 then the array can be divided into two subsets of equal sum. Same as Subset Sum Problem.

</details>

<details>
<summary>[Perfect Sum Problem](https://www.geeksforgeeks.org/problems/perfect-sum-problem5633/1) - Given an array, return the number of subsets with sum equal to target S</summary>
- When we needed to max profit we did max (include, exclude)
- When we needed to find if a subset exists, we did OR (include, exclude)
- To find the count we would do SUM(include, exclude) results and we return 1 whenever we find a subset so that all the 1s count.

</details>

<details>
<summary>[Minimum Subset Sum Difference](https://www.geeksforgeeks.org/problems/minimum-sum-partition3317/1) - Given an array, return the minimum possible difference between two subset sums</summary>
- We need to minimise abs(s1-s2) where s1 & s2 are two valid subset sums. s1+s2 = total sum of array
- Min abs(s1-s2) can be 0. Start from there.

</details>

<details>
<summary>WHAT TO DO WHEN WE HAVE 0s in the subset? How does the Base Condition change then?</summary>

With 0s or duplicates, specially when counting subsets, we need to account for all possible options. Example for a sum 0 the possible subsets can be not only a { } but also {0}, {0,0} 
Meaning we cannot just return from a branch when we see sum==0, go down till n==0 also and return 1 for that. 


```c++
if(n==0) return sum==0?1:0;
```


</details>

<details>
<summary>[Partitions with Given Difference](https://www.geeksforgeeks.org/problems/partitions-with-given-difference/1) - Given array, partition it into s1, s2 such that diff between them is d. Count number of such subsets.</summary>

s1+s2 = S (total Sum)
s1-s2 = d
2s1 = S + d         therefore we need count of s1s which equals (S+d)/2


</details>


### Resources

- [https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go](https://www.youtube.com/watch?v=nqowUJzG-iM&list=PL_z_8CaSLPWekqhdCPmFohncHwz8TY2Go)

### Notes (use sparingly!)

- Start with Recursive solution which is Base Condition + Choice Diagram (include/exclude)
- For Top-Down start with initialising matrix with base condition
- Convert the recursive hypothesis into a formula to fill up the remaining matrix
