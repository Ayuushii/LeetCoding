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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662XTLZVT7%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCIQDEw1kdyRB50bFQha2%2FZr3LbfgX1PQn42k6H%2Fuc9FNB3AIgGus%2FdbxcOwqMmFJhsg9xWwi7z3GUhZMXBWHh9yIBU5UqiAQI5f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMZFOmBDF1NKSvR8RSrcAwJCQVeWgEteRu33gq9TvfhcEMCmHBnxJKjJ2GMNppkX0iJzn8qLMgb6Ri2Gi9Ii0DtKUyChMv3%2BInQSHbX%2FD1X7lgBbgQmchxptpc8u%2B1AvyW69oPbOGS%2FUxwVD6g3PUHZETvZWDcDa28AE9U4h1ucmGv5t2kbAabVUgb40invE8JxUau5J4sQhR1nnWM0dkNJJLu9QprJgxlowS7fGWhW5s01vmGVFJWe%2FHa8JqaapZdia205zGU0uqp%2BvmAmsFtM%2FjQxlIwo7BrHc%2FUG3F81ZDW2fIzcWKAjo8p6XHYSsihGe3vfze3n%2FW7Fx3Jgwxc2slmX96Bxx3ijNBalBsESbpZD7UfNMiknSJ4cya1BtSnMv1rCIXp7uBh1%2Fa7BG18En1qERN2lWnXHD9nkR%2FWyybUMFbjm1iquBzzo6r8u%2FO%2Bioqy7OWbyApHPxXzF6nltHchYb%2FrBF7AJZo3n57k6D6M%2FTHRaw6Au8VJx3fyvhHN61otsuNt39spaj3Az12UbPu9r9%2FcSLI2UGOk1q9lW9i3d%2BlF3SHiAGGz9bcA9WSzOi%2By5qYd%2FzyPS5rQBQVSZWA5DsOGGBNt%2BZeKhEcp8XZ9XcL%2FrpGhA8OXG2GaZXffxWWc7oTDx7kASOMOqiyNYGOqUBcmti5P8y4%2F%2FcUvtMljPzJGmoLRAwUL4c7RrR3xlreEbcAJEm0ce%2BlzrYo%2BUn%2BJGJbk8Z6fcIuspFG8PoSuMGD6fPwVclus%2F4%2FeExj3WoSRkvR2LgQoje0DtkjLVtOkDO6CnyM9aMIiY%2BHx7IoNQz%2BYsCJUiBosVtATIDyynOBTj6hxARtEGyFL%2Bp19A4CoWPs%2Bo48FN21CC1eDaw6D%2FbWLBnImJh&X-Amz-Signature=f9bdac031209489f84cb8bce90e84801fe00a98f1168bc42a49e22e74dbb0d12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662XTLZVT7%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCIQDEw1kdyRB50bFQha2%2FZr3LbfgX1PQn42k6H%2Fuc9FNB3AIgGus%2FdbxcOwqMmFJhsg9xWwi7z3GUhZMXBWHh9yIBU5UqiAQI5f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMZFOmBDF1NKSvR8RSrcAwJCQVeWgEteRu33gq9TvfhcEMCmHBnxJKjJ2GMNppkX0iJzn8qLMgb6Ri2Gi9Ii0DtKUyChMv3%2BInQSHbX%2FD1X7lgBbgQmchxptpc8u%2B1AvyW69oPbOGS%2FUxwVD6g3PUHZETvZWDcDa28AE9U4h1ucmGv5t2kbAabVUgb40invE8JxUau5J4sQhR1nnWM0dkNJJLu9QprJgxlowS7fGWhW5s01vmGVFJWe%2FHa8JqaapZdia205zGU0uqp%2BvmAmsFtM%2FjQxlIwo7BrHc%2FUG3F81ZDW2fIzcWKAjo8p6XHYSsihGe3vfze3n%2FW7Fx3Jgwxc2slmX96Bxx3ijNBalBsESbpZD7UfNMiknSJ4cya1BtSnMv1rCIXp7uBh1%2Fa7BG18En1qERN2lWnXHD9nkR%2FWyybUMFbjm1iquBzzo6r8u%2FO%2Bioqy7OWbyApHPxXzF6nltHchYb%2FrBF7AJZo3n57k6D6M%2FTHRaw6Au8VJx3fyvhHN61otsuNt39spaj3Az12UbPu9r9%2FcSLI2UGOk1q9lW9i3d%2BlF3SHiAGGz9bcA9WSzOi%2By5qYd%2FzyPS5rQBQVSZWA5DsOGGBNt%2BZeKhEcp8XZ9XcL%2FrpGhA8OXG2GaZXffxWWc7oTDx7kASOMOqiyNYGOqUBcmti5P8y4%2F%2FcUvtMljPzJGmoLRAwUL4c7RrR3xlreEbcAJEm0ce%2BlzrYo%2BUn%2BJGJbk8Z6fcIuspFG8PoSuMGD6fPwVclus%2F4%2FeExj3WoSRkvR2LgQoje0DtkjLVtOkDO6CnyM9aMIiY%2BHx7IoNQz%2BYsCJUiBosVtATIDyynOBTj6hxARtEGyFL%2Bp19A4CoWPs%2Bo48FN21CC1eDaw6D%2FbWLBnImJh&X-Amz-Signature=fa8eb08665c2dc72ba35fe0134b2dc10b3047ca9732ad9a9b5747979693fb905&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662XTLZVT7%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCIQDEw1kdyRB50bFQha2%2FZr3LbfgX1PQn42k6H%2Fuc9FNB3AIgGus%2FdbxcOwqMmFJhsg9xWwi7z3GUhZMXBWHh9yIBU5UqiAQI5f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMZFOmBDF1NKSvR8RSrcAwJCQVeWgEteRu33gq9TvfhcEMCmHBnxJKjJ2GMNppkX0iJzn8qLMgb6Ri2Gi9Ii0DtKUyChMv3%2BInQSHbX%2FD1X7lgBbgQmchxptpc8u%2B1AvyW69oPbOGS%2FUxwVD6g3PUHZETvZWDcDa28AE9U4h1ucmGv5t2kbAabVUgb40invE8JxUau5J4sQhR1nnWM0dkNJJLu9QprJgxlowS7fGWhW5s01vmGVFJWe%2FHa8JqaapZdia205zGU0uqp%2BvmAmsFtM%2FjQxlIwo7BrHc%2FUG3F81ZDW2fIzcWKAjo8p6XHYSsihGe3vfze3n%2FW7Fx3Jgwxc2slmX96Bxx3ijNBalBsESbpZD7UfNMiknSJ4cya1BtSnMv1rCIXp7uBh1%2Fa7BG18En1qERN2lWnXHD9nkR%2FWyybUMFbjm1iquBzzo6r8u%2FO%2Bioqy7OWbyApHPxXzF6nltHchYb%2FrBF7AJZo3n57k6D6M%2FTHRaw6Au8VJx3fyvhHN61otsuNt39spaj3Az12UbPu9r9%2FcSLI2UGOk1q9lW9i3d%2BlF3SHiAGGz9bcA9WSzOi%2By5qYd%2FzyPS5rQBQVSZWA5DsOGGBNt%2BZeKhEcp8XZ9XcL%2FrpGhA8OXG2GaZXffxWWc7oTDx7kASOMOqiyNYGOqUBcmti5P8y4%2F%2FcUvtMljPzJGmoLRAwUL4c7RrR3xlreEbcAJEm0ce%2BlzrYo%2BUn%2BJGJbk8Z6fcIuspFG8PoSuMGD6fPwVclus%2F4%2FeExj3WoSRkvR2LgQoje0DtkjLVtOkDO6CnyM9aMIiY%2BHx7IoNQz%2BYsCJUiBosVtATIDyynOBTj6hxARtEGyFL%2Bp19A4CoWPs%2Bo48FN21CC1eDaw6D%2FbWLBnImJh&X-Amz-Signature=4d77a82a123176bb27265ee03d80dc2ce685974c9420cff6b3bfd254b68c2e3d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLMO5XTK%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCICAsW2VgNWl4Dt9Tms4rwcqrwxqhqaQngxBgKaV2eY%2FQAiEAuMOdZoeXtG2XlofFGtkYkwSgnKdIc0mi5NVVRQxfVW8qiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCzJxG3GQBvwLE7sHSrcA90YdtPet76F7jyFDlymB8xqyu4G10j6KGMNSP1VNqKWXaoscyCurxUSyNcwpoLzmdOQfXSzT9vQ2QG50g4zk1z2Au75rgULQfYSJLA2CXn3eofYetqseZMw2TqNJ17OFRpqPBhxl69LFdYjE6xmkDQ5wVmk02%2FSbMRKBNZVy%2FwSpqfgatrQvPvBobnofC%2BVGQLErYNzi334nHo84BXaz9vyt2C7OunpcPSG8fjOAyqCX8PQD%2FRQ1tRhqHgZmjF%2BmqhFGyrr066ZQ2eu3oWse0TjWKbRsz89h7XbGc873JmiuQlzhFr4%2BkDavX5DYj3R77dN2vnsVDdWBdjJkHgN2BV1TqdwxG1miOvlB5%2FOKg9lZsfO9PJXCH4EgUjOju1lED8eyVPyA9sJBA4w8mcmwjLWIr0MNKKfgrmYNJYRqIzkmFoZkClMbHmBcnBAmi2zL0lr9hlhIvZBM5K4WWSjm1UDBcp4wr00bJxiaTYRG30FZtJ4kNoOYygSdFWmJaPRjrZ64Kmh1ZbydbRWMedxOJ83en8y%2BI5jjIB%2BDwO7gMCfd1E8cvleaG74XQA74NKmGI0fqngcYF8vQbexwZoDNn5C%2BuiIdhA90BoiEz%2FEl7ej%2FNwP81qGhdwCZQPnMIqlyNYGOqUBbn1kKgX0LLI3BKP%2B0G228ygoQdF%2BBhwc2SNrz%2BKnii1Sg9%2FUmay6QnhXlk9skM5tgbKB4Th4AaA%2BpE6y4uSOQebdKmlIc1OJLcrLxIwoCBWPncF5KX660B1Pe9NvKBNcIIKL2Y8%2B4O%2BRtLASFriNOQKTxVoSzAbwMHXh9cwO1EwhJvqw2Wuac9aNIzEYlHyDxjG%2BOkTWkQXMkX%2B4oUnXJPzqTdVK&X-Amz-Signature=1678dfd51da28724ce4bb688a21dc77228368830fc41a2581cdd4ccb7344a046&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLMO5XTK%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCICAsW2VgNWl4Dt9Tms4rwcqrwxqhqaQngxBgKaV2eY%2FQAiEAuMOdZoeXtG2XlofFGtkYkwSgnKdIc0mi5NVVRQxfVW8qiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCzJxG3GQBvwLE7sHSrcA90YdtPet76F7jyFDlymB8xqyu4G10j6KGMNSP1VNqKWXaoscyCurxUSyNcwpoLzmdOQfXSzT9vQ2QG50g4zk1z2Au75rgULQfYSJLA2CXn3eofYetqseZMw2TqNJ17OFRpqPBhxl69LFdYjE6xmkDQ5wVmk02%2FSbMRKBNZVy%2FwSpqfgatrQvPvBobnofC%2BVGQLErYNzi334nHo84BXaz9vyt2C7OunpcPSG8fjOAyqCX8PQD%2FRQ1tRhqHgZmjF%2BmqhFGyrr066ZQ2eu3oWse0TjWKbRsz89h7XbGc873JmiuQlzhFr4%2BkDavX5DYj3R77dN2vnsVDdWBdjJkHgN2BV1TqdwxG1miOvlB5%2FOKg9lZsfO9PJXCH4EgUjOju1lED8eyVPyA9sJBA4w8mcmwjLWIr0MNKKfgrmYNJYRqIzkmFoZkClMbHmBcnBAmi2zL0lr9hlhIvZBM5K4WWSjm1UDBcp4wr00bJxiaTYRG30FZtJ4kNoOYygSdFWmJaPRjrZ64Kmh1ZbydbRWMedxOJ83en8y%2BI5jjIB%2BDwO7gMCfd1E8cvleaG74XQA74NKmGI0fqngcYF8vQbexwZoDNn5C%2BuiIdhA90BoiEz%2FEl7ej%2FNwP81qGhdwCZQPnMIqlyNYGOqUBbn1kKgX0LLI3BKP%2B0G228ygoQdF%2BBhwc2SNrz%2BKnii1Sg9%2FUmay6QnhXlk9skM5tgbKB4Th4AaA%2BpE6y4uSOQebdKmlIc1OJLcrLxIwoCBWPncF5KX660B1Pe9NvKBNcIIKL2Y8%2B4O%2BRtLASFriNOQKTxVoSzAbwMHXh9cwO1EwhJvqw2Wuac9aNIzEYlHyDxjG%2BOkTWkQXMkX%2B4oUnXJPzqTdVK&X-Amz-Signature=98852dcb1cbe7bf6a94c99b3a0fdf924cb8cc9b01a7e1ffaa118a72b8cf22e60&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLMO5XTK%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCICAsW2VgNWl4Dt9Tms4rwcqrwxqhqaQngxBgKaV2eY%2FQAiEAuMOdZoeXtG2XlofFGtkYkwSgnKdIc0mi5NVVRQxfVW8qiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCzJxG3GQBvwLE7sHSrcA90YdtPet76F7jyFDlymB8xqyu4G10j6KGMNSP1VNqKWXaoscyCurxUSyNcwpoLzmdOQfXSzT9vQ2QG50g4zk1z2Au75rgULQfYSJLA2CXn3eofYetqseZMw2TqNJ17OFRpqPBhxl69LFdYjE6xmkDQ5wVmk02%2FSbMRKBNZVy%2FwSpqfgatrQvPvBobnofC%2BVGQLErYNzi334nHo84BXaz9vyt2C7OunpcPSG8fjOAyqCX8PQD%2FRQ1tRhqHgZmjF%2BmqhFGyrr066ZQ2eu3oWse0TjWKbRsz89h7XbGc873JmiuQlzhFr4%2BkDavX5DYj3R77dN2vnsVDdWBdjJkHgN2BV1TqdwxG1miOvlB5%2FOKg9lZsfO9PJXCH4EgUjOju1lED8eyVPyA9sJBA4w8mcmwjLWIr0MNKKfgrmYNJYRqIzkmFoZkClMbHmBcnBAmi2zL0lr9hlhIvZBM5K4WWSjm1UDBcp4wr00bJxiaTYRG30FZtJ4kNoOYygSdFWmJaPRjrZ64Kmh1ZbydbRWMedxOJ83en8y%2BI5jjIB%2BDwO7gMCfd1E8cvleaG74XQA74NKmGI0fqngcYF8vQbexwZoDNn5C%2BuiIdhA90BoiEz%2FEl7ej%2FNwP81qGhdwCZQPnMIqlyNYGOqUBbn1kKgX0LLI3BKP%2B0G228ygoQdF%2BBhwc2SNrz%2BKnii1Sg9%2FUmay6QnhXlk9skM5tgbKB4Th4AaA%2BpE6y4uSOQebdKmlIc1OJLcrLxIwoCBWPncF5KX660B1Pe9NvKBNcIIKL2Y8%2B4O%2BRtLASFriNOQKTxVoSzAbwMHXh9cwO1EwhJvqw2Wuac9aNIzEYlHyDxjG%2BOkTWkQXMkX%2B4oUnXJPzqTdVK&X-Amz-Signature=31d0de9b1003c8e9adbc81a55028a6f5f978760da00b6367451092d7f60dab26&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QLMO5XTK%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCICAsW2VgNWl4Dt9Tms4rwcqrwxqhqaQngxBgKaV2eY%2FQAiEAuMOdZoeXtG2XlofFGtkYkwSgnKdIc0mi5NVVRQxfVW8qiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCzJxG3GQBvwLE7sHSrcA90YdtPet76F7jyFDlymB8xqyu4G10j6KGMNSP1VNqKWXaoscyCurxUSyNcwpoLzmdOQfXSzT9vQ2QG50g4zk1z2Au75rgULQfYSJLA2CXn3eofYetqseZMw2TqNJ17OFRpqPBhxl69LFdYjE6xmkDQ5wVmk02%2FSbMRKBNZVy%2FwSpqfgatrQvPvBobnofC%2BVGQLErYNzi334nHo84BXaz9vyt2C7OunpcPSG8fjOAyqCX8PQD%2FRQ1tRhqHgZmjF%2BmqhFGyrr066ZQ2eu3oWse0TjWKbRsz89h7XbGc873JmiuQlzhFr4%2BkDavX5DYj3R77dN2vnsVDdWBdjJkHgN2BV1TqdwxG1miOvlB5%2FOKg9lZsfO9PJXCH4EgUjOju1lED8eyVPyA9sJBA4w8mcmwjLWIr0MNKKfgrmYNJYRqIzkmFoZkClMbHmBcnBAmi2zL0lr9hlhIvZBM5K4WWSjm1UDBcp4wr00bJxiaTYRG30FZtJ4kNoOYygSdFWmJaPRjrZ64Kmh1ZbydbRWMedxOJ83en8y%2BI5jjIB%2BDwO7gMCfd1E8cvleaG74XQA74NKmGI0fqngcYF8vQbexwZoDNn5C%2BuiIdhA90BoiEz%2FEl7ej%2FNwP81qGhdwCZQPnMIqlyNYGOqUBbn1kKgX0LLI3BKP%2B0G228ygoQdF%2BBhwc2SNrz%2BKnii1Sg9%2FUmay6QnhXlk9skM5tgbKB4Th4AaA%2BpE6y4uSOQebdKmlIc1OJLcrLxIwoCBWPncF5KX660B1Pe9NvKBNcIIKL2Y8%2B4O%2BRtLASFriNOQKTxVoSzAbwMHXh9cwO1EwhJvqw2Wuac9aNIzEYlHyDxjG%2BOkTWkQXMkX%2B4oUnXJPzqTdVK&X-Amz-Signature=4e2ae9352226c3b9dc882d9d3b1435191e0701722a1491e3cc34d0a3bd587a21&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XCYNZKMD%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJHMEUCIQDhDaVZAarviUhHZkaawkKN33BZyvEIp7ultiMZVpR8%2FQIgMJmlQE%2BOFWnPPNFoAvpb9vWl6iuflj5orxF17pOT8G4qiAQI5P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLl5%2FHeu1eKDvFvGcircA6A%2FsqFeXt1irKqGGBRODH7dM%2F35QM5KPi%2FBfPze6aXiOFxepSpE2KSeCB6u0%2BscigfFQhJ9HhotMjuLHRA%2FQ1DXdfP9ULEmRbMnuLEgwJou8i%2B%2FWkmGaOOQW0QRkpcmwEB4TyV3iJ7IP77U05uNfuOYOy%2BLXbYxzIIx9r3fVTlnW33tEWzOEqvQfSkpfr0%2FMH%2FtiBsFnvUABTwRtydURhqGfcIUEgTtsXFWpItLXBktgVaL5FPc1q8oDggXekKwY99NgzEmLtSJvY72V6r5J1b5GHKJOGcesF2XalfwFY7cTeYyqw2K%2F%2FO6D4u0Djs1ZbRul68VWxbKHt3k51E4hC3NzWQZqqTMoyYV4e%2FgZ8E8sdgAyu2hSKxUEuBCeMuiKnIBKL5m0WY8haRBC6ne%2BcD7mfCTHu3vqlK7n2lv8pya8I4DYI6CtkPJolIK0x7UfHU5m4CXnjZZCdVM5p9D3V0i20twMdo%2FkdmVPS2jABncZTfdRBWAUWr9PzUsuaO76XucgU9Vr%2Bpo5uy1%2BKQBcDXX2I7vQsV6xPBvp7aOziTh7pb648GNjAsYBcCWdThVvMjvFyXKp%2F4PMUU%2FABRlAacTo4eMBb950OlNjcAk1tB0%2FZc4ZIA6eLP2Qh9NMNiiyNYGOqUB%2BEwW%2Fvltja4IJczKIN0aRyzUcFAIcNIYLp7VqewH9zg2lIX3MbSeilpAwkBk0ZbJqvsF%2F1PcrGH0LqoBD9vDraSKH4QTW7NR54Ts4b07eRbwM7AenIAGIbg8LCqMWo8bMavICeLPDR7gqyjcixJygJaq2zqQFyJM%2FJ9Q2XGtGjduwHmlmKgOzhM9bXd6YB1kTJFORv%2B1Tl%2BZlWsCuo5VHqlW3XUm&X-Amz-Signature=bc4c69a917634102c999d0beb08cf41c54ad9513cba48a3a2914b7433d18f570&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PHEIOCN%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJGMEQCIHkUrAna%2B%2B8FbwmEmPERvO4MX2FuqAGygrEVIR6NxXPEAiAeJDgN9BXN5lislqaXcHwA%2Bp2xG1OS%2FS1E2LuyWAGvhSqIBAjl%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMa%2FNLUiwByQH%2F65l%2FKtwDT%2FfkJhdZpgfoU8qS06572g1Uih9Ml3J3ApyKRJUbO3hZpmGJ14prk78IsqALyk5WvBgJAtY6X3LswtmIGGbnY9hhDE4NCwAvonqp5ui4B%2BISHmrHL%2FhTXLpJCnRHVEBmn6thbHEQZR92NX0sASV4wmZty31v1JTA0djfxATp8j1160ySLNnzN7MF4feiRI5s47b4QzTZpFJ4L1xPK8ESbX7r%2BjmirOTsKZrWMw6HKxJa8KWVwouh3HGwjLexltH4Af7KW%2Fg04g6UckHakJ5QKT7qhRNft8LCrvbXiM%2BclaShmjZ%2FfE7N1nveykcl8pYAeb8GxyI%2BC6%2B4zYAiZFWuHT3fpjBnFObJsNVRnL7BwDqLLiRltzhMavwSesVLuPuQQlSZ%2FkO9nQmujM0G1oOaJqT7xg7Jl77MnhoU1h3c%2FessigZsOLtzDWxcE4S9fphy2C6snWEFiiYGALDd22eMiRC43ybJhJARzsJD5Cv4CCWr2Hf%2FQqLnZm2hMMChGwjJ0AMpo%2B9UxHOehkoJbCks%2FHy31K%2BBiTeTmbPpVUWcb9LuwidhyR%2F%2BTyUJF3TP2QlNQlEpw2rUaUzAKxANG3YOCLkTd0jOTw549W%2FZVXG7g06Re0Kj3o22cYyua3UwpaTI1gY6pgFvK8VU4xN%2Bkgow0JySnxson9kedZsNVy0hCb1FmSzfDYxTlT2f5tuTKcmJj70h1iNAqbLtDxB62ZmZtUVJH8ix7U0Bax0If7CEsvEUoeRlzLcav3IkAl5xX2y3XsOnIZzIW9VqDi6Z4YaqTo96n51xB7zoZpGCOX%2F7QJdpfOytEsj6C2e3txsoOHSQdySGl5It147vsPuOC9NICDc50FfexbICVUiD&X-Amz-Signature=7ed35aa67c609a1808d50fb885dd67d846348814014d85f041a3ad08ca6c5d2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664PHEIOCN%2F20261016%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261016T130052Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBwaCXVzLXdlc3QtMiJGMEQCIHkUrAna%2B%2B8FbwmEmPERvO4MX2FuqAGygrEVIR6NxXPEAiAeJDgN9BXN5lislqaXcHwA%2Bp2xG1OS%2FS1E2LuyWAGvhSqIBAjl%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMa%2FNLUiwByQH%2F65l%2FKtwDT%2FfkJhdZpgfoU8qS06572g1Uih9Ml3J3ApyKRJUbO3hZpmGJ14prk78IsqALyk5WvBgJAtY6X3LswtmIGGbnY9hhDE4NCwAvonqp5ui4B%2BISHmrHL%2FhTXLpJCnRHVEBmn6thbHEQZR92NX0sASV4wmZty31v1JTA0djfxATp8j1160ySLNnzN7MF4feiRI5s47b4QzTZpFJ4L1xPK8ESbX7r%2BjmirOTsKZrWMw6HKxJa8KWVwouh3HGwjLexltH4Af7KW%2Fg04g6UckHakJ5QKT7qhRNft8LCrvbXiM%2BclaShmjZ%2FfE7N1nveykcl8pYAeb8GxyI%2BC6%2B4zYAiZFWuHT3fpjBnFObJsNVRnL7BwDqLLiRltzhMavwSesVLuPuQQlSZ%2FkO9nQmujM0G1oOaJqT7xg7Jl77MnhoU1h3c%2FessigZsOLtzDWxcE4S9fphy2C6snWEFiiYGALDd22eMiRC43ybJhJARzsJD5Cv4CCWr2Hf%2FQqLnZm2hMMChGwjJ0AMpo%2B9UxHOehkoJbCks%2FHy31K%2BBiTeTmbPpVUWcb9LuwidhyR%2F%2BTyUJF3TP2QlNQlEpw2rUaUzAKxANG3YOCLkTd0jOTw549W%2FZVXG7g06Re0Kj3o22cYyua3UwpaTI1gY6pgFvK8VU4xN%2Bkgow0JySnxson9kedZsNVy0hCb1FmSzfDYxTlT2f5tuTKcmJj70h1iNAqbLtDxB62ZmZtUVJH8ix7U0Bax0If7CEsvEUoeRlzLcav3IkAl5xX2y3XsOnIZzIW9VqDi6Z4YaqTo96n51xB7zoZpGCOX%2F7QJdpfOytEsj6C2e3txsoOHSQdySGl5It147vsPuOC9NICDc50FfexbICVUiD&X-Amz-Signature=2bfeb880d09efabd7eedafb3f2b01e194de8d6ca77399e09e235f1e47bb94b7c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
