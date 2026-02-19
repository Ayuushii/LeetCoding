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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QU5V7TYY%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGplzHMLLxDHL15rlFeZUw08gJa2xNxz%2F%2F2OHybvRE8hAiEAv5vfAqckoXqbIBGzSSYyVHzy6oWxurmCg9AFln1gDL0q%2FwMIeRAAGgw2Mzc0MjMxODM4MDUiDB1DXU%2FKz8wdo96KGSrcA4mMG7waxa8Fp9QoWv5%2FusSvzsbMzhQHhygmoMJE8RnDQhR5yRFUe%2FHo5Va1J5jBNGSEpFEL%2FQOW8iCxNbQ8tq1F%2BhdRnDyBW3DUmLXG%2FIaeMwM%2BFdQBW66SxkxoIxCJfsjqbI4Pl79oLSr3IkyVkACp4rS8dTTCZtvc9x4egPqn9BBP3nVfA5qjsSqh%2B5LavdHS%2BNjM%2F9edf%2B8%2BGLYajOZPwQI6NWJpuQ%2BoXh3RL%2BSYbQRtYcSgQ%2FiMMd%2B2kpHGp8PQH60wXaKwYkDenHcQkIhNstQmml6WS1NE98uk6GCKqkqsPPaHDQ3VcuKTFWClFTD85%2Fs6amQcVN48OzWJ9LeOh9PLvboYQLVTNNGfCqCZ3YhsKJl2F1Ttvze5yC8ilHo03%2F7Q6TfjpgLHGLfUNoOD4MXj%2FEkepdrzuEt1iBMFRRVREv%2BEw1HN5%2BqOul3dVErX0AwqPthWexCCkIYLm9FTe1gcTcoAk%2BDS14PYjDl4T6S0yapNOIIvWBGi4ItfaEniTzPqvPmBo%2F%2F6KoLyXNCjC2krM%2BSLnlyEPJ6ckHdBPRe%2B%2FVwui6oukkEpaC%2Bb01EMau3o%2BVBo%2FI4spXuBcZf4zZNoJujkrVNqH%2B%2FRrtX6aU7ngBgQJHLl352lMLuH28wGOqUB%2BcgkO%2BltfdfhCGJRxra3ceHq6cknDEInnrs1bFDALb90Wffmj8qzBY04yRCNzzRsRGMRg88inukQfA6qOJDymkA9apCKZ%2BVqFnT0p7sagx4eTH0TcjXlLHoC0NkajNE2NIWwqdR27zNkdpBfM5tCMPCqDCNNEZE6eO6U3O%2BGSPYxtKhAAP%2BZtEiw7UB%2FGe%2BelGli1z8ww7Cn408785Nhi4iPLaJD&X-Amz-Signature=45fd3293daa93af0cf33ac5411aed0dc956fd6a9abd6600a1de4c4c241b0c92e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QU5V7TYY%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGplzHMLLxDHL15rlFeZUw08gJa2xNxz%2F%2F2OHybvRE8hAiEAv5vfAqckoXqbIBGzSSYyVHzy6oWxurmCg9AFln1gDL0q%2FwMIeRAAGgw2Mzc0MjMxODM4MDUiDB1DXU%2FKz8wdo96KGSrcA4mMG7waxa8Fp9QoWv5%2FusSvzsbMzhQHhygmoMJE8RnDQhR5yRFUe%2FHo5Va1J5jBNGSEpFEL%2FQOW8iCxNbQ8tq1F%2BhdRnDyBW3DUmLXG%2FIaeMwM%2BFdQBW66SxkxoIxCJfsjqbI4Pl79oLSr3IkyVkACp4rS8dTTCZtvc9x4egPqn9BBP3nVfA5qjsSqh%2B5LavdHS%2BNjM%2F9edf%2B8%2BGLYajOZPwQI6NWJpuQ%2BoXh3RL%2BSYbQRtYcSgQ%2FiMMd%2B2kpHGp8PQH60wXaKwYkDenHcQkIhNstQmml6WS1NE98uk6GCKqkqsPPaHDQ3VcuKTFWClFTD85%2Fs6amQcVN48OzWJ9LeOh9PLvboYQLVTNNGfCqCZ3YhsKJl2F1Ttvze5yC8ilHo03%2F7Q6TfjpgLHGLfUNoOD4MXj%2FEkepdrzuEt1iBMFRRVREv%2BEw1HN5%2BqOul3dVErX0AwqPthWexCCkIYLm9FTe1gcTcoAk%2BDS14PYjDl4T6S0yapNOIIvWBGi4ItfaEniTzPqvPmBo%2F%2F6KoLyXNCjC2krM%2BSLnlyEPJ6ckHdBPRe%2B%2FVwui6oukkEpaC%2Bb01EMau3o%2BVBo%2FI4spXuBcZf4zZNoJujkrVNqH%2B%2FRrtX6aU7ngBgQJHLl352lMLuH28wGOqUB%2BcgkO%2BltfdfhCGJRxra3ceHq6cknDEInnrs1bFDALb90Wffmj8qzBY04yRCNzzRsRGMRg88inukQfA6qOJDymkA9apCKZ%2BVqFnT0p7sagx4eTH0TcjXlLHoC0NkajNE2NIWwqdR27zNkdpBfM5tCMPCqDCNNEZE6eO6U3O%2BGSPYxtKhAAP%2BZtEiw7UB%2FGe%2BelGli1z8ww7Cn408785Nhi4iPLaJD&X-Amz-Signature=9677df7f06e1f2c41f07d161bad597e679ffd34c0c2fe503c0380e053757c8cf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QU5V7TYY%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGplzHMLLxDHL15rlFeZUw08gJa2xNxz%2F%2F2OHybvRE8hAiEAv5vfAqckoXqbIBGzSSYyVHzy6oWxurmCg9AFln1gDL0q%2FwMIeRAAGgw2Mzc0MjMxODM4MDUiDB1DXU%2FKz8wdo96KGSrcA4mMG7waxa8Fp9QoWv5%2FusSvzsbMzhQHhygmoMJE8RnDQhR5yRFUe%2FHo5Va1J5jBNGSEpFEL%2FQOW8iCxNbQ8tq1F%2BhdRnDyBW3DUmLXG%2FIaeMwM%2BFdQBW66SxkxoIxCJfsjqbI4Pl79oLSr3IkyVkACp4rS8dTTCZtvc9x4egPqn9BBP3nVfA5qjsSqh%2B5LavdHS%2BNjM%2F9edf%2B8%2BGLYajOZPwQI6NWJpuQ%2BoXh3RL%2BSYbQRtYcSgQ%2FiMMd%2B2kpHGp8PQH60wXaKwYkDenHcQkIhNstQmml6WS1NE98uk6GCKqkqsPPaHDQ3VcuKTFWClFTD85%2Fs6amQcVN48OzWJ9LeOh9PLvboYQLVTNNGfCqCZ3YhsKJl2F1Ttvze5yC8ilHo03%2F7Q6TfjpgLHGLfUNoOD4MXj%2FEkepdrzuEt1iBMFRRVREv%2BEw1HN5%2BqOul3dVErX0AwqPthWexCCkIYLm9FTe1gcTcoAk%2BDS14PYjDl4T6S0yapNOIIvWBGi4ItfaEniTzPqvPmBo%2F%2F6KoLyXNCjC2krM%2BSLnlyEPJ6ckHdBPRe%2B%2FVwui6oukkEpaC%2Bb01EMau3o%2BVBo%2FI4spXuBcZf4zZNoJujkrVNqH%2B%2FRrtX6aU7ngBgQJHLl352lMLuH28wGOqUB%2BcgkO%2BltfdfhCGJRxra3ceHq6cknDEInnrs1bFDALb90Wffmj8qzBY04yRCNzzRsRGMRg88inukQfA6qOJDymkA9apCKZ%2BVqFnT0p7sagx4eTH0TcjXlLHoC0NkajNE2NIWwqdR27zNkdpBfM5tCMPCqDCNNEZE6eO6U3O%2BGSPYxtKhAAP%2BZtEiw7UB%2FGe%2BelGli1z8ww7Cn408785Nhi4iPLaJD&X-Amz-Signature=a1418efd0278c12bec8b345338c5d3a5dddc00917b2a664369a125e1ab6d875f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVZHOCA5%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCwnX2Xqss6TyooFt%2B1loyLBK%2Fm9m%2F1HIfE24qsgECa3wIhAMY9PewJ8YQvIkim5AARZ%2FGMMP98qqho%2FSFIBJ%2FWpmCzKv8DCHkQABoMNjM3NDIzMTgzODA1IgxkMv6%2FBGimCoaVviMq3ANyj93Sm1j5gIwgArQAXip5aQwDDDwr%2B97DCKz1aYRGGex%2FE42Ysj8PizeVkYiCH0mIzMgZmDoqNvyVIPIYldJK%2F8qcf5nGAaCYKGGHeC0v%2BX6dY9GjJ%2FHlWpiwmhGsGoCBiVoqi%2BtxFn%2BK%2B5ce6PjYLa9RGvZSBYcvt%2Fj7tH8uaR5yKV2CD02dqdpborFLNgXTKHvrB7GoDwB5DBv0l3Fc3can%2By9gECo2x6GKFAkbbhm6utiNVlgzUf3lmz8LAh%2FgeEYWq3f54ybloNgaP%2F7nQjzGySg%2FV0K3k0d4nWljSvn%2BCZvec9Te79DCwc%2BhcMfpsWD4%2BKRzR5wwoCdOtQ7VQX7PBYBd0A9D8lYptENl2RnH2e2pcOlPEuZO0Q5jiyySOk%2F%2FoDOI8bFw6k8tAT751JHwd1uS3eioPTon3prqLngvQ0ky4Ms9bl2RgIt%2BOhokmr5PIAYGgox2HhXStd0BQyqqRt0WhY8xpytZNd1nO2BTTieNCSrG0G3kRPuvro6N6VqWu5SOA3vVrcNUmZibLe9xSplt5DlJwEy%2B27OllzjyjEtyZfscngWQ3t1tFou1zx3QnSRTBAF%2BKmrHZ%2FvAAqNUs7ZcmvtNQbsCybktgDYcc18mTtXZDEbSADDkhtvMBjqkAU%2BSHQtzCgU7F7ReFOdsJjvdFfSUd8542AnnqMjCB3baVTDdQ7HFZEDC8f%2FUIIOioqIMJt48XYjKKTP8gs2ncIDEJoI0ZSlYNDNCkOLSggMsL%2FAopXCSerSga7Q%2BqhInzm3a0PJPelAVQUXoIgUHk3E0QajmoUk3iNSW9Yhj7JPCHNJp9RRJ92rkVWpJGx1WRo6Jubsmy%2B97ZVyCeL1lVMJvRJYZ&X-Amz-Signature=0d4f0073ec8ef4f88e7e58d17d42664b1faf414cf34349f02fdade82d9e7f9b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVZHOCA5%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCwnX2Xqss6TyooFt%2B1loyLBK%2Fm9m%2F1HIfE24qsgECa3wIhAMY9PewJ8YQvIkim5AARZ%2FGMMP98qqho%2FSFIBJ%2FWpmCzKv8DCHkQABoMNjM3NDIzMTgzODA1IgxkMv6%2FBGimCoaVviMq3ANyj93Sm1j5gIwgArQAXip5aQwDDDwr%2B97DCKz1aYRGGex%2FE42Ysj8PizeVkYiCH0mIzMgZmDoqNvyVIPIYldJK%2F8qcf5nGAaCYKGGHeC0v%2BX6dY9GjJ%2FHlWpiwmhGsGoCBiVoqi%2BtxFn%2BK%2B5ce6PjYLa9RGvZSBYcvt%2Fj7tH8uaR5yKV2CD02dqdpborFLNgXTKHvrB7GoDwB5DBv0l3Fc3can%2By9gECo2x6GKFAkbbhm6utiNVlgzUf3lmz8LAh%2FgeEYWq3f54ybloNgaP%2F7nQjzGySg%2FV0K3k0d4nWljSvn%2BCZvec9Te79DCwc%2BhcMfpsWD4%2BKRzR5wwoCdOtQ7VQX7PBYBd0A9D8lYptENl2RnH2e2pcOlPEuZO0Q5jiyySOk%2F%2FoDOI8bFw6k8tAT751JHwd1uS3eioPTon3prqLngvQ0ky4Ms9bl2RgIt%2BOhokmr5PIAYGgox2HhXStd0BQyqqRt0WhY8xpytZNd1nO2BTTieNCSrG0G3kRPuvro6N6VqWu5SOA3vVrcNUmZibLe9xSplt5DlJwEy%2B27OllzjyjEtyZfscngWQ3t1tFou1zx3QnSRTBAF%2BKmrHZ%2FvAAqNUs7ZcmvtNQbsCybktgDYcc18mTtXZDEbSADDkhtvMBjqkAU%2BSHQtzCgU7F7ReFOdsJjvdFfSUd8542AnnqMjCB3baVTDdQ7HFZEDC8f%2FUIIOioqIMJt48XYjKKTP8gs2ncIDEJoI0ZSlYNDNCkOLSggMsL%2FAopXCSerSga7Q%2BqhInzm3a0PJPelAVQUXoIgUHk3E0QajmoUk3iNSW9Yhj7JPCHNJp9RRJ92rkVWpJGx1WRo6Jubsmy%2B97ZVyCeL1lVMJvRJYZ&X-Amz-Signature=0d8fa03e73ef58bb26ef9f5edadd5cd69e13274c1845d87efc1c1eb7ab2b9176&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVZHOCA5%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCwnX2Xqss6TyooFt%2B1loyLBK%2Fm9m%2F1HIfE24qsgECa3wIhAMY9PewJ8YQvIkim5AARZ%2FGMMP98qqho%2FSFIBJ%2FWpmCzKv8DCHkQABoMNjM3NDIzMTgzODA1IgxkMv6%2FBGimCoaVviMq3ANyj93Sm1j5gIwgArQAXip5aQwDDDwr%2B97DCKz1aYRGGex%2FE42Ysj8PizeVkYiCH0mIzMgZmDoqNvyVIPIYldJK%2F8qcf5nGAaCYKGGHeC0v%2BX6dY9GjJ%2FHlWpiwmhGsGoCBiVoqi%2BtxFn%2BK%2B5ce6PjYLa9RGvZSBYcvt%2Fj7tH8uaR5yKV2CD02dqdpborFLNgXTKHvrB7GoDwB5DBv0l3Fc3can%2By9gECo2x6GKFAkbbhm6utiNVlgzUf3lmz8LAh%2FgeEYWq3f54ybloNgaP%2F7nQjzGySg%2FV0K3k0d4nWljSvn%2BCZvec9Te79DCwc%2BhcMfpsWD4%2BKRzR5wwoCdOtQ7VQX7PBYBd0A9D8lYptENl2RnH2e2pcOlPEuZO0Q5jiyySOk%2F%2FoDOI8bFw6k8tAT751JHwd1uS3eioPTon3prqLngvQ0ky4Ms9bl2RgIt%2BOhokmr5PIAYGgox2HhXStd0BQyqqRt0WhY8xpytZNd1nO2BTTieNCSrG0G3kRPuvro6N6VqWu5SOA3vVrcNUmZibLe9xSplt5DlJwEy%2B27OllzjyjEtyZfscngWQ3t1tFou1zx3QnSRTBAF%2BKmrHZ%2FvAAqNUs7ZcmvtNQbsCybktgDYcc18mTtXZDEbSADDkhtvMBjqkAU%2BSHQtzCgU7F7ReFOdsJjvdFfSUd8542AnnqMjCB3baVTDdQ7HFZEDC8f%2FUIIOioqIMJt48XYjKKTP8gs2ncIDEJoI0ZSlYNDNCkOLSggMsL%2FAopXCSerSga7Q%2BqhInzm3a0PJPelAVQUXoIgUHk3E0QajmoUk3iNSW9Yhj7JPCHNJp9RRJ92rkVWpJGx1WRo6Jubsmy%2B97ZVyCeL1lVMJvRJYZ&X-Amz-Signature=04e9d2c9fba368cc0c3fb9320a354547174899df15d6fc1b82557dbd91d6e12b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVZHOCA5%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084247Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCwnX2Xqss6TyooFt%2B1loyLBK%2Fm9m%2F1HIfE24qsgECa3wIhAMY9PewJ8YQvIkim5AARZ%2FGMMP98qqho%2FSFIBJ%2FWpmCzKv8DCHkQABoMNjM3NDIzMTgzODA1IgxkMv6%2FBGimCoaVviMq3ANyj93Sm1j5gIwgArQAXip5aQwDDDwr%2B97DCKz1aYRGGex%2FE42Ysj8PizeVkYiCH0mIzMgZmDoqNvyVIPIYldJK%2F8qcf5nGAaCYKGGHeC0v%2BX6dY9GjJ%2FHlWpiwmhGsGoCBiVoqi%2BtxFn%2BK%2B5ce6PjYLa9RGvZSBYcvt%2Fj7tH8uaR5yKV2CD02dqdpborFLNgXTKHvrB7GoDwB5DBv0l3Fc3can%2By9gECo2x6GKFAkbbhm6utiNVlgzUf3lmz8LAh%2FgeEYWq3f54ybloNgaP%2F7nQjzGySg%2FV0K3k0d4nWljSvn%2BCZvec9Te79DCwc%2BhcMfpsWD4%2BKRzR5wwoCdOtQ7VQX7PBYBd0A9D8lYptENl2RnH2e2pcOlPEuZO0Q5jiyySOk%2F%2FoDOI8bFw6k8tAT751JHwd1uS3eioPTon3prqLngvQ0ky4Ms9bl2RgIt%2BOhokmr5PIAYGgox2HhXStd0BQyqqRt0WhY8xpytZNd1nO2BTTieNCSrG0G3kRPuvro6N6VqWu5SOA3vVrcNUmZibLe9xSplt5DlJwEy%2B27OllzjyjEtyZfscngWQ3t1tFou1zx3QnSRTBAF%2BKmrHZ%2FvAAqNUs7ZcmvtNQbsCybktgDYcc18mTtXZDEbSADDkhtvMBjqkAU%2BSHQtzCgU7F7ReFOdsJjvdFfSUd8542AnnqMjCB3baVTDdQ7HFZEDC8f%2FUIIOioqIMJt48XYjKKTP8gs2ncIDEJoI0ZSlYNDNCkOLSggMsL%2FAopXCSerSga7Q%2BqhInzm3a0PJPelAVQUXoIgUHk3E0QajmoUk3iNSW9Yhj7JPCHNJp9RRJ92rkVWpJGx1WRo6Jubsmy%2B97ZVyCeL1lVMJvRJYZ&X-Amz-Signature=363b85c1974fc9dffc327274e85590a3b6aebf3c7dfab2744ffe1bf6884d98e8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QUVLXQWV%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084248Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9rbmq7TQR8g%2B%2B9OwNwd5ON8F%2BYYProCcGIJpfKQ0oeQIhAJqiNYoapZiV5EoaNIBe%2BNlVDUVEulqq3P4wgAC5EeB0Kv8DCHkQABoMNjM3NDIzMTgzODA1Igy%2FSShApewrCOnvOcwq3AMOYM0yqihWWX%2BiT801oYwJ5KJ5HfOm7gF3ln9Td7LI%2FqgDQw4pUpuRw0i%2FR2cluIJEgxriCiAQ9hKc9EgHAgsGzDI3b8GXx4LuMpS9TzF9HnO76Dqy6%2F4Q18aiPKNO27RJKBdTwGdXasVvMMT9QWPWyUNHqB2Lc%2FgNWzUh7fw4CvcxOJ6hOJxtATRvqah%2BuHfkO87HAeMk%2F9tXrZIDX0uo%2BTcJg53kRPD6%2BrNgoFRZNo2p9gYKDpsCzIC7M1P6w6PaQWTCACKzXzj%2B8xafMjEAzhKjTZlBn4lTqxv5CNjojW9vowUIuoUTzgRUHokBvwgO6%2F51gBP3W7nEVcG%2BaCN%2FjW%2B%2F%2F0DIS%2BtF8j85PBO%2FZrEyaot0%2FiQwIJ%2F4FL8Cx114OES4v6unD89kS1XwAfar%2BsGm6QZCJJ%2FCV7Xu6Mr7i%2BWqYJAnUND04awNcuTXRF%2BQn88%2F%2FpgLNVFRA0JKt7wk%2BScSUW3TNWN2MU0hANVcxHwCTvFDL8%2FAE78ajF1zHC4bWkYz2nIMN4GKqDsAcmHPuzQE5ai7K9Q2DoDm3xqNVT0EdW1Kaw3D10iyInVDmm3ouYwF07CeXuMCnKRLq6addkoLFR5EgYLC8P8faYQ2%2B5X%2BYvyyfNO3JmpHlDDehtvMBjqkAZK8dhc3uJJCvzrNelZSw6bX2aAyETnLgHpNUz6BBA6nP82zR9KqoUIJdt8w0%2FwqfnuLhFYrONE8%2B5ikhduNsHH%2FrG%2F1OLu67N3b%2BeHZpBhbBHGCZN3FrbAY1EOM8EFunE%2B0LnZEuFODOQdjNBQVj%2B8MTntXsIYeoH7XdVb76x0eTaOYbo4EGmqurJD%2FT4o3%2BUsA5pshZFfN8UjU7xFUndwiTr%2Fr&X-Amz-Signature=e9523a89b00d46107b1fdf12182c97590f9d450cf30ef66dfcca1ff1db70c101&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U3ISEGDQ%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084249Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDsmz83H9PD3OyooDtJzv20GMWarG0vDwvxSe%2BEKnRj4AiEA0ihGXFgzjDL6qxs%2BEfEvrL5R35TvPb2Y2btwAz1Ftr4q%2FwMIeRAAGgw2Mzc0MjMxODM4MDUiDLH3fYluY2Y%2Bzuq6sircAx%2BQcKGreD3Vtgq3PIXYHFd9eqzPhyG%2BRW7tLOR9AUw2bVdSCdKyB32dLfLiQuSa%2FrGlEZOcgl7XI9be0x8cPZ1%2BeQ8mYtFHjjA10InHyHxEN9ZgL6NnV3RudzI30hCzAA3pC1WikiyZj2Ku%2FcJUw%2BowH3fOnzqfymvjERs%2B3Jwez6Owth38zn6sp5BHwaUPIY%2BLLBL7AVMt2RxZk0f%2Bqhol0vWH0qFD6t6vf2AKhGIJkRDkeZIJgxPWlXT0csrscWjKOX3Ic1B%2B0NNRL1%2B1IpBcjdpQk7GQtqV9KuUEbF5dLwSWdX7H%2FwJ59wnxnj3tOCl1Wu%2BF0aMa7eA%2FcGg9CVPr5jU%2BAtEIiyru9fQXA4XBI%2F%2F%2Bv2%2FDY4SoC%2BArzBLnRcS8U%2BNnIq%2BUDaBzTWVD8V5Pd44edTdy1J9QKytsUjx5%2BVoD56JJIp1uQDa8lH94B8DFiRS8jWzChvApjzgO5OFaU%2BrprtvnssPSNiKFSY5zAB9s%2F%2FcJ%2FjWJX6ogLWR5RV2itzFkmFnubml1rAJXB0IPWrWBN50BSMGqmv7IBJwOZihvvysGzZ8nweBN12XRjbSafb6K%2BR4fQEpTy6ESFeFBlhtcvLLp9sliIBpH2Bzcgozut4tft4zKX%2FLDMKKG28wGOqUBgGPdAy5EK0dVJquNcah1%2FU4za4iHQ3pkKcdNi0PmcWyGYZOmS%2Bob1WNGtezHkz6%2FlzbI4tabIBUzqpbelbYhFE%2BVjPq83acHQWzDNKngNUUvXQzgSRmefh85pWOARF%2F3edp31NiZrchyxcegZ9SJ3AoRB%2BBiR%2BEdpDNphVnIfkFNIPiAkWnGuMbhlg6SkWPuw9qtExEzu6uHQYawGAi9JoaJoJvB&X-Amz-Signature=0a35048d13b2d91250eb7ce61edaf98b64e240337ea0b8b2d0e80cff39f21554&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U3ISEGDQ%2F20260219%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260219T084249Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDsmz83H9PD3OyooDtJzv20GMWarG0vDwvxSe%2BEKnRj4AiEA0ihGXFgzjDL6qxs%2BEfEvrL5R35TvPb2Y2btwAz1Ftr4q%2FwMIeRAAGgw2Mzc0MjMxODM4MDUiDLH3fYluY2Y%2Bzuq6sircAx%2BQcKGreD3Vtgq3PIXYHFd9eqzPhyG%2BRW7tLOR9AUw2bVdSCdKyB32dLfLiQuSa%2FrGlEZOcgl7XI9be0x8cPZ1%2BeQ8mYtFHjjA10InHyHxEN9ZgL6NnV3RudzI30hCzAA3pC1WikiyZj2Ku%2FcJUw%2BowH3fOnzqfymvjERs%2B3Jwez6Owth38zn6sp5BHwaUPIY%2BLLBL7AVMt2RxZk0f%2Bqhol0vWH0qFD6t6vf2AKhGIJkRDkeZIJgxPWlXT0csrscWjKOX3Ic1B%2B0NNRL1%2B1IpBcjdpQk7GQtqV9KuUEbF5dLwSWdX7H%2FwJ59wnxnj3tOCl1Wu%2BF0aMa7eA%2FcGg9CVPr5jU%2BAtEIiyru9fQXA4XBI%2F%2F%2Bv2%2FDY4SoC%2BArzBLnRcS8U%2BNnIq%2BUDaBzTWVD8V5Pd44edTdy1J9QKytsUjx5%2BVoD56JJIp1uQDa8lH94B8DFiRS8jWzChvApjzgO5OFaU%2BrprtvnssPSNiKFSY5zAB9s%2F%2FcJ%2FjWJX6ogLWR5RV2itzFkmFnubml1rAJXB0IPWrWBN50BSMGqmv7IBJwOZihvvysGzZ8nweBN12XRjbSafb6K%2BR4fQEpTy6ESFeFBlhtcvLLp9sliIBpH2Bzcgozut4tft4zKX%2FLDMKKG28wGOqUBgGPdAy5EK0dVJquNcah1%2FU4za4iHQ3pkKcdNi0PmcWyGYZOmS%2Bob1WNGtezHkz6%2FlzbI4tabIBUzqpbelbYhFE%2BVjPq83acHQWzDNKngNUUvXQzgSRmefh85pWOARF%2F3edp31NiZrchyxcegZ9SJ3AoRB%2BBiR%2BEdpDNphVnIfkFNIPiAkWnGuMbhlg6SkWPuw9qtExEzu6uHQYawGAi9JoaJoJvB&X-Amz-Signature=472aa440729a466d0aaa36c8b1c3588e60aea86ade9b5abbda3608408ccd9070&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
