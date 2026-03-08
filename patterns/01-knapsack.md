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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGO4ZW6C%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDHNFhvrOGNgj2gtIdpPNBdYrnjyPkzJ9NiasAhbglYtwIhAKYqF5zjT02g1CBr4glgAMDynVEJc1BCEvxpbA0n505IKv8DCBEQABoMNjM3NDIzMTgzODA1IgxlWsyDgy%2FeGOlsSfIq3AMHbcZoLDv%2BrDlstxRaVAD%2BlQTr3OOu%2FMqhv9A1%2BMVyYVRvRWrlPdQDBPigkOW%2FJOyZTMnMgs9Afjlrskj44WQZ6XF19eKDDWStB0I1ZDnlzz5CFU00JQBz3ZTEEyLDtV4QLLmshMVTdp0XCZ0IiXssT46bzNlQTcSAofhqZSMkUSD890r8%2BPo5coTdkGPTwXSUkjEDgsrESTICPHsKADWGy0B%2BOBsMiG1m1z603uhmPwNpFcYSl0l%2FukxWqTv09Pp5xl3lUYmrh0GQu59Yl6KlhFiBnPvji%2B09bmqpiFQMtOEZNavo2XSNiTLTWgg2wnZkHdqMCzzGDd420buzcppOo0X1ahdgpKXW9v0Weu6SqTpwxrhhIy6HVKgi0B6369%2BD%2BOKcq98jmFINChOV%2Bs8sKq2gTTbXQuzoYHlgd8D%2ByeOWBFTon8UP%2FOZDYsg7Ewth0OsKbosbBrH7rxjdWuW25NK7jF3aKyndEbu9CN5Ax5PT90mxMT5e2MaWvsxmoy610nXBOqJeDgMf8IoxWZ15pUpqmWWvqkV8Xjthd2j96vj9uPIy9gRbjQGUEE82RR3OmCvFNN6Gvrub2jX1rEj8JABBuP%2Fho04jV8XHFmZn7h5vwj5skK79h5rb9DCWzrTNBjqkAS2yGNb3jU9MzCe%2BByxdRAbUeXfdsEhC%2FMfHVa7VUhMl0aoesArUHbAyLHyZruRk1Wpu8fNc2V5f8V1Zv7uYJyCZjZQV3UwoZE3qBBERoRLDhnSlVQs1ytwCSNdPKFGUEq0%2FrFwmdHbcWsk2A6qnfmZAJWQlFjMUqYkOY%2FMg1svQPLOw2vAQv3yQyHMFZ1NfD801E2htT3mEOu5DQFpOYrgE9ZPO&X-Amz-Signature=cb62d029945ec1d507432243f89ae06416434bdd725449e99356285adf909934&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGO4ZW6C%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDHNFhvrOGNgj2gtIdpPNBdYrnjyPkzJ9NiasAhbglYtwIhAKYqF5zjT02g1CBr4glgAMDynVEJc1BCEvxpbA0n505IKv8DCBEQABoMNjM3NDIzMTgzODA1IgxlWsyDgy%2FeGOlsSfIq3AMHbcZoLDv%2BrDlstxRaVAD%2BlQTr3OOu%2FMqhv9A1%2BMVyYVRvRWrlPdQDBPigkOW%2FJOyZTMnMgs9Afjlrskj44WQZ6XF19eKDDWStB0I1ZDnlzz5CFU00JQBz3ZTEEyLDtV4QLLmshMVTdp0XCZ0IiXssT46bzNlQTcSAofhqZSMkUSD890r8%2BPo5coTdkGPTwXSUkjEDgsrESTICPHsKADWGy0B%2BOBsMiG1m1z603uhmPwNpFcYSl0l%2FukxWqTv09Pp5xl3lUYmrh0GQu59Yl6KlhFiBnPvji%2B09bmqpiFQMtOEZNavo2XSNiTLTWgg2wnZkHdqMCzzGDd420buzcppOo0X1ahdgpKXW9v0Weu6SqTpwxrhhIy6HVKgi0B6369%2BD%2BOKcq98jmFINChOV%2Bs8sKq2gTTbXQuzoYHlgd8D%2ByeOWBFTon8UP%2FOZDYsg7Ewth0OsKbosbBrH7rxjdWuW25NK7jF3aKyndEbu9CN5Ax5PT90mxMT5e2MaWvsxmoy610nXBOqJeDgMf8IoxWZ15pUpqmWWvqkV8Xjthd2j96vj9uPIy9gRbjQGUEE82RR3OmCvFNN6Gvrub2jX1rEj8JABBuP%2Fho04jV8XHFmZn7h5vwj5skK79h5rb9DCWzrTNBjqkAS2yGNb3jU9MzCe%2BByxdRAbUeXfdsEhC%2FMfHVa7VUhMl0aoesArUHbAyLHyZruRk1Wpu8fNc2V5f8V1Zv7uYJyCZjZQV3UwoZE3qBBERoRLDhnSlVQs1ytwCSNdPKFGUEq0%2FrFwmdHbcWsk2A6qnfmZAJWQlFjMUqYkOY%2FMg1svQPLOw2vAQv3yQyHMFZ1NfD801E2htT3mEOu5DQFpOYrgE9ZPO&X-Amz-Signature=3d7f874faee832953273d59bb8e9600d49335daed6aeb7b7d4b626d77ec14701&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XGO4ZW6C%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJIMEYCIQDHNFhvrOGNgj2gtIdpPNBdYrnjyPkzJ9NiasAhbglYtwIhAKYqF5zjT02g1CBr4glgAMDynVEJc1BCEvxpbA0n505IKv8DCBEQABoMNjM3NDIzMTgzODA1IgxlWsyDgy%2FeGOlsSfIq3AMHbcZoLDv%2BrDlstxRaVAD%2BlQTr3OOu%2FMqhv9A1%2BMVyYVRvRWrlPdQDBPigkOW%2FJOyZTMnMgs9Afjlrskj44WQZ6XF19eKDDWStB0I1ZDnlzz5CFU00JQBz3ZTEEyLDtV4QLLmshMVTdp0XCZ0IiXssT46bzNlQTcSAofhqZSMkUSD890r8%2BPo5coTdkGPTwXSUkjEDgsrESTICPHsKADWGy0B%2BOBsMiG1m1z603uhmPwNpFcYSl0l%2FukxWqTv09Pp5xl3lUYmrh0GQu59Yl6KlhFiBnPvji%2B09bmqpiFQMtOEZNavo2XSNiTLTWgg2wnZkHdqMCzzGDd420buzcppOo0X1ahdgpKXW9v0Weu6SqTpwxrhhIy6HVKgi0B6369%2BD%2BOKcq98jmFINChOV%2Bs8sKq2gTTbXQuzoYHlgd8D%2ByeOWBFTon8UP%2FOZDYsg7Ewth0OsKbosbBrH7rxjdWuW25NK7jF3aKyndEbu9CN5Ax5PT90mxMT5e2MaWvsxmoy610nXBOqJeDgMf8IoxWZ15pUpqmWWvqkV8Xjthd2j96vj9uPIy9gRbjQGUEE82RR3OmCvFNN6Gvrub2jX1rEj8JABBuP%2Fho04jV8XHFmZn7h5vwj5skK79h5rb9DCWzrTNBjqkAS2yGNb3jU9MzCe%2BByxdRAbUeXfdsEhC%2FMfHVa7VUhMl0aoesArUHbAyLHyZruRk1Wpu8fNc2V5f8V1Zv7uYJyCZjZQV3UwoZE3qBBERoRLDhnSlVQs1ytwCSNdPKFGUEq0%2FrFwmdHbcWsk2A6qnfmZAJWQlFjMUqYkOY%2FMg1svQPLOw2vAQv3yQyHMFZ1NfD801E2htT3mEOu5DQFpOYrgE9ZPO&X-Amz-Signature=d26eb5356cf27f9c997911de62f20448fa123f4d4d7983c25fd2897fbbbecdd6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZISVLQBC%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIF9iOipxoC4a0HUtulAR7uSos9t53RLTWX5%2BCLPPShZAAiAxEPwvbFE%2BfPCzA8WlnIT%2FvOZe7PeWL4ELxeYEQ%2BeKqCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMRsXoguxgRvmHHVF3KtwDm%2BnrKDYwPPQ9E%2B9H0%2FamXYkscF8d1HdMcp6fHdtKJB1d0%2FYC0UcqH5ojMsf4Adj2lF91uzBUqJlfH44W4R7%2FJJUl14ql918V0fg%2BmBApfBk%2FVkXQIbj%2BH4c39cwLBWsTFhlaoDCjS1UQ4heB%2BCMMfi8zs299DtixTt8Zikf0cqZjoubNY8CYUT5AcCItB5%2B5hQ7L%2FFsItr2rURTvfoUEOUxkqFV%2BtkWTkP%2FBnL32%2BPVyc5DPBOEb3a495UsRygl6xGar55gdu2IVAHvjGj3lgKNVX2rSLenZS%2B%2FGr5KnjYpPspk7qP%2FiO5Ez2AMyq4DvsF50957yjTY2QA6BHm70oO%2BU6D9aDeMAxhZv7Ti2P6WIS%2F3mPSAjyXR7as8zoAIH94cRh6oZy5G7GlcpPeYtmQk0gQWPvZ%2FU6ar0KsZwF5nAX3wrkMZe9uPSvYcw%2FjnbcCy5UQFjF5sBVmjVgQOJxEVGeMrlTnv7whAjC7pXfuWVsHaCuI6eWVtvTASl50EyrITDpd07ZDdgcoT0XyBtHE122rUWLS%2BiUH%2FJYkCEPrgBL7Ped2TKbMC5YmGrrcSh7%2BABwkGwHbEa3NCfD33qgL3a59mtvnhFTGpNYtfspT8lRI7NDV31IZuA4gAw98y0zQY6pgHY8eLmvokloA0fRbNbpcpxJx6z7USEq%2FrYsg6EJfl1wmVOcrkKn9k57AXDJZ9aKH2DM%2BTWY73Hyb1nVUhOTpnb1GEjg1m6hrsgwOODpdFdojjRZOEzxzjtByT2tVGmcCs%2FP8fjDagiva%2BEekSRo13SCPzp4UoWP1W7w%2BcEmqIsM96B%2Fj1M62h5SLdcgaYYrltYX4%2Fjb74P%2BNfpfVB0FHNjkggTPkhL&X-Amz-Signature=9e1598efb03d0671b16003c6cdb3904a3e6edf4cdc9ca9d9769966a79fd06175&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZISVLQBC%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIF9iOipxoC4a0HUtulAR7uSos9t53RLTWX5%2BCLPPShZAAiAxEPwvbFE%2BfPCzA8WlnIT%2FvOZe7PeWL4ELxeYEQ%2BeKqCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMRsXoguxgRvmHHVF3KtwDm%2BnrKDYwPPQ9E%2B9H0%2FamXYkscF8d1HdMcp6fHdtKJB1d0%2FYC0UcqH5ojMsf4Adj2lF91uzBUqJlfH44W4R7%2FJJUl14ql918V0fg%2BmBApfBk%2FVkXQIbj%2BH4c39cwLBWsTFhlaoDCjS1UQ4heB%2BCMMfi8zs299DtixTt8Zikf0cqZjoubNY8CYUT5AcCItB5%2B5hQ7L%2FFsItr2rURTvfoUEOUxkqFV%2BtkWTkP%2FBnL32%2BPVyc5DPBOEb3a495UsRygl6xGar55gdu2IVAHvjGj3lgKNVX2rSLenZS%2B%2FGr5KnjYpPspk7qP%2FiO5Ez2AMyq4DvsF50957yjTY2QA6BHm70oO%2BU6D9aDeMAxhZv7Ti2P6WIS%2F3mPSAjyXR7as8zoAIH94cRh6oZy5G7GlcpPeYtmQk0gQWPvZ%2FU6ar0KsZwF5nAX3wrkMZe9uPSvYcw%2FjnbcCy5UQFjF5sBVmjVgQOJxEVGeMrlTnv7whAjC7pXfuWVsHaCuI6eWVtvTASl50EyrITDpd07ZDdgcoT0XyBtHE122rUWLS%2BiUH%2FJYkCEPrgBL7Ped2TKbMC5YmGrrcSh7%2BABwkGwHbEa3NCfD33qgL3a59mtvnhFTGpNYtfspT8lRI7NDV31IZuA4gAw98y0zQY6pgHY8eLmvokloA0fRbNbpcpxJx6z7USEq%2FrYsg6EJfl1wmVOcrkKn9k57AXDJZ9aKH2DM%2BTWY73Hyb1nVUhOTpnb1GEjg1m6hrsgwOODpdFdojjRZOEzxzjtByT2tVGmcCs%2FP8fjDagiva%2BEekSRo13SCPzp4UoWP1W7w%2BcEmqIsM96B%2Fj1M62h5SLdcgaYYrltYX4%2Fjb74P%2BNfpfVB0FHNjkggTPkhL&X-Amz-Signature=f54368db49efd7f873f9be9c18a9100eccf2026f62f032e998d7569e2d5623dd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZISVLQBC%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIF9iOipxoC4a0HUtulAR7uSos9t53RLTWX5%2BCLPPShZAAiAxEPwvbFE%2BfPCzA8WlnIT%2FvOZe7PeWL4ELxeYEQ%2BeKqCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMRsXoguxgRvmHHVF3KtwDm%2BnrKDYwPPQ9E%2B9H0%2FamXYkscF8d1HdMcp6fHdtKJB1d0%2FYC0UcqH5ojMsf4Adj2lF91uzBUqJlfH44W4R7%2FJJUl14ql918V0fg%2BmBApfBk%2FVkXQIbj%2BH4c39cwLBWsTFhlaoDCjS1UQ4heB%2BCMMfi8zs299DtixTt8Zikf0cqZjoubNY8CYUT5AcCItB5%2B5hQ7L%2FFsItr2rURTvfoUEOUxkqFV%2BtkWTkP%2FBnL32%2BPVyc5DPBOEb3a495UsRygl6xGar55gdu2IVAHvjGj3lgKNVX2rSLenZS%2B%2FGr5KnjYpPspk7qP%2FiO5Ez2AMyq4DvsF50957yjTY2QA6BHm70oO%2BU6D9aDeMAxhZv7Ti2P6WIS%2F3mPSAjyXR7as8zoAIH94cRh6oZy5G7GlcpPeYtmQk0gQWPvZ%2FU6ar0KsZwF5nAX3wrkMZe9uPSvYcw%2FjnbcCy5UQFjF5sBVmjVgQOJxEVGeMrlTnv7whAjC7pXfuWVsHaCuI6eWVtvTASl50EyrITDpd07ZDdgcoT0XyBtHE122rUWLS%2BiUH%2FJYkCEPrgBL7Ped2TKbMC5YmGrrcSh7%2BABwkGwHbEa3NCfD33qgL3a59mtvnhFTGpNYtfspT8lRI7NDV31IZuA4gAw98y0zQY6pgHY8eLmvokloA0fRbNbpcpxJx6z7USEq%2FrYsg6EJfl1wmVOcrkKn9k57AXDJZ9aKH2DM%2BTWY73Hyb1nVUhOTpnb1GEjg1m6hrsgwOODpdFdojjRZOEzxzjtByT2tVGmcCs%2FP8fjDagiva%2BEekSRo13SCPzp4UoWP1W7w%2BcEmqIsM96B%2Fj1M62h5SLdcgaYYrltYX4%2Fjb74P%2BNfpfVB0FHNjkggTPkhL&X-Amz-Signature=8100c7830c4b452176de6989c51f10e612280fe4f61674845bdff18185900163&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZISVLQBC%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCIF9iOipxoC4a0HUtulAR7uSos9t53RLTWX5%2BCLPPShZAAiAxEPwvbFE%2BfPCzA8WlnIT%2FvOZe7PeWL4ELxeYEQ%2BeKqCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMRsXoguxgRvmHHVF3KtwDm%2BnrKDYwPPQ9E%2B9H0%2FamXYkscF8d1HdMcp6fHdtKJB1d0%2FYC0UcqH5ojMsf4Adj2lF91uzBUqJlfH44W4R7%2FJJUl14ql918V0fg%2BmBApfBk%2FVkXQIbj%2BH4c39cwLBWsTFhlaoDCjS1UQ4heB%2BCMMfi8zs299DtixTt8Zikf0cqZjoubNY8CYUT5AcCItB5%2B5hQ7L%2FFsItr2rURTvfoUEOUxkqFV%2BtkWTkP%2FBnL32%2BPVyc5DPBOEb3a495UsRygl6xGar55gdu2IVAHvjGj3lgKNVX2rSLenZS%2B%2FGr5KnjYpPspk7qP%2FiO5Ez2AMyq4DvsF50957yjTY2QA6BHm70oO%2BU6D9aDeMAxhZv7Ti2P6WIS%2F3mPSAjyXR7as8zoAIH94cRh6oZy5G7GlcpPeYtmQk0gQWPvZ%2FU6ar0KsZwF5nAX3wrkMZe9uPSvYcw%2FjnbcCy5UQFjF5sBVmjVgQOJxEVGeMrlTnv7whAjC7pXfuWVsHaCuI6eWVtvTASl50EyrITDpd07ZDdgcoT0XyBtHE122rUWLS%2BiUH%2FJYkCEPrgBL7Ped2TKbMC5YmGrrcSh7%2BABwkGwHbEa3NCfD33qgL3a59mtvnhFTGpNYtfspT8lRI7NDV31IZuA4gAw98y0zQY6pgHY8eLmvokloA0fRbNbpcpxJx6z7USEq%2FrYsg6EJfl1wmVOcrkKn9k57AXDJZ9aKH2DM%2BTWY73Hyb1nVUhOTpnb1GEjg1m6hrsgwOODpdFdojjRZOEzxzjtByT2tVGmcCs%2FP8fjDagiva%2BEekSRo13SCPzp4UoWP1W7w%2BcEmqIsM96B%2Fj1M62h5SLdcgaYYrltYX4%2Fjb74P%2BNfpfVB0FHNjkggTPkhL&X-Amz-Signature=51fa994130a4c9999525acac41acf7ac54265cec3d816569cf8968edfc0278ac&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TNFLWWND%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083059Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJHMEUCIQDDg9UjbszfhsBUfkkNREEhrHu0SpNRzFYwwQ%2F1e%2FpdrwIgEVuGc3b1jPCBGYvxeKJJKjjKP7YvhiAva9JJi0hZio4q%2FwMIERAAGgw2Mzc0MjMxODM4MDUiDJ1nAAjRZ9puPMaIqSrcA%2B3BFAR3NcGvQJjLRX9DSf0egj%2Fn9mX4rwM3VYyJ2JIcQEFiTLMYkASKAst01R5AlP6w8R1HMgeYG4WvzldS6VkhnA3uLJUE5W0rAUy7C44A4issFypcBmm7jChSKkg5YuD3gn5oOVTkIe2W6l1xRjlm90EvkDvnceSLWKeETZCTRNbQDzm7I6Tf9uQ2TvLnIdr9epaTMi%2Fw8pv9RxIFkveH9HGs2TRkBeOfvbOG2fyLIZSGgWw%2BJWv5Z3La8WOYUJxGmNG7kmMfD%2BrXLX8KylMDcwVtQzJhEtVXAs%2BzgjpUpLM3cXIGkSt28Cdls0w2Sv%2B19NTe2Qins9gHa2SGIX9UOx9V4WmDvfO4PKR%2FpMxux2Ut5reyb4W2XWyNsaA8%2FNUzwYZdvGEJe2hyWZEA8e3o8kxFV8W7RxqykqbjIjy8%2BwUySxM02HMtVn4DsqlNQj2tVuFzirOy0Cp99%2BA7W9VPM6I6UMFnoaemM2ImoaWfgyRCGfwN6T4o2ARfISoJtTANDHF0sDmqNV%2B7O6W7rmIOutuJfV5BqdwB9pn7kMxU81W7XsFxYImXIjJxK%2BHC7OLaP1M2AKdusJojSbLQm9r6PP%2BmWFKvgDUVHRU0TFt%2BGpli4o9a2MMrGaBtMJ3OtM0GOqUBTNKE87Hx8IXagWUR0ZAuyK5LRery34rA0k6QdkCdVuN0IQDI27%2B3rtxTd7KxssNOAeWyV9zGapy9iA7TJLRmYZmTiv3pPEa2q1vq0ZNV4qaHRZau9UFvo2D%2Bh4rnoDCze95NDqt6p2TImhoYb2lkdRW8T%2FmV3aETtiucwGbaj5wUgGOujBlO5pb7BrsYSyAL%2FYEQ48wb%2B1zxsHfT%2Bucjnylzw7F%2F&X-Amz-Signature=d95b30576113cae163ff0c6333b5cfcbf6ed01148e1d980979e059f88acff630&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SREQLDS%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083103Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCICUR53VFokrkflWa%2Fkp8IzRbyiYaW4XWwmFFAkIWkNglAiBUwCEycWJf9k3cssVpSj6EjgrSy1di%2BFltMC2IZkF9VCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMejAbfto7v6GiiBK7KtwDjdiRWOKH%2B7igiN48bJTMlQRl35NPYtSD8Vb9L598kzpc9oiOputh1k3zeMV%2FJMdmH%2FGQTbuaTceegbui6lyNzs1D%2BLc7ZjK3QcB9000TIVtsMNlXItQmYHdURdbWtvkrXEGXKNvabKVZTi%2BiTwKfbHdQmp20TSq4bC25nd1En%2BlvXw9jOcbwwjfayVNlbjJfYg7PbLa5B%2F9bvoCc8Q3scKSzz1lN5bkk1%2Bav0JJe5NoGrAWB5xC1Qx4jGoQI6C8TC5n7rWQ2BSxTr%2Bbu3umhVNDVcp2SgRAxucYZ6JL9XSy%2F3Xo%2F0suyggaE9hJ4q2cyR3KhEZaoYxwQfCQK%2F8rlKN31BhC8nekksQz3JdL%2FptQLv4InO9akUZxaltb3NXHycKjDyELl7suYTJ2zKPZ2hsiMnSLQymgDbHSYPt12g5GWNTjkWyNgwGnjfcZ%2FnyGOQvKNkbfnSPiCyhjEwyEC1jCk6wtTG6s6FS4XwZhTtztpu7sO7dqIVHABGr77PDbUFaAe45JoO3RfZsu3ZScMaK3pmpQNgTXT79ujSg%2FhpKNNi9IFmSTYAYQ3aDWBRlySqZ8n7bMzp4PdDO5MKA2M%2FwzjRnTNqZHPGK6BOEA15IABpGNaOHa3Gz5NZLcwlc60zQY6pgEpqXdROEuHGg8y4HJ11sA60e8GH%2FZMNCTRFGNgxpX7KROQCPYZ7uv%2BCrQdY%2BGBJEuKwWN07d9jV4GWl6JpMPtD7GqZ8V2%2FCvXL2ZQutxbqWEyOahuhU9DR%2BCygCn%2B%2F8SPsJsECZOO%2FySYTJei1ns2q3I9Z6QomFqHwByQYhKAK9aVtBHlfAdP5iN7Nhgrf7PmIiDJVXoJylmou4hJ%2BzThzo1x16wsa&X-Amz-Signature=8f32e6f1bd79de7cdebc9d8d9c52b3601613a6becaf56c4b46e697e9ad6c8082&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663SREQLDS%2F20260308%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260308T083103Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEEgaCXVzLXdlc3QtMiJGMEQCICUR53VFokrkflWa%2Fkp8IzRbyiYaW4XWwmFFAkIWkNglAiBUwCEycWJf9k3cssVpSj6EjgrSy1di%2BFltMC2IZkF9VCr%2FAwgREAAaDDYzNzQyMzE4MzgwNSIMejAbfto7v6GiiBK7KtwDjdiRWOKH%2B7igiN48bJTMlQRl35NPYtSD8Vb9L598kzpc9oiOputh1k3zeMV%2FJMdmH%2FGQTbuaTceegbui6lyNzs1D%2BLc7ZjK3QcB9000TIVtsMNlXItQmYHdURdbWtvkrXEGXKNvabKVZTi%2BiTwKfbHdQmp20TSq4bC25nd1En%2BlvXw9jOcbwwjfayVNlbjJfYg7PbLa5B%2F9bvoCc8Q3scKSzz1lN5bkk1%2Bav0JJe5NoGrAWB5xC1Qx4jGoQI6C8TC5n7rWQ2BSxTr%2Bbu3umhVNDVcp2SgRAxucYZ6JL9XSy%2F3Xo%2F0suyggaE9hJ4q2cyR3KhEZaoYxwQfCQK%2F8rlKN31BhC8nekksQz3JdL%2FptQLv4InO9akUZxaltb3NXHycKjDyELl7suYTJ2zKPZ2hsiMnSLQymgDbHSYPt12g5GWNTjkWyNgwGnjfcZ%2FnyGOQvKNkbfnSPiCyhjEwyEC1jCk6wtTG6s6FS4XwZhTtztpu7sO7dqIVHABGr77PDbUFaAe45JoO3RfZsu3ZScMaK3pmpQNgTXT79ujSg%2FhpKNNi9IFmSTYAYQ3aDWBRlySqZ8n7bMzp4PdDO5MKA2M%2FwzjRnTNqZHPGK6BOEA15IABpGNaOHa3Gz5NZLcwlc60zQY6pgEpqXdROEuHGg8y4HJ11sA60e8GH%2FZMNCTRFGNgxpX7KROQCPYZ7uv%2BCrQdY%2BGBJEuKwWN07d9jV4GWl6JpMPtD7GqZ8V2%2FCvXL2ZQutxbqWEyOahuhU9DR%2BCygCn%2B%2F8SPsJsECZOO%2FySYTJei1ns2q3I9Z6QomFqHwByQYhKAK9aVtBHlfAdP5iN7Nhgrf7PmIiDJVXoJylmou4hJ%2BzThzo1x16wsa&X-Amz-Signature=53d9f580a7cd59a35eed860265ef4a0822907fb0bf84cfb9ebbf7e8fe7d610e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
