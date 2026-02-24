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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664C43JZG3%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQCRiMDObbJ8qnr60CrH02D2Jha1q0dBiQf6tcKeno4n0AIhANEBGqO5t6ww57xkIBI%2FCUZY3gxocdLN4ReM3g%2Bz3CFLKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx6ZI26TU6QWHLy7Dsq3APW3Oj5OvFtlugV9b0ZDAFuAbrSg215bMzH7D%2Bf6LWktMk2NXVZKrW26rmIODhZSIF1OhAV7G%2BEvh1sn5HztIgU2UaHFbpRSwofToDU3xgBwE4u6R%2F4zzGayydmu72ER3j7cgj0CzqcvhJDDn9x%2BmHWSvHWa%2FE6gD6bvVwHcxhLKp7xXXkqesyIxv3P7LyHLkD%2FxCDVrdJUhxPn7pwGkHqp8IuAhOIE7rcYpGRwNTZ7IumXIQg1lZYYv1%2BuxFmIwka6hJiGMKzCANUmx3we%2B3ClcvKHNsuLWy6dC9yJU7ze4qLeypY341tF4bgKWNRIbHnHNvIeUyHEnHSRX1RL8P2YpFjwyJuOK7R6TSmBBT4XI0J%2FYsyD%2ByoPvx0juDExDDrpSLTtPFErgLnEqMIOwqLmQGLQ5FUdLhmqx3zZmYxzinA1TWhsxicotGOQj8FTsdcHeqKtW%2B0A%2BlR0tm4H1pWsPlbFvkT%2B6cCSnJsatnK3Qbe7gzSVcROmUGbfxvXT%2BEkBiS%2B3Hy38G67H2BagN%2BMCPQEIYACvRH%2BFYtIPAVBYwMaHx27R12Mqpboo4Hgyj1BgcPP1%2FK0mQi6ZsM3wmSkVo9sBhex202iy%2Fb39GwkH27c4V%2BmTSaX8%2F3quezDmq%2FXMBjqkAWkswrrzvoqXLvHTluTy4ZeJlCm3VFZeTL8Giub%2FehIFRi4ln2MzQizkvl6rmUMyHRe0%2FXBRmh5KfIPAs0HZb8JgBA5SrbLHDRLxjlAaVkVAb9n8nV%2FiuyfuUKSYDstwThZHchrRaAANxfR0tcGamElJ%2BY6gEa%2FE6ydULp62o4QNQ%2Ff512pWBnKSAIB2mSjyudRb8tkLtSaT4Xa95ebqnpB3XFHv&X-Amz-Signature=b0ed2a426aa85f8ddc02a86dd585bfb12f6ad8729cff1c7cc3d3f40af4da5d9f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664C43JZG3%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQCRiMDObbJ8qnr60CrH02D2Jha1q0dBiQf6tcKeno4n0AIhANEBGqO5t6ww57xkIBI%2FCUZY3gxocdLN4ReM3g%2Bz3CFLKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx6ZI26TU6QWHLy7Dsq3APW3Oj5OvFtlugV9b0ZDAFuAbrSg215bMzH7D%2Bf6LWktMk2NXVZKrW26rmIODhZSIF1OhAV7G%2BEvh1sn5HztIgU2UaHFbpRSwofToDU3xgBwE4u6R%2F4zzGayydmu72ER3j7cgj0CzqcvhJDDn9x%2BmHWSvHWa%2FE6gD6bvVwHcxhLKp7xXXkqesyIxv3P7LyHLkD%2FxCDVrdJUhxPn7pwGkHqp8IuAhOIE7rcYpGRwNTZ7IumXIQg1lZYYv1%2BuxFmIwka6hJiGMKzCANUmx3we%2B3ClcvKHNsuLWy6dC9yJU7ze4qLeypY341tF4bgKWNRIbHnHNvIeUyHEnHSRX1RL8P2YpFjwyJuOK7R6TSmBBT4XI0J%2FYsyD%2ByoPvx0juDExDDrpSLTtPFErgLnEqMIOwqLmQGLQ5FUdLhmqx3zZmYxzinA1TWhsxicotGOQj8FTsdcHeqKtW%2B0A%2BlR0tm4H1pWsPlbFvkT%2B6cCSnJsatnK3Qbe7gzSVcROmUGbfxvXT%2BEkBiS%2B3Hy38G67H2BagN%2BMCPQEIYACvRH%2BFYtIPAVBYwMaHx27R12Mqpboo4Hgyj1BgcPP1%2FK0mQi6ZsM3wmSkVo9sBhex202iy%2Fb39GwkH27c4V%2BmTSaX8%2F3quezDmq%2FXMBjqkAWkswrrzvoqXLvHTluTy4ZeJlCm3VFZeTL8Giub%2FehIFRi4ln2MzQizkvl6rmUMyHRe0%2FXBRmh5KfIPAs0HZb8JgBA5SrbLHDRLxjlAaVkVAb9n8nV%2FiuyfuUKSYDstwThZHchrRaAANxfR0tcGamElJ%2BY6gEa%2FE6ydULp62o4QNQ%2Ff512pWBnKSAIB2mSjyudRb8tkLtSaT4Xa95ebqnpB3XFHv&X-Amz-Signature=e7eb13e5151f578ebf69a3c588adfc3cc8bc8c2c3ef19e9bdf4258f762c9b1a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664C43JZG3%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084822Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQCRiMDObbJ8qnr60CrH02D2Jha1q0dBiQf6tcKeno4n0AIhANEBGqO5t6ww57xkIBI%2FCUZY3gxocdLN4ReM3g%2Bz3CFLKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx6ZI26TU6QWHLy7Dsq3APW3Oj5OvFtlugV9b0ZDAFuAbrSg215bMzH7D%2Bf6LWktMk2NXVZKrW26rmIODhZSIF1OhAV7G%2BEvh1sn5HztIgU2UaHFbpRSwofToDU3xgBwE4u6R%2F4zzGayydmu72ER3j7cgj0CzqcvhJDDn9x%2BmHWSvHWa%2FE6gD6bvVwHcxhLKp7xXXkqesyIxv3P7LyHLkD%2FxCDVrdJUhxPn7pwGkHqp8IuAhOIE7rcYpGRwNTZ7IumXIQg1lZYYv1%2BuxFmIwka6hJiGMKzCANUmx3we%2B3ClcvKHNsuLWy6dC9yJU7ze4qLeypY341tF4bgKWNRIbHnHNvIeUyHEnHSRX1RL8P2YpFjwyJuOK7R6TSmBBT4XI0J%2FYsyD%2ByoPvx0juDExDDrpSLTtPFErgLnEqMIOwqLmQGLQ5FUdLhmqx3zZmYxzinA1TWhsxicotGOQj8FTsdcHeqKtW%2B0A%2BlR0tm4H1pWsPlbFvkT%2B6cCSnJsatnK3Qbe7gzSVcROmUGbfxvXT%2BEkBiS%2B3Hy38G67H2BagN%2BMCPQEIYACvRH%2BFYtIPAVBYwMaHx27R12Mqpboo4Hgyj1BgcPP1%2FK0mQi6ZsM3wmSkVo9sBhex202iy%2Fb39GwkH27c4V%2BmTSaX8%2F3quezDmq%2FXMBjqkAWkswrrzvoqXLvHTluTy4ZeJlCm3VFZeTL8Giub%2FehIFRi4ln2MzQizkvl6rmUMyHRe0%2FXBRmh5KfIPAs0HZb8JgBA5SrbLHDRLxjlAaVkVAb9n8nV%2FiuyfuUKSYDstwThZHchrRaAANxfR0tcGamElJ%2BY6gEa%2FE6ydULp62o4QNQ%2Ff512pWBnKSAIB2mSjyudRb8tkLtSaT4Xa95ebqnpB3XFHv&X-Amz-Signature=c63fbb1b6b0ff661f470fa21a8e1287e73480c00004c69ea4579379a0f4d2209&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEWOWR6K%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084823Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQD29O8k19C9u5U3Dj8gIm1j0EYVeVcsvw7AtVHkemeMhAIhAM8KA9Trq6XXQAtZUzwZgI7O%2FKEYM5AOrLYjzmQIDoGhKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7r%2FzNeYhnD7%2FJ0wgq3AM3nv42oL2%2F3XmrA9Aoxr2lOzhzInhchW1KnjmNaLxIY2EDNdJcbKLWFVv9RNeHzijqGri6LpyvUKBc3eWkExalcVr%2B%2BhStaT9M2U9uXc7MU1y%2Bb8J97pBt4QofmeLEV10VlyfspbvlydHXU41sUPen5BnsGPkMjuj5HZMhlAgQsxsw7rUOzs9Gfus8w9m47ziEktBVYh%2FulKfmAhnSpMBL0PF%2FRVPbppr0t%2Fj9EwWUDbD4VbKe9B8F9pWyf1tuJQn8e6iLi06TT8PJErGMlfUWhvDQIa4iK4GElFzVhbVU6OEE5wUznPdUOOMNxNkCCr9%2B61quxvyofmc5OXB6PGsXNeTaKSedzi3gv%2FdHDF5JafSGTult3aZwSjqmeFW2UlLGeYHHMmteDHLXqlEEpefk8uUM4XFnZ5tsTcIbyaQNYWfzGnVUyIPeeNqgyUdZOSoRLarFBI25fT0tdkLR8AcVav9iZrgHT%2Bd%2FdQ8NCtPIxCuEriRzPHDEUcbYt5kuS5JW2PfHu2L5PwU3Rtv334ZLqkjJrrrqq7Dq0qh2qCOuU3NeMaCQbsimmAyJvjP41EOSxyhVk3DJUgTaSkeE9FcdDyKvPfQa%2FjqAv0%2Fzf2el4OowHwO%2FAfyjQmrfCTCaq%2FXMBjqkAejopFk0jB3HENNh1qHf%2F458wcrlNOfV6og%2BIVFxgfrbztV75wda0OxO1Tv5PLYbdMDTCDa%2BXy3mkMta0Pl6ePPKDsHufeN8oQIgr65J45ZymTAu0Lcz0rnbDTNSFGKLQUayPGn5%2BpOSfIt8vfbIfVwAWmdWEbRD9ISMvVEoSRnc2IMVcI42dfmmY1PNHtoye3%2FmjIguVemRNPIAA3FhUAodhK5K&X-Amz-Signature=74c89c92868c8f60c492b9730fe1f7086181b4b37ec9f27541b50dba23c448db&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEWOWR6K%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084823Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQD29O8k19C9u5U3Dj8gIm1j0EYVeVcsvw7AtVHkemeMhAIhAM8KA9Trq6XXQAtZUzwZgI7O%2FKEYM5AOrLYjzmQIDoGhKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7r%2FzNeYhnD7%2FJ0wgq3AM3nv42oL2%2F3XmrA9Aoxr2lOzhzInhchW1KnjmNaLxIY2EDNdJcbKLWFVv9RNeHzijqGri6LpyvUKBc3eWkExalcVr%2B%2BhStaT9M2U9uXc7MU1y%2Bb8J97pBt4QofmeLEV10VlyfspbvlydHXU41sUPen5BnsGPkMjuj5HZMhlAgQsxsw7rUOzs9Gfus8w9m47ziEktBVYh%2FulKfmAhnSpMBL0PF%2FRVPbppr0t%2Fj9EwWUDbD4VbKe9B8F9pWyf1tuJQn8e6iLi06TT8PJErGMlfUWhvDQIa4iK4GElFzVhbVU6OEE5wUznPdUOOMNxNkCCr9%2B61quxvyofmc5OXB6PGsXNeTaKSedzi3gv%2FdHDF5JafSGTult3aZwSjqmeFW2UlLGeYHHMmteDHLXqlEEpefk8uUM4XFnZ5tsTcIbyaQNYWfzGnVUyIPeeNqgyUdZOSoRLarFBI25fT0tdkLR8AcVav9iZrgHT%2Bd%2FdQ8NCtPIxCuEriRzPHDEUcbYt5kuS5JW2PfHu2L5PwU3Rtv334ZLqkjJrrrqq7Dq0qh2qCOuU3NeMaCQbsimmAyJvjP41EOSxyhVk3DJUgTaSkeE9FcdDyKvPfQa%2FjqAv0%2Fzf2el4OowHwO%2FAfyjQmrfCTCaq%2FXMBjqkAejopFk0jB3HENNh1qHf%2F458wcrlNOfV6og%2BIVFxgfrbztV75wda0OxO1Tv5PLYbdMDTCDa%2BXy3mkMta0Pl6ePPKDsHufeN8oQIgr65J45ZymTAu0Lcz0rnbDTNSFGKLQUayPGn5%2BpOSfIt8vfbIfVwAWmdWEbRD9ISMvVEoSRnc2IMVcI42dfmmY1PNHtoye3%2FmjIguVemRNPIAA3FhUAodhK5K&X-Amz-Signature=98fe5da9d880a7d2e19fc5dff798d7d7a66d4803fefb4793ef26c5d09d57c740&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEWOWR6K%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084823Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQD29O8k19C9u5U3Dj8gIm1j0EYVeVcsvw7AtVHkemeMhAIhAM8KA9Trq6XXQAtZUzwZgI7O%2FKEYM5AOrLYjzmQIDoGhKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7r%2FzNeYhnD7%2FJ0wgq3AM3nv42oL2%2F3XmrA9Aoxr2lOzhzInhchW1KnjmNaLxIY2EDNdJcbKLWFVv9RNeHzijqGri6LpyvUKBc3eWkExalcVr%2B%2BhStaT9M2U9uXc7MU1y%2Bb8J97pBt4QofmeLEV10VlyfspbvlydHXU41sUPen5BnsGPkMjuj5HZMhlAgQsxsw7rUOzs9Gfus8w9m47ziEktBVYh%2FulKfmAhnSpMBL0PF%2FRVPbppr0t%2Fj9EwWUDbD4VbKe9B8F9pWyf1tuJQn8e6iLi06TT8PJErGMlfUWhvDQIa4iK4GElFzVhbVU6OEE5wUznPdUOOMNxNkCCr9%2B61quxvyofmc5OXB6PGsXNeTaKSedzi3gv%2FdHDF5JafSGTult3aZwSjqmeFW2UlLGeYHHMmteDHLXqlEEpefk8uUM4XFnZ5tsTcIbyaQNYWfzGnVUyIPeeNqgyUdZOSoRLarFBI25fT0tdkLR8AcVav9iZrgHT%2Bd%2FdQ8NCtPIxCuEriRzPHDEUcbYt5kuS5JW2PfHu2L5PwU3Rtv334ZLqkjJrrrqq7Dq0qh2qCOuU3NeMaCQbsimmAyJvjP41EOSxyhVk3DJUgTaSkeE9FcdDyKvPfQa%2FjqAv0%2Fzf2el4OowHwO%2FAfyjQmrfCTCaq%2FXMBjqkAejopFk0jB3HENNh1qHf%2F458wcrlNOfV6og%2BIVFxgfrbztV75wda0OxO1Tv5PLYbdMDTCDa%2BXy3mkMta0Pl6ePPKDsHufeN8oQIgr65J45ZymTAu0Lcz0rnbDTNSFGKLQUayPGn5%2BpOSfIt8vfbIfVwAWmdWEbRD9ISMvVEoSRnc2IMVcI42dfmmY1PNHtoye3%2FmjIguVemRNPIAA3FhUAodhK5K&X-Amz-Signature=26b32c51bb1e90f8da13f7ae6ee5ef3ab87f0b7f8092272db176cbfe665b3d4b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QEWOWR6K%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084823Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQD29O8k19C9u5U3Dj8gIm1j0EYVeVcsvw7AtVHkemeMhAIhAM8KA9Trq6XXQAtZUzwZgI7O%2FKEYM5AOrLYjzmQIDoGhKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7r%2FzNeYhnD7%2FJ0wgq3AM3nv42oL2%2F3XmrA9Aoxr2lOzhzInhchW1KnjmNaLxIY2EDNdJcbKLWFVv9RNeHzijqGri6LpyvUKBc3eWkExalcVr%2B%2BhStaT9M2U9uXc7MU1y%2Bb8J97pBt4QofmeLEV10VlyfspbvlydHXU41sUPen5BnsGPkMjuj5HZMhlAgQsxsw7rUOzs9Gfus8w9m47ziEktBVYh%2FulKfmAhnSpMBL0PF%2FRVPbppr0t%2Fj9EwWUDbD4VbKe9B8F9pWyf1tuJQn8e6iLi06TT8PJErGMlfUWhvDQIa4iK4GElFzVhbVU6OEE5wUznPdUOOMNxNkCCr9%2B61quxvyofmc5OXB6PGsXNeTaKSedzi3gv%2FdHDF5JafSGTult3aZwSjqmeFW2UlLGeYHHMmteDHLXqlEEpefk8uUM4XFnZ5tsTcIbyaQNYWfzGnVUyIPeeNqgyUdZOSoRLarFBI25fT0tdkLR8AcVav9iZrgHT%2Bd%2FdQ8NCtPIxCuEriRzPHDEUcbYt5kuS5JW2PfHu2L5PwU3Rtv334ZLqkjJrrrqq7Dq0qh2qCOuU3NeMaCQbsimmAyJvjP41EOSxyhVk3DJUgTaSkeE9FcdDyKvPfQa%2FjqAv0%2Fzf2el4OowHwO%2FAfyjQmrfCTCaq%2FXMBjqkAejopFk0jB3HENNh1qHf%2F458wcrlNOfV6og%2BIVFxgfrbztV75wda0OxO1Tv5PLYbdMDTCDa%2BXy3mkMta0Pl6ePPKDsHufeN8oQIgr65J45ZymTAu0Lcz0rnbDTNSFGKLQUayPGn5%2BpOSfIt8vfbIfVwAWmdWEbRD9ISMvVEoSRnc2IMVcI42dfmmY1PNHtoye3%2FmjIguVemRNPIAA3FhUAodhK5K&X-Amz-Signature=44ce753f00a6083e1a39a553f1cf7b4fb48dfbac04a3830c81a1b80c2d893c8d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XD4NPJUP%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084825Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQDl%2BUqqbtWzQsQzwtOeDuzQRyminZu%2BdRcwyMo8FyT%2FxwIgUhXUvYbsXZLDwVk7MMWzwN9VMNVloVj4YnaHtfAzTaAqiAQI8f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAvKfdJdta1KxtYPxSrcAzcx8j5v9qUJWpANnWVCaI7k8pjcA9WHll3BNdmZMACY502kb%2BN09pIj8xtHBNVpswaGPA6JnT4MESy4OAZDrGBMLvgpS9ZKVIskm2dpZ8%2Fo5X%2FImhLsix%2FFFuLPtmoye28sAc38laON99V3IImFG%2BYrDlBCR4P06yRhkWJ1IRyyikpOk2g16LyA6Nsw6NHnF5c8PXvCuuxsgC8ukhDhxpwmvvPlwHKqStWfoEnCvYRrB2XNsYrqoY2lxVluUFDL8hPf9zVVC%2FDfwB5zkticmc8yB%2Bm37N8k3ZWdRkbBisc8ENN2c3GwYfLbpQJNyL8RP3nZANw%2FZmKSGVFWnJM51GBFLUEaWJINcwIjwfSJmTdp%2FRCPu7yext24GNLp4uGuzrCHU5fo4OXiYkwfvndnpJSO9Z9QzZvswpJx3jwRoW7ZOyR41UNlzUxakyPxGg%2FrN2jc2Qlfw1mEB%2BolagBv6Hzdqb15WrwI2mjyrCFne3fBzNIskPA%2Fj4%2FbbTj2sM6pzLy%2FtKehqvWqL3naEiUi0vQTYsiaq9D9gUc%2FIrv%2BYQmk6lScIE%2FoSgmUzqJgCuFM4WO6%2BQBY8%2BQv%2F5o%2FKJyIA3gPWDrRgv5wccfTlVqEymlYZvrSZfs1kelITdtsML6r9cwGOqUBmsjOQW25YFUKQuCVQZJcR%2B3LYWYUWQPz83gfD3OZnRtnKGM%2F2llgfwCE%2F%2FUQFEsCZZznlFfdBEw6QGd%2BEW5EAf7OVgxJ8k57xGQrka9GywIloILogIufQP6%2BO0lZXkXm7skmStdVtkJacReRPCpWYUW7uQcP0t7nHTAsiwWtHI1GzqIFWbqfzCjV3G3PodvIq65ky01YArQ7UwfRPKUVKaHGCkad&X-Amz-Signature=f66eaa3200a4b740a0018ba132f4dd8b6d646cdc59b50c695a142786c4c8d15d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZX3DH22A%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084829Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDjOpov6WSe02hGpoeaQPBVPUiwMKeEQf4f8z0Hv0fLYQIhANJykqwZm1q%2BtMYZWom3KpvFxtmYn%2BwCuS4Uz0OXtQLAKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTJ90ZmGLdiBxvRRcq3ANQdqR0FQDsso4Cjx5tvcvbC2p0yJLc8MMzW9sz7milyQ0DnZbRkvLjn3Q1xmhIaxgLqOLTjblBQQuRtx9mdeO%2F6IxNMzIt2ygsce4BZWsMWwp%2F%2F1NCJQxH%2BsFfJmRD%2B%2BLLP6KIWGtkML%2FJ75fd%2BBmsI%2FsC6osFL%2FgTPMwEHCFaK%2BF4xCeUkQ9kAHTf1Gola5Wd7CDbDww40F1jvVST7e%2BuNYxX7e6jw53fA0PGVrE8kmlWj7JSq%2FDzQCXA2eEjM7OsBZsSpm68YuwHz7ursTnL28JS%2FqTclQa4oE3%2F3m6CuBgJ%2FIzsTD9TxnHIoHb4uog%2BSL%2BArwAC5LMw%2BSeada0s16KhEgMomXZWeRNq%2FqD6%2FM%2FeT4I2pR3Y6fgZIcX7nF4Z6RLbFGmsAr2Bxrh0UPc38CB5qMuMYVPusHwABdbTdKlgCdnnfg%2Fhqdc%2F2P4u1kE1WJHqiT%2FyHBfBlIXFIe5rHobAfNiZatD7MM6DkS%2FL%2FQHxAJ1HkDTCYZ%2FlHZdsrNInPIxXEVJEFq7GTxSDb4XB6OzCQzWYyi8QJAC%2B1QQA02tzDZ6YQSi9G3K8aF39f5qbu7BS3Dqljd9KD22sWHsb458RVTgOGh0HmtY98b7I1pyBhXxhEOhmS5i4kzD6q%2FXMBjqkAeoJChUd%2Fkp3Jsmqwvs7tKlUIkWpZX8%2F9GGKi68iiSBPAIY2ZXQrpJXUJKTZAkIF%2Bolu92g20CR6kZKBGrqyBq77ajIMxqyklCz0sAZNJNpjJwM8fuzdwJTcNar9CTHtREIRFe540%2BiutUtaDiRP7nGAeMaMhsrZGQHN30CaxD8sEat8zHSXJ2EgZV4CCtw2cKO69hLsKT%2BSUPkQKNql87wZSFfv&X-Amz-Signature=f02e6f642830d15dbf711ce2d1cfffaa45a969f339d42eab8e90a84b5ecd5fb0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZX3DH22A%2F20260224%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260224T084829Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDjOpov6WSe02hGpoeaQPBVPUiwMKeEQf4f8z0Hv0fLYQIhANJykqwZm1q%2BtMYZWom3KpvFxtmYn%2BwCuS4Uz0OXtQLAKogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxTJ90ZmGLdiBxvRRcq3ANQdqR0FQDsso4Cjx5tvcvbC2p0yJLc8MMzW9sz7milyQ0DnZbRkvLjn3Q1xmhIaxgLqOLTjblBQQuRtx9mdeO%2F6IxNMzIt2ygsce4BZWsMWwp%2F%2F1NCJQxH%2BsFfJmRD%2B%2BLLP6KIWGtkML%2FJ75fd%2BBmsI%2FsC6osFL%2FgTPMwEHCFaK%2BF4xCeUkQ9kAHTf1Gola5Wd7CDbDww40F1jvVST7e%2BuNYxX7e6jw53fA0PGVrE8kmlWj7JSq%2FDzQCXA2eEjM7OsBZsSpm68YuwHz7ursTnL28JS%2FqTclQa4oE3%2F3m6CuBgJ%2FIzsTD9TxnHIoHb4uog%2BSL%2BArwAC5LMw%2BSeada0s16KhEgMomXZWeRNq%2FqD6%2FM%2FeT4I2pR3Y6fgZIcX7nF4Z6RLbFGmsAr2Bxrh0UPc38CB5qMuMYVPusHwABdbTdKlgCdnnfg%2Fhqdc%2F2P4u1kE1WJHqiT%2FyHBfBlIXFIe5rHobAfNiZatD7MM6DkS%2FL%2FQHxAJ1HkDTCYZ%2FlHZdsrNInPIxXEVJEFq7GTxSDb4XB6OzCQzWYyi8QJAC%2B1QQA02tzDZ6YQSi9G3K8aF39f5qbu7BS3Dqljd9KD22sWHsb458RVTgOGh0HmtY98b7I1pyBhXxhEOhmS5i4kzD6q%2FXMBjqkAeoJChUd%2Fkp3Jsmqwvs7tKlUIkWpZX8%2F9GGKi68iiSBPAIY2ZXQrpJXUJKTZAkIF%2Bolu92g20CR6kZKBGrqyBq77ajIMxqyklCz0sAZNJNpjJwM8fuzdwJTcNar9CTHtREIRFe540%2BiutUtaDiRP7nGAeMaMhsrZGQHN30CaxD8sEat8zHSXJ2EgZV4CCtw2cKO69hLsKT%2BSUPkQKNql87wZSFfv&X-Amz-Signature=7275c603f53ddeb860aba8093b3189368e610959d4185513de3db0d2a1734409&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
