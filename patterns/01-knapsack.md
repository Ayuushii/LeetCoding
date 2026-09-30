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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UVP3QURC%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChrCU6VuQx5eUTBggKWms2hXrlJ30PLVi8GG1rtsNpfgIgFiHdB8pG5LRwEfGcDn5W5nVcV0uER1t372oHlR%2FPYegq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDKPWpgUUo0McOg0wnCrcA2wtVkbfoGsBzi9y06EVmhRgnqRgKLdazc2OVJYqoPicIhczmPi2eAEIbXKhWMyTvdOyIdPtb%2BoytDMRq%2F%2BydhTLdE3GLHbt5MzAOW6JUaU8LiCAQT%2BIoW%2FQEverZKv3u2OgnEZ%2FS%2FNMSWKGPM%2FuyRdm7NOBS1ZT39YKLN8rUU49KiaKHia92NZ1GZ6WcpOAqUvBKh8uwihfz%2BNNCgJmwuU9cPW78mZTSStgVyF5zvYHhvfHzmDSF5CgPcFaVL7x6j5yK%2FrszPNIwcO7B2TbmipOJ22ZfjGCbr21WFgUIxjyDx1oiFRzjqFmd%2BmsGuVatZ5NS0agI315hFHEe8oMoFEnxlHhbrpdmopvCD90dlPRjMGg2h6%2BmXjh4heYtG1H%2FWC1MvaAsZv9zxyznns0hJ%2BK9BIYPxr9ZKtuBMgSrvSg3C1gxaXPZWJU1XAXEnFkzvm%2FfEceqtPdvfTAGfh0a7aqkJ1NrRDlfQE4RNo0pOn6fP%2FQfltUacIMHPkqS6yuMZDBDtNs4ypCqIOFm0P6FeI5KxY2BtlRCuUsqgTYicjJfBEMKD6hLfCHhHbhkwl%2FF2WEkB1mxhZL8ig1aI0RS8tGhCayYY2XD1wiqE99XkeEjZrHbPoCEiFCpffLML2E9NUGOqUBYeX9voapXhgw5wn1T3ppjZm%2FQHEHn3aiT2MnNlRPYedgkTV8fUZ2k05oN7pol7ikyON3jdM4A7Ey%2FbGBz29%2BFfxcaDFla9X8%2Bo6TvF1bS3sW6x42W9z%2FRaLbQmGTQUkEXaq5RDuUZ2se9cgDMXfGojGBknr6XXS9%2BOMFNQmCjDUJoVRBcrkyZ1rYWx8jm%2F3ucs3dyf%2Ftonxu%2FH4SI3QZ6wt4SWWu&X-Amz-Signature=d8d53211096a93992b52da3c1412051d9a7700de0fc0f742686ab15a461ca590&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UVP3QURC%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChrCU6VuQx5eUTBggKWms2hXrlJ30PLVi8GG1rtsNpfgIgFiHdB8pG5LRwEfGcDn5W5nVcV0uER1t372oHlR%2FPYegq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDKPWpgUUo0McOg0wnCrcA2wtVkbfoGsBzi9y06EVmhRgnqRgKLdazc2OVJYqoPicIhczmPi2eAEIbXKhWMyTvdOyIdPtb%2BoytDMRq%2F%2BydhTLdE3GLHbt5MzAOW6JUaU8LiCAQT%2BIoW%2FQEverZKv3u2OgnEZ%2FS%2FNMSWKGPM%2FuyRdm7NOBS1ZT39YKLN8rUU49KiaKHia92NZ1GZ6WcpOAqUvBKh8uwihfz%2BNNCgJmwuU9cPW78mZTSStgVyF5zvYHhvfHzmDSF5CgPcFaVL7x6j5yK%2FrszPNIwcO7B2TbmipOJ22ZfjGCbr21WFgUIxjyDx1oiFRzjqFmd%2BmsGuVatZ5NS0agI315hFHEe8oMoFEnxlHhbrpdmopvCD90dlPRjMGg2h6%2BmXjh4heYtG1H%2FWC1MvaAsZv9zxyznns0hJ%2BK9BIYPxr9ZKtuBMgSrvSg3C1gxaXPZWJU1XAXEnFkzvm%2FfEceqtPdvfTAGfh0a7aqkJ1NrRDlfQE4RNo0pOn6fP%2FQfltUacIMHPkqS6yuMZDBDtNs4ypCqIOFm0P6FeI5KxY2BtlRCuUsqgTYicjJfBEMKD6hLfCHhHbhkwl%2FF2WEkB1mxhZL8ig1aI0RS8tGhCayYY2XD1wiqE99XkeEjZrHbPoCEiFCpffLML2E9NUGOqUBYeX9voapXhgw5wn1T3ppjZm%2FQHEHn3aiT2MnNlRPYedgkTV8fUZ2k05oN7pol7ikyON3jdM4A7Ey%2FbGBz29%2BFfxcaDFla9X8%2Bo6TvF1bS3sW6x42W9z%2FRaLbQmGTQUkEXaq5RDuUZ2se9cgDMXfGojGBknr6XXS9%2BOMFNQmCjDUJoVRBcrkyZ1rYWx8jm%2F3ucs3dyf%2Ftonxu%2FH4SI3QZ6wt4SWWu&X-Amz-Signature=9fbe01bcf5f99fe79e2078df51bfc34225b44a0670cf2fef9dc451ed442b0c80&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UVP3QURC%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQChrCU6VuQx5eUTBggKWms2hXrlJ30PLVi8GG1rtsNpfgIgFiHdB8pG5LRwEfGcDn5W5nVcV0uER1t372oHlR%2FPYegq%2FwMIZRAAGgw2Mzc0MjMxODM4MDUiDKPWpgUUo0McOg0wnCrcA2wtVkbfoGsBzi9y06EVmhRgnqRgKLdazc2OVJYqoPicIhczmPi2eAEIbXKhWMyTvdOyIdPtb%2BoytDMRq%2F%2BydhTLdE3GLHbt5MzAOW6JUaU8LiCAQT%2BIoW%2FQEverZKv3u2OgnEZ%2FS%2FNMSWKGPM%2FuyRdm7NOBS1ZT39YKLN8rUU49KiaKHia92NZ1GZ6WcpOAqUvBKh8uwihfz%2BNNCgJmwuU9cPW78mZTSStgVyF5zvYHhvfHzmDSF5CgPcFaVL7x6j5yK%2FrszPNIwcO7B2TbmipOJ22ZfjGCbr21WFgUIxjyDx1oiFRzjqFmd%2BmsGuVatZ5NS0agI315hFHEe8oMoFEnxlHhbrpdmopvCD90dlPRjMGg2h6%2BmXjh4heYtG1H%2FWC1MvaAsZv9zxyznns0hJ%2BK9BIYPxr9ZKtuBMgSrvSg3C1gxaXPZWJU1XAXEnFkzvm%2FfEceqtPdvfTAGfh0a7aqkJ1NrRDlfQE4RNo0pOn6fP%2FQfltUacIMHPkqS6yuMZDBDtNs4ypCqIOFm0P6FeI5KxY2BtlRCuUsqgTYicjJfBEMKD6hLfCHhHbhkwl%2FF2WEkB1mxhZL8ig1aI0RS8tGhCayYY2XD1wiqE99XkeEjZrHbPoCEiFCpffLML2E9NUGOqUBYeX9voapXhgw5wn1T3ppjZm%2FQHEHn3aiT2MnNlRPYedgkTV8fUZ2k05oN7pol7ikyON3jdM4A7Ey%2FbGBz29%2BFfxcaDFla9X8%2Bo6TvF1bS3sW6x42W9z%2FRaLbQmGTQUkEXaq5RDuUZ2se9cgDMXfGojGBknr6XXS9%2BOMFNQmCjDUJoVRBcrkyZ1rYWx8jm%2F3ucs3dyf%2Ftonxu%2FH4SI3QZ6wt4SWWu&X-Amz-Signature=2669c99532ba648efb648d2faa72565cbdd0dd8f9003fa1f8fccf2865bf609d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2VWDWHH%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAowpHTJzP06HxrEsvh%2FRI3YX3dgtKqqZYfqVgK%2F8TK3AiAfp0QY03KM6KkeY%2B1NsVIW8GAzFcEK4CZAUSUXg3wU1ir%2FAwhlEAAaDDYzNzQyMzE4MzgwNSIM0Kb5JxRqJG8Kq4CUKtwDOe%2Feka8eXz%2B26rQjOWqn1rSu71bnbJnhRAiBYEVF6clFTNRF6%2BvTi%2Fm22774VnyQ4GHRlHvMTzHUE1T4gPfUN8HslzWN9wa6GacAVJVX2SXegwq9XNNvNxzFv08ZVM%2BI%2F%2FAQTlwBQkFt5T54KFKMiaWKn%2F2a5yPXYT2hFQoH04eSTBH%2FsIK46Dcjt%2BGE%2BumbgfuObIpXU0xqxQivOj7K7lbP7oQfDUhOf7uL0SFCJjWkSDczfmXyx%2Bz0MMAk9vo%2Fu096%2F9pSODrItBGc73cTm8XeaSsm7n8cfJumRlpcU2wkrFIEiG6QedE8qhBBlu2UctgYGn1mL6HzE1oze5nMKupRkkIVdUGo58KEmoGM6u7AsTQCI%2B6esDuTB8TYOJm9JI0hKZhyRM%2Fw5K3Dyo6Ebj9WSGhKpxgdd0%2BHLpa5qVwvdEpWSI9oYekvs6HfC7kgvwNw%2FItSY5qi2divFH8s1xzFVVWNO%2B7qc2vZVHY1DfGlFevtbzV%2FmC42l%2BCIk7BkGpZvlWP9Rbeo88KE0OebhkGUyeQO49B%2BeDMc6RAVuhmjysJsmnwKiupmXqoz1QmWDWB1w8bNFnLtQuvEDpZFTSew9Wma7tHimhym%2F6Uf1cXqnXZ0sQcy44bbyoUw9IX01QY6pgGxQbI3rsFL0wx1MONmZyYTGRvqUPhS86HLCmFkgu2bvPcg31Azbq0sd3rcXZei3hwSCGl%2Fc1M%2Bwn9q%2BNlG1dS2pPTVooXNIgi5ATNEXtU8eaCLBiwBoH%2FmGrr%2FzMuRaqzDGy5zbt7oZixI7NngqA0nRm6JjDaBchuqP1rrMEILkqhoKzJ53rvg%2FQz1iig%2BJPb1OXYJAGWqt%2B5daXrAI8%2FZheI0K8HD&X-Amz-Signature=9fb6516f05f00de8dec895e5a519ec091fc3dd0a56d2fa82dd5a8bf2e8dc4b3d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2VWDWHH%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAowpHTJzP06HxrEsvh%2FRI3YX3dgtKqqZYfqVgK%2F8TK3AiAfp0QY03KM6KkeY%2B1NsVIW8GAzFcEK4CZAUSUXg3wU1ir%2FAwhlEAAaDDYzNzQyMzE4MzgwNSIM0Kb5JxRqJG8Kq4CUKtwDOe%2Feka8eXz%2B26rQjOWqn1rSu71bnbJnhRAiBYEVF6clFTNRF6%2BvTi%2Fm22774VnyQ4GHRlHvMTzHUE1T4gPfUN8HslzWN9wa6GacAVJVX2SXegwq9XNNvNxzFv08ZVM%2BI%2F%2FAQTlwBQkFt5T54KFKMiaWKn%2F2a5yPXYT2hFQoH04eSTBH%2FsIK46Dcjt%2BGE%2BumbgfuObIpXU0xqxQivOj7K7lbP7oQfDUhOf7uL0SFCJjWkSDczfmXyx%2Bz0MMAk9vo%2Fu096%2F9pSODrItBGc73cTm8XeaSsm7n8cfJumRlpcU2wkrFIEiG6QedE8qhBBlu2UctgYGn1mL6HzE1oze5nMKupRkkIVdUGo58KEmoGM6u7AsTQCI%2B6esDuTB8TYOJm9JI0hKZhyRM%2Fw5K3Dyo6Ebj9WSGhKpxgdd0%2BHLpa5qVwvdEpWSI9oYekvs6HfC7kgvwNw%2FItSY5qi2divFH8s1xzFVVWNO%2B7qc2vZVHY1DfGlFevtbzV%2FmC42l%2BCIk7BkGpZvlWP9Rbeo88KE0OebhkGUyeQO49B%2BeDMc6RAVuhmjysJsmnwKiupmXqoz1QmWDWB1w8bNFnLtQuvEDpZFTSew9Wma7tHimhym%2F6Uf1cXqnXZ0sQcy44bbyoUw9IX01QY6pgGxQbI3rsFL0wx1MONmZyYTGRvqUPhS86HLCmFkgu2bvPcg31Azbq0sd3rcXZei3hwSCGl%2Fc1M%2Bwn9q%2BNlG1dS2pPTVooXNIgi5ATNEXtU8eaCLBiwBoH%2FmGrr%2FzMuRaqzDGy5zbt7oZixI7NngqA0nRm6JjDaBchuqP1rrMEILkqhoKzJ53rvg%2FQz1iig%2BJPb1OXYJAGWqt%2B5daXrAI8%2FZheI0K8HD&X-Amz-Signature=2a9884ccfa0aeb7b4e04856531af50767af20aff8c25e2e1b26afb325c4f13c2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2VWDWHH%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAowpHTJzP06HxrEsvh%2FRI3YX3dgtKqqZYfqVgK%2F8TK3AiAfp0QY03KM6KkeY%2B1NsVIW8GAzFcEK4CZAUSUXg3wU1ir%2FAwhlEAAaDDYzNzQyMzE4MzgwNSIM0Kb5JxRqJG8Kq4CUKtwDOe%2Feka8eXz%2B26rQjOWqn1rSu71bnbJnhRAiBYEVF6clFTNRF6%2BvTi%2Fm22774VnyQ4GHRlHvMTzHUE1T4gPfUN8HslzWN9wa6GacAVJVX2SXegwq9XNNvNxzFv08ZVM%2BI%2F%2FAQTlwBQkFt5T54KFKMiaWKn%2F2a5yPXYT2hFQoH04eSTBH%2FsIK46Dcjt%2BGE%2BumbgfuObIpXU0xqxQivOj7K7lbP7oQfDUhOf7uL0SFCJjWkSDczfmXyx%2Bz0MMAk9vo%2Fu096%2F9pSODrItBGc73cTm8XeaSsm7n8cfJumRlpcU2wkrFIEiG6QedE8qhBBlu2UctgYGn1mL6HzE1oze5nMKupRkkIVdUGo58KEmoGM6u7AsTQCI%2B6esDuTB8TYOJm9JI0hKZhyRM%2Fw5K3Dyo6Ebj9WSGhKpxgdd0%2BHLpa5qVwvdEpWSI9oYekvs6HfC7kgvwNw%2FItSY5qi2divFH8s1xzFVVWNO%2B7qc2vZVHY1DfGlFevtbzV%2FmC42l%2BCIk7BkGpZvlWP9Rbeo88KE0OebhkGUyeQO49B%2BeDMc6RAVuhmjysJsmnwKiupmXqoz1QmWDWB1w8bNFnLtQuvEDpZFTSew9Wma7tHimhym%2F6Uf1cXqnXZ0sQcy44bbyoUw9IX01QY6pgGxQbI3rsFL0wx1MONmZyYTGRvqUPhS86HLCmFkgu2bvPcg31Azbq0sd3rcXZei3hwSCGl%2Fc1M%2Bwn9q%2BNlG1dS2pPTVooXNIgi5ATNEXtU8eaCLBiwBoH%2FmGrr%2FzMuRaqzDGy5zbt7oZixI7NngqA0nRm6JjDaBchuqP1rrMEILkqhoKzJ53rvg%2FQz1iig%2BJPb1OXYJAGWqt%2B5daXrAI8%2FZheI0K8HD&X-Amz-Signature=ed802e9c86cbd69b025bb8194d9dc6edf5c611b25e1bab83b211765271003071&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Y2VWDWHH%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143741Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIAowpHTJzP06HxrEsvh%2FRI3YX3dgtKqqZYfqVgK%2F8TK3AiAfp0QY03KM6KkeY%2B1NsVIW8GAzFcEK4CZAUSUXg3wU1ir%2FAwhlEAAaDDYzNzQyMzE4MzgwNSIM0Kb5JxRqJG8Kq4CUKtwDOe%2Feka8eXz%2B26rQjOWqn1rSu71bnbJnhRAiBYEVF6clFTNRF6%2BvTi%2Fm22774VnyQ4GHRlHvMTzHUE1T4gPfUN8HslzWN9wa6GacAVJVX2SXegwq9XNNvNxzFv08ZVM%2BI%2F%2FAQTlwBQkFt5T54KFKMiaWKn%2F2a5yPXYT2hFQoH04eSTBH%2FsIK46Dcjt%2BGE%2BumbgfuObIpXU0xqxQivOj7K7lbP7oQfDUhOf7uL0SFCJjWkSDczfmXyx%2Bz0MMAk9vo%2Fu096%2F9pSODrItBGc73cTm8XeaSsm7n8cfJumRlpcU2wkrFIEiG6QedE8qhBBlu2UctgYGn1mL6HzE1oze5nMKupRkkIVdUGo58KEmoGM6u7AsTQCI%2B6esDuTB8TYOJm9JI0hKZhyRM%2Fw5K3Dyo6Ebj9WSGhKpxgdd0%2BHLpa5qVwvdEpWSI9oYekvs6HfC7kgvwNw%2FItSY5qi2divFH8s1xzFVVWNO%2B7qc2vZVHY1DfGlFevtbzV%2FmC42l%2BCIk7BkGpZvlWP9Rbeo88KE0OebhkGUyeQO49B%2BeDMc6RAVuhmjysJsmnwKiupmXqoz1QmWDWB1w8bNFnLtQuvEDpZFTSew9Wma7tHimhym%2F6Uf1cXqnXZ0sQcy44bbyoUw9IX01QY6pgGxQbI3rsFL0wx1MONmZyYTGRvqUPhS86HLCmFkgu2bvPcg31Azbq0sd3rcXZei3hwSCGl%2Fc1M%2Bwn9q%2BNlG1dS2pPTVooXNIgi5ATNEXtU8eaCLBiwBoH%2FmGrr%2FzMuRaqzDGy5zbt7oZixI7NngqA0nRm6JjDaBchuqP1rrMEILkqhoKzJ53rvg%2FQz1iig%2BJPb1OXYJAGWqt%2B5daXrAI8%2FZheI0K8HD&X-Amz-Signature=0435fbdb052ad66146b2017bb3591bfe33039e333a07c3cbb8cb7e85f2db62fc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WGPIB6VF%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143742Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDjoG%2ByLeomTG3mF1DnlIB6erk0b5Fdn0BCPZEOSxcI4gIhAJ2Q%2BdkcslzqzdIEWWHpVgSizqY2BGTDgaKoooTtqNAOKv8DCGcQABoMNjM3NDIzMTgzODA1Igzuq15bt3iYmEFN9xsq3AN0LEun69W5R1hgJBwedPosMn8z8J%2BjH8wb6TUwy0Gs0fXU%2FHsKdmKenal0D5OTJIk2D50bpb82f18%2BeKtQXuO7n9vJIRPkfIQEQ%2FD0WLAtiw81wyyhYcquuGsjeCgWFbtcmmFI2vnX%2F32KXpiR0XC2YyoaoN%2FO7XGc1mfD2EMuZ2pqooJWGOSkl2f9zaDFq%2BtWpaC2FWckYiHRkTf2QoTergR%2BdRR4zQjamPn4P4CPMUNLiyUgwMFw3YVkEXNFrw9prsa0Ls6XTOEaPw%2FUOq%2FfipR0PggGlAV36xGaiC%2B6%2F7QUIxBqB5Hi8UEqSoEigjSIY%2Bc%2FbyXR%2Fh%2BaeNo02buefSd0WPAfKhJbz63FtAGZSk7SIoqXmV5k3vIrXE03Ixw%2BvTv2xDgaCpNBkqxRjyNjWUIgF93pnn78%2BtCnfb79gF156RvDbciAISrqJMOVcFNU4fa0%2BXIVluiPI4yrCyrwgHqlinCgyuWFhX43YJqJa%2FBn%2BahU7LxfJ0XTE1S7llNX9V7Cge6mMqf2wVJR0zignvvMg1uuI9I%2FvSYPOnOGutLPJe1ii3y1tlUGrGC6Hw88QKF1ECu5OgR34TOcLSlkXzMgqM1r52abH4GQnDXQZyIna0LC1vYP%2BoWn%2BjDNvPTVBjqkAdNVOx2zq1kKrjuSqrElVjGn%2FcPQYy0qd7MZytaMz9WFOPihqhyVKxKv1wiZ0knUHV3PHG%2BFDWfZsut8x18rUM3FHnR798%2B4V%2BApI0nql1v%2ByZQ%2F8c2bD86XEW%2BxmY6CJgecl8SmJVgJ2%2B5zEAr%2BYb%2FlnjXC0WoNlXQhykjI9oQBgBXpO328DRBvaxzX2TUkim7fhpy%2Bn4YM0qDEPZZkNxugKSRw&X-Amz-Signature=8627ba73ed4b5424a296fce4014da0ff4e320a0425f9ff051ccc4a7243cfbcda&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MBGZNQK%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143742Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDEVPejSymwviuFWhKjrlc20uYVMOLTP9DZX1DkGEa5tAiEA26VtkOeO8JMqf6BhWe%2FcItbOhI04gpgadr93Ph2Rq3wq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDBh7DTPJCJAL%2BufruircAypLR6csZgbm1D0I9YKYp3ek91bBIfKEs55AI4i48QlsOP6tCOohTo2RAQEe7%2B025L0hFZxa%2FDSHmRphYte8FSmpWoXlxkNIlqBZwn%2B4hDqZQLjjzWK5gZeHhK26AIMroPufpiPFu7XnRMsvpexfEGIA7K2wg0pugCEOr2UEf%2FLFGNnZ%2BEL%2FfVdCfSyoKZrupbh61%2F2ghDDDqrQAcTkk0Gr%2BjgpT%2FLlz%2Fot3Nfc7s1Vnti48tvCA%2Ft%2BfnjNFREAvVbNJDjORoGCAWQ%2FvXlN15FIE%2Fo9Dq1VZnnpTkXCQBsIicFXr3PjlmEnOBK3tAkpOQQ75xLrSadWawJVi0PkaZm%2Fvogpqvq%2F28SQvrBVS%2FnuZhkJ2qaRF3971VKyB5DXVclrZfYliw%2BhpHrnCWeffse9J6Og%2BV52dO6jSd2WPUeogrG96%2FyncJJey2%2BnWcfqdcxq%2FR5pFn77OnDFUJBtiBeI7VlL2OijZw5wnwGSFSHup1mISsUMi8KwhTKPhCtm4%2B5wajE1h9lVOhfvivCxGXXiNwLrSKtbf3Uy8FVJ8o29KM0lA1f3u7LubJeqvjwWLhUxDRzxycOTjUQN98XnNEedNZoJArMv8oD%2F5Z%2FGN7wkHP0DuNqUwaftetP%2FVMIOF9NUGOqUB5AC%2FzmivFbJNJgIP3k4XOjPmsgqF%2BJKuvOM4hHmQ%2BXjJ06%2FIXKnGHV3VH1IYiRlwvz29dTvpUaxxvyZqujd3AB2YDs2LFsmkHO4sJiEWWe0NWHQwHrR%2Fp80OFXxMVEPSx09dnDiqlJ9NvrKkiwwuAN9oZobeSvlDdwrYhJ7MjUYF4ofkQLr99n0Ra%2BXUnnfAtr0I5OOxEFqVDDUuKMt0Z62ZkvbT&X-Amz-Signature=f22940689f5eaa53e25fb500ecb63b0cf0b671f5adff33bf9f51a409315607f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662MBGZNQK%2F20260930%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260930T143742Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJ3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDEVPejSymwviuFWhKjrlc20uYVMOLTP9DZX1DkGEa5tAiEA26VtkOeO8JMqf6BhWe%2FcItbOhI04gpgadr93Ph2Rq3wq%2FwMIZhAAGgw2Mzc0MjMxODM4MDUiDBh7DTPJCJAL%2BufruircAypLR6csZgbm1D0I9YKYp3ek91bBIfKEs55AI4i48QlsOP6tCOohTo2RAQEe7%2B025L0hFZxa%2FDSHmRphYte8FSmpWoXlxkNIlqBZwn%2B4hDqZQLjjzWK5gZeHhK26AIMroPufpiPFu7XnRMsvpexfEGIA7K2wg0pugCEOr2UEf%2FLFGNnZ%2BEL%2FfVdCfSyoKZrupbh61%2F2ghDDDqrQAcTkk0Gr%2BjgpT%2FLlz%2Fot3Nfc7s1Vnti48tvCA%2Ft%2BfnjNFREAvVbNJDjORoGCAWQ%2FvXlN15FIE%2Fo9Dq1VZnnpTkXCQBsIicFXr3PjlmEnOBK3tAkpOQQ75xLrSadWawJVi0PkaZm%2Fvogpqvq%2F28SQvrBVS%2FnuZhkJ2qaRF3971VKyB5DXVclrZfYliw%2BhpHrnCWeffse9J6Og%2BV52dO6jSd2WPUeogrG96%2FyncJJey2%2BnWcfqdcxq%2FR5pFn77OnDFUJBtiBeI7VlL2OijZw5wnwGSFSHup1mISsUMi8KwhTKPhCtm4%2B5wajE1h9lVOhfvivCxGXXiNwLrSKtbf3Uy8FVJ8o29KM0lA1f3u7LubJeqvjwWLhUxDRzxycOTjUQN98XnNEedNZoJArMv8oD%2F5Z%2FGN7wkHP0DuNqUwaftetP%2FVMIOF9NUGOqUB5AC%2FzmivFbJNJgIP3k4XOjPmsgqF%2BJKuvOM4hHmQ%2BXjJ06%2FIXKnGHV3VH1IYiRlwvz29dTvpUaxxvyZqujd3AB2YDs2LFsmkHO4sJiEWWe0NWHQwHrR%2Fp80OFXxMVEPSx09dnDiqlJ9NvrKkiwwuAN9oZobeSvlDdwrYhJ7MjUYF4ofkQLr99n0Ra%2BXUnnfAtr0I5OOxEFqVDDUuKMt0Z62ZkvbT&X-Amz-Signature=de9c3e2120ec96506a5c7c51b718425f4827319ad140798a3e4b304b20223b5f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
