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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKOIXTNK%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDa9hB9AaEdoniwqGbnqeTx5bE5LcROYmoT0tKrhCgtEgIgRzH4mbJ%2FLTYW5lzgiw8DqgDX0031M0Z7lTST8668u6gq%2FwMIaxAAGgw2Mzc0MjMxODM4MDUiDPh%2FAfkepWKPEiXvzCrcA9Sa3cyNQJz57eSEnyQ%2BuQqhrlHIGzLIL4HQBqn9zRY7T7OEHPw6Ml1AcK07BA3XJqJIOBB8zPTXg1xZHpg18BqUxeaQasaKpH5RKq8WSH1yZ6dRuk%2B8FnTjYJOQkgrtooZu7%2F0rLCe0WXMnlIRqHTnBeRQatyXeOGDKsvphpodOPtnSSWHxMqQma6bebY7FRJnpin2aIQ9eZ2VJv7ZTJ9q18ZGtsA5M3%2FZVY%2F%2B0Mwm43f65bG2IHtIiqr9cpiubkyGvnfDZRjnWuNe9gXV7zcstk60hZ8FZUdRI8fVODdaVQHzqYZ414DTfl2qg93agRZgIJQQXauOKsKpc6c8Ozdr2vq%2F4YMHWqJCAKc2CIeKt%2FpqjEMovYxRcE10Fj8K%2BHpC%2FXRZnxsAeRPSqc564hwDYqBEyLGumLii9wStgSoUcLE4hl4gbvF9Hb1rY3CHNZNRHvNwl5Zua2ylhFIG0EZRWdC%2FS0%2Bgha7aakUMQ0V7vR%2FlF6AM3nyqDJIsbV76iJz2xYcJQaLTKKeQljRDW7XSfcdDP4N3FzPagynhvxHmqbCcRzWmiJS%2FQvHqru2lQLqkG1KLFjLG3D8PMclKt1hRJaHZYT%2BqrxLgE5lfsRvKUwTYCtwC%2B0SPcfDCZMIG9itEGOqUBQCkI0saPLBaQ9MH6CNuxFy2Gcl02OdJ5Lgg4fjdlU6woc2JLsh7xjKc5P9vbLQJd6QKKkvOoNtlKSSaLN78h2TLiKXnU4DM3m4BO1Og5Z8sL50PooOXd%2BskA34AOtCXePlbSAjlDbrJISgzCBOLWkevj6rsXEOP1MUxKYs6t9L%2FOxZoqGySGQPT2IiAjzGXKSFc87iIOPtVWqTGDOZKHPEVzFBvb&X-Amz-Signature=3bfc8af063a84886fd7e767da416c3bf5f9e551acb3c2e4d10e1ee1e31616bf9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKOIXTNK%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDa9hB9AaEdoniwqGbnqeTx5bE5LcROYmoT0tKrhCgtEgIgRzH4mbJ%2FLTYW5lzgiw8DqgDX0031M0Z7lTST8668u6gq%2FwMIaxAAGgw2Mzc0MjMxODM4MDUiDPh%2FAfkepWKPEiXvzCrcA9Sa3cyNQJz57eSEnyQ%2BuQqhrlHIGzLIL4HQBqn9zRY7T7OEHPw6Ml1AcK07BA3XJqJIOBB8zPTXg1xZHpg18BqUxeaQasaKpH5RKq8WSH1yZ6dRuk%2B8FnTjYJOQkgrtooZu7%2F0rLCe0WXMnlIRqHTnBeRQatyXeOGDKsvphpodOPtnSSWHxMqQma6bebY7FRJnpin2aIQ9eZ2VJv7ZTJ9q18ZGtsA5M3%2FZVY%2F%2B0Mwm43f65bG2IHtIiqr9cpiubkyGvnfDZRjnWuNe9gXV7zcstk60hZ8FZUdRI8fVODdaVQHzqYZ414DTfl2qg93agRZgIJQQXauOKsKpc6c8Ozdr2vq%2F4YMHWqJCAKc2CIeKt%2FpqjEMovYxRcE10Fj8K%2BHpC%2FXRZnxsAeRPSqc564hwDYqBEyLGumLii9wStgSoUcLE4hl4gbvF9Hb1rY3CHNZNRHvNwl5Zua2ylhFIG0EZRWdC%2FS0%2Bgha7aakUMQ0V7vR%2FlF6AM3nyqDJIsbV76iJz2xYcJQaLTKKeQljRDW7XSfcdDP4N3FzPagynhvxHmqbCcRzWmiJS%2FQvHqru2lQLqkG1KLFjLG3D8PMclKt1hRJaHZYT%2BqrxLgE5lfsRvKUwTYCtwC%2B0SPcfDCZMIG9itEGOqUBQCkI0saPLBaQ9MH6CNuxFy2Gcl02OdJ5Lgg4fjdlU6woc2JLsh7xjKc5P9vbLQJd6QKKkvOoNtlKSSaLN78h2TLiKXnU4DM3m4BO1Og5Z8sL50PooOXd%2BskA34AOtCXePlbSAjlDbrJISgzCBOLWkevj6rsXEOP1MUxKYs6t9L%2FOxZoqGySGQPT2IiAjzGXKSFc87iIOPtVWqTGDOZKHPEVzFBvb&X-Amz-Signature=f9152a663cf3f069e67e7c86789a951f28006250666ca69dec3b751ac87876a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WKOIXTNK%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDa9hB9AaEdoniwqGbnqeTx5bE5LcROYmoT0tKrhCgtEgIgRzH4mbJ%2FLTYW5lzgiw8DqgDX0031M0Z7lTST8668u6gq%2FwMIaxAAGgw2Mzc0MjMxODM4MDUiDPh%2FAfkepWKPEiXvzCrcA9Sa3cyNQJz57eSEnyQ%2BuQqhrlHIGzLIL4HQBqn9zRY7T7OEHPw6Ml1AcK07BA3XJqJIOBB8zPTXg1xZHpg18BqUxeaQasaKpH5RKq8WSH1yZ6dRuk%2B8FnTjYJOQkgrtooZu7%2F0rLCe0WXMnlIRqHTnBeRQatyXeOGDKsvphpodOPtnSSWHxMqQma6bebY7FRJnpin2aIQ9eZ2VJv7ZTJ9q18ZGtsA5M3%2FZVY%2F%2B0Mwm43f65bG2IHtIiqr9cpiubkyGvnfDZRjnWuNe9gXV7zcstk60hZ8FZUdRI8fVODdaVQHzqYZ414DTfl2qg93agRZgIJQQXauOKsKpc6c8Ozdr2vq%2F4YMHWqJCAKc2CIeKt%2FpqjEMovYxRcE10Fj8K%2BHpC%2FXRZnxsAeRPSqc564hwDYqBEyLGumLii9wStgSoUcLE4hl4gbvF9Hb1rY3CHNZNRHvNwl5Zua2ylhFIG0EZRWdC%2FS0%2Bgha7aakUMQ0V7vR%2FlF6AM3nyqDJIsbV76iJz2xYcJQaLTKKeQljRDW7XSfcdDP4N3FzPagynhvxHmqbCcRzWmiJS%2FQvHqru2lQLqkG1KLFjLG3D8PMclKt1hRJaHZYT%2BqrxLgE5lfsRvKUwTYCtwC%2B0SPcfDCZMIG9itEGOqUBQCkI0saPLBaQ9MH6CNuxFy2Gcl02OdJ5Lgg4fjdlU6woc2JLsh7xjKc5P9vbLQJd6QKKkvOoNtlKSSaLN78h2TLiKXnU4DM3m4BO1Og5Z8sL50PooOXd%2BskA34AOtCXePlbSAjlDbrJISgzCBOLWkevj6rsXEOP1MUxKYs6t9L%2FOxZoqGySGQPT2IiAjzGXKSFc87iIOPtVWqTGDOZKHPEVzFBvb&X-Amz-Signature=01787fcbdbab8a8ab0ababe087fcc26fe94e1eef55aced80bd41f6b1b5e4b177&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XCGQI2OL%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC7HCoHcNdMssGx4eIhJx5e%2FdBCvUnHePAXQzMrc6xHAQIhAMaMURWIkRyp9Z%2FZazHxOn0Ah%2FI3%2BajAKfWyHzYfbZ0VKv8DCGsQABoMNjM3NDIzMTgzODA1IgxH49RLXW4wkZ5xyo4q3AOvE5m2lzhmkVIJ8jtq4bn4ZBFire1qDxRKop7bKKmm6dFV37DaWWfJZKn7Jr8zz8AK34kv5%2FBBMlhNlXjajcKfcjfEcTUUAJD8gJGkmGZZYkVtltRzJfIxAFK%2FoC5%2FtbMzWsartZ%2BVHespze0I8FQW8A5nsoJeRfwtJZZXE6G2sMGIoCZN14Vf1L603pidu%2BjjocdNvnQrcnUkab%2FDspkA7aL7HYltEBkQ9kySIVYMIqDDQsjONrSKHzCMD0sqbcgPnUNgBiOjt%2BAGWaXNSpyhFqM%2FUaopz1DfV2UDo9Ua%2BGDXMa%2B%2Bmov8VPg9y5DnlAeIv%2FVzYxUHebc%2FJhqBdIdElEvJ8x5DKGFlwxmw%2BkJvEvi4Bh8dmj6Pf0sCY8ti%2FqHizayAL03z2q%2BGB279cjQcpGQDmizs41NqF%2FP6oHn4jGdN87LpTmxDx%2Ba9yCpL06%2FZ9jZsRUlVaNU%2FldK6tceS%2B5280jqYOQJboAp4kLFSVfJ49DAu9xh67eLdYCXPxl3lli00%2F85DRSUoZ%2FMwCc306XoD%2BcLskcd6aXEP6iahc5ySVFBua%2FWZyC13xtmoH3ZTTN%2FHdmqF0uselcN3mO%2BBdkZwcVlyJ6ziEDznP5YN2glAb7OvQlmAAyosHDDiu4rRBjqkATG4wwgKh0GOHLJqM6gnTBrfbkcu%2F2%2FXgQbgfR2f4fp9esm2OiEQ4LMQGMiM%2FjJmY1vd4uExAhz65IHDh5rFvZTeFkIzjK%2F3sGAYiwxPbb353zAB68UjzREvlP5NB69x7TncmirMQPej13SwKTZjmkRFYRG1xDUpNHRRjPweMxl3v1rfOCzE6ZbooNfq0pykMMNcSbOfx0perET6lMMhtI1xitiR&X-Amz-Signature=7b612ffef008da3e0d456b493f53bdd29edc990bd4393c595172e15030e1a00c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XCGQI2OL%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC7HCoHcNdMssGx4eIhJx5e%2FdBCvUnHePAXQzMrc6xHAQIhAMaMURWIkRyp9Z%2FZazHxOn0Ah%2FI3%2BajAKfWyHzYfbZ0VKv8DCGsQABoMNjM3NDIzMTgzODA1IgxH49RLXW4wkZ5xyo4q3AOvE5m2lzhmkVIJ8jtq4bn4ZBFire1qDxRKop7bKKmm6dFV37DaWWfJZKn7Jr8zz8AK34kv5%2FBBMlhNlXjajcKfcjfEcTUUAJD8gJGkmGZZYkVtltRzJfIxAFK%2FoC5%2FtbMzWsartZ%2BVHespze0I8FQW8A5nsoJeRfwtJZZXE6G2sMGIoCZN14Vf1L603pidu%2BjjocdNvnQrcnUkab%2FDspkA7aL7HYltEBkQ9kySIVYMIqDDQsjONrSKHzCMD0sqbcgPnUNgBiOjt%2BAGWaXNSpyhFqM%2FUaopz1DfV2UDo9Ua%2BGDXMa%2B%2Bmov8VPg9y5DnlAeIv%2FVzYxUHebc%2FJhqBdIdElEvJ8x5DKGFlwxmw%2BkJvEvi4Bh8dmj6Pf0sCY8ti%2FqHizayAL03z2q%2BGB279cjQcpGQDmizs41NqF%2FP6oHn4jGdN87LpTmxDx%2Ba9yCpL06%2FZ9jZsRUlVaNU%2FldK6tceS%2B5280jqYOQJboAp4kLFSVfJ49DAu9xh67eLdYCXPxl3lli00%2F85DRSUoZ%2FMwCc306XoD%2BcLskcd6aXEP6iahc5ySVFBua%2FWZyC13xtmoH3ZTTN%2FHdmqF0uselcN3mO%2BBdkZwcVlyJ6ziEDznP5YN2glAb7OvQlmAAyosHDDiu4rRBjqkATG4wwgKh0GOHLJqM6gnTBrfbkcu%2F2%2FXgQbgfR2f4fp9esm2OiEQ4LMQGMiM%2FjJmY1vd4uExAhz65IHDh5rFvZTeFkIzjK%2F3sGAYiwxPbb353zAB68UjzREvlP5NB69x7TncmirMQPej13SwKTZjmkRFYRG1xDUpNHRRjPweMxl3v1rfOCzE6ZbooNfq0pykMMNcSbOfx0perET6lMMhtI1xitiR&X-Amz-Signature=8c1d6746e7c0d69ef591c8ac8fcfc4cbb37c96265c93b7cf73c12f22593ef573&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XCGQI2OL%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC7HCoHcNdMssGx4eIhJx5e%2FdBCvUnHePAXQzMrc6xHAQIhAMaMURWIkRyp9Z%2FZazHxOn0Ah%2FI3%2BajAKfWyHzYfbZ0VKv8DCGsQABoMNjM3NDIzMTgzODA1IgxH49RLXW4wkZ5xyo4q3AOvE5m2lzhmkVIJ8jtq4bn4ZBFire1qDxRKop7bKKmm6dFV37DaWWfJZKn7Jr8zz8AK34kv5%2FBBMlhNlXjajcKfcjfEcTUUAJD8gJGkmGZZYkVtltRzJfIxAFK%2FoC5%2FtbMzWsartZ%2BVHespze0I8FQW8A5nsoJeRfwtJZZXE6G2sMGIoCZN14Vf1L603pidu%2BjjocdNvnQrcnUkab%2FDspkA7aL7HYltEBkQ9kySIVYMIqDDQsjONrSKHzCMD0sqbcgPnUNgBiOjt%2BAGWaXNSpyhFqM%2FUaopz1DfV2UDo9Ua%2BGDXMa%2B%2Bmov8VPg9y5DnlAeIv%2FVzYxUHebc%2FJhqBdIdElEvJ8x5DKGFlwxmw%2BkJvEvi4Bh8dmj6Pf0sCY8ti%2FqHizayAL03z2q%2BGB279cjQcpGQDmizs41NqF%2FP6oHn4jGdN87LpTmxDx%2Ba9yCpL06%2FZ9jZsRUlVaNU%2FldK6tceS%2B5280jqYOQJboAp4kLFSVfJ49DAu9xh67eLdYCXPxl3lli00%2F85DRSUoZ%2FMwCc306XoD%2BcLskcd6aXEP6iahc5ySVFBua%2FWZyC13xtmoH3ZTTN%2FHdmqF0uselcN3mO%2BBdkZwcVlyJ6ziEDznP5YN2glAb7OvQlmAAyosHDDiu4rRBjqkATG4wwgKh0GOHLJqM6gnTBrfbkcu%2F2%2FXgQbgfR2f4fp9esm2OiEQ4LMQGMiM%2FjJmY1vd4uExAhz65IHDh5rFvZTeFkIzjK%2F3sGAYiwxPbb353zAB68UjzREvlP5NB69x7TncmirMQPej13SwKTZjmkRFYRG1xDUpNHRRjPweMxl3v1rfOCzE6ZbooNfq0pykMMNcSbOfx0perET6lMMhtI1xitiR&X-Amz-Signature=35672480f430941adee73f4b8fd38a7bd22028b141d2cffe5c29012d510cabff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XCGQI2OL%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112736Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC7HCoHcNdMssGx4eIhJx5e%2FdBCvUnHePAXQzMrc6xHAQIhAMaMURWIkRyp9Z%2FZazHxOn0Ah%2FI3%2BajAKfWyHzYfbZ0VKv8DCGsQABoMNjM3NDIzMTgzODA1IgxH49RLXW4wkZ5xyo4q3AOvE5m2lzhmkVIJ8jtq4bn4ZBFire1qDxRKop7bKKmm6dFV37DaWWfJZKn7Jr8zz8AK34kv5%2FBBMlhNlXjajcKfcjfEcTUUAJD8gJGkmGZZYkVtltRzJfIxAFK%2FoC5%2FtbMzWsartZ%2BVHespze0I8FQW8A5nsoJeRfwtJZZXE6G2sMGIoCZN14Vf1L603pidu%2BjjocdNvnQrcnUkab%2FDspkA7aL7HYltEBkQ9kySIVYMIqDDQsjONrSKHzCMD0sqbcgPnUNgBiOjt%2BAGWaXNSpyhFqM%2FUaopz1DfV2UDo9Ua%2BGDXMa%2B%2Bmov8VPg9y5DnlAeIv%2FVzYxUHebc%2FJhqBdIdElEvJ8x5DKGFlwxmw%2BkJvEvi4Bh8dmj6Pf0sCY8ti%2FqHizayAL03z2q%2BGB279cjQcpGQDmizs41NqF%2FP6oHn4jGdN87LpTmxDx%2Ba9yCpL06%2FZ9jZsRUlVaNU%2FldK6tceS%2B5280jqYOQJboAp4kLFSVfJ49DAu9xh67eLdYCXPxl3lli00%2F85DRSUoZ%2FMwCc306XoD%2BcLskcd6aXEP6iahc5ySVFBua%2FWZyC13xtmoH3ZTTN%2FHdmqF0uselcN3mO%2BBdkZwcVlyJ6ziEDznP5YN2glAb7OvQlmAAyosHDDiu4rRBjqkATG4wwgKh0GOHLJqM6gnTBrfbkcu%2F2%2FXgQbgfR2f4fp9esm2OiEQ4LMQGMiM%2FjJmY1vd4uExAhz65IHDh5rFvZTeFkIzjK%2F3sGAYiwxPbb353zAB68UjzREvlP5NB69x7TncmirMQPej13SwKTZjmkRFYRG1xDUpNHRRjPweMxl3v1rfOCzE6ZbooNfq0pykMMNcSbOfx0perET6lMMhtI1xitiR&X-Amz-Signature=67c344845e71150a9634f1643bec485799b7468d9311dcd16fe9aa1c6439a707&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FEUCM5I%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIBW0YxOGKPDNfBcgUuysBdiCTsyVH%2BuabBCNB1i1zRZ%2BAiA9Y5xZp%2BNLyqrG36BcltlzqOyLXKXnuGBKLywXYbpcISr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIM2vGayJ%2FWHqzeAx2%2BKtwD5PEU6aj%2BE6YGrdXHRx2j4r2DNu5oWVQxVqYdnKUW0gx%2BTLAY0fD%2BUE1bVvl7BeTT3Agnvh6lxw%2BzM%2FYtzh5VPxYeov4Z7%2BAVwnMgm2ROgEWP7PXYqZZAI4r2fhDvnF37D3cwAMgg632aLeHX%2BfxLNLZ4D9%2B4oriQlz6FIT6ipdgJ60AksrIHvlsVkDa43j9lv%2Fm3GV5XB5GVyS15T9ZvG%2BI%2FFVsyBIMdeN0Em1cjJtjUdOQcFd0AV2EOeuUnLoE6UGpF4qvOhl%2F0IR8xP%2FWY1%2B6CKINRnoSjuxK8OKQq4t7HobEQMWfhuRHTk7pOpTmEl%2FfqHs7Wtc06%2BZH6O4U8f4TP51iiupGf5kLMecn1UMEaYyDqPymS9z2AKUfc9twQH6C4h8zl9b3XQ2AWiVzxllRv9AjxrVCQbVrC59oBb1smKViz%2BqUJBYc0xZ6IKJVQlL%2F9qoEBKWOytZnjh2LIZ9UxnEBHwmaoo%2BDhTC8Ukr4ZrxvTE41%2BAAWHFqb%2FrrK7ZfvWp0l8pVD%2BHKIsZ1L9%2B0bry6frIQpQOWba4PinRB0VHAAxrNKzkxZYxwIuYLGqgf9oEBAWHdfrrbSY3sNiqiVub2naG%2FEOqgzKx4xSAaEF0epdtwbIIav%2BzxswxryK0QY6pgEfIEHsAEKpzBZtZkGRiJWVYjpyLU9tWJzmnbiHewhUYzs6wB8tBAukbtNd7B53JeHv9kTfu%2Fe%2B%2FKFPO9n%2BsKD3eeWmXFcVyGutYCosZ8%2BKYAaS9wTVx9SPHR%2FEbFtuBFEqC8SXKtSvEAkTow7fSlasB8jcU28LgVOrnDZ%2Fh42V%2BA6pWSgP03U%2BN18q5Nf0Rx5NAc8%2ByfVHovCImoAeVQf6FUh3oNO7&X-Amz-Signature=410a9074d7835f2d4a3ffdd498e0649c06e4c13c016f6fd865639a0978b68985&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RPHHRVF2%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICD1m8yGmwZj1Dx2pPEzy%2BeFvpCusfec3y72Y8wnpNdEAiBLCwvOC%2BTvyl7XlznmJFm7EYQ8hxHNhY8jaOvchJGxdSr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMQI0VGTE4TFuK9NSLKtwDFsSuFwIneRzp1kCInkHgejgLyFMAu8WXT6rbysmQ16D3q5bJDBSLSVfJ%2BIZCq8BL%2Bukh1PSZMOnOC%2B%2BkNCSWgfkZEdxwrsM6puLsC%2BUGOGFidU8PAkZzhF88MFmoQOes82XS7IUvyhUe3i%2B36Y9Tj68he0a7Dt7lUiChJcmXCKGZRXZD2rRkLlI6zqL%2Bi5FZ8AlJPmIlpaJZBP22FE5pvJ4ijuPv0Vyp7mnt5YSu66xLTM6Dzx7546IveWf1P22wb94j%2BIR5IAdApLz2ophf1q%2Bs4IDxzjXCokkyUPQmQscPgLZP2YBa0svZa2Bo9jU6BK1ONZJKQsw8dtNHzIP80PL1Dp1d95WmjZMK5MDXNvxa4HJBrjZ73uYzN24RV6yX5CYM%2FcksbaQLMu0wd7yQU7RPta%2FIWnhN%2BVnkkUPekf9uWB1KVWQh%2BVilBYooJ3kpQ0ust5NmZu1TYHb2cED4A9A0YfZwg%2BMDFccLw4lJ1%2BtqSDr3uAW4I5Me7u7rjyoOkwOAEzByap2Ebw%2FlxQp6ZGVUT0yoFZgz5twbillHLOVspRiMxhzRS6KIX%2B1DBd8xmHbMkRAbQsemzW%2BJds8HQzhTRttJR6xe6qnggm1X%2FUPbI86LULUWcKO9pzMwt7yK0QY6pgG8gLLwSs0XvR3ehwpW2pYsWFtp77PP%2Bhg8hvycBmyXAYRMmUcRynbI%2BYWN3pxxSWQF1zVzNmCYYWg5Ec5226oZ56kVre5nvDcBgCJtSPFwZ7ZPZwo%2BaLu4a1l6SFCMQekeDiuPbrK8BdxVedvQ56Qap4g5eSgSHyP8IlGOiCy69xoW6yrmFICCbW4QcF0XlmT%2BhfO4OBgVTaNjYlbOeYm6eUPrXkKp&X-Amz-Signature=d1c96a17852a8365568b32d10bc8304639ddf5ca32fd124a48d04f8ccb6f2016&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RPHHRVF2%2F20260605%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260605T112737Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEKL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICD1m8yGmwZj1Dx2pPEzy%2BeFvpCusfec3y72Y8wnpNdEAiBLCwvOC%2BTvyl7XlznmJFm7EYQ8hxHNhY8jaOvchJGxdSr%2FAwhrEAAaDDYzNzQyMzE4MzgwNSIMQI0VGTE4TFuK9NSLKtwDFsSuFwIneRzp1kCInkHgejgLyFMAu8WXT6rbysmQ16D3q5bJDBSLSVfJ%2BIZCq8BL%2Bukh1PSZMOnOC%2B%2BkNCSWgfkZEdxwrsM6puLsC%2BUGOGFidU8PAkZzhF88MFmoQOes82XS7IUvyhUe3i%2B36Y9Tj68he0a7Dt7lUiChJcmXCKGZRXZD2rRkLlI6zqL%2Bi5FZ8AlJPmIlpaJZBP22FE5pvJ4ijuPv0Vyp7mnt5YSu66xLTM6Dzx7546IveWf1P22wb94j%2BIR5IAdApLz2ophf1q%2Bs4IDxzjXCokkyUPQmQscPgLZP2YBa0svZa2Bo9jU6BK1ONZJKQsw8dtNHzIP80PL1Dp1d95WmjZMK5MDXNvxa4HJBrjZ73uYzN24RV6yX5CYM%2FcksbaQLMu0wd7yQU7RPta%2FIWnhN%2BVnkkUPekf9uWB1KVWQh%2BVilBYooJ3kpQ0ust5NmZu1TYHb2cED4A9A0YfZwg%2BMDFccLw4lJ1%2BtqSDr3uAW4I5Me7u7rjyoOkwOAEzByap2Ebw%2FlxQp6ZGVUT0yoFZgz5twbillHLOVspRiMxhzRS6KIX%2B1DBd8xmHbMkRAbQsemzW%2BJds8HQzhTRttJR6xe6qnggm1X%2FUPbI86LULUWcKO9pzMwt7yK0QY6pgG8gLLwSs0XvR3ehwpW2pYsWFtp77PP%2Bhg8hvycBmyXAYRMmUcRynbI%2BYWN3pxxSWQF1zVzNmCYYWg5Ec5226oZ56kVre5nvDcBgCJtSPFwZ7ZPZwo%2BaLu4a1l6SFCMQekeDiuPbrK8BdxVedvQ56Qap4g5eSgSHyP8IlGOiCy69xoW6yrmFICCbW4QcF0XlmT%2BhfO4OBgVTaNjYlbOeYm6eUPrXkKp&X-Amz-Signature=f24e6b1a9136a7fb49e1f14c8b8b528f946325ee92a3ad2e072b06e9c95c5782&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
