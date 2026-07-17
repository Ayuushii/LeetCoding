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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZ623R42%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBlg85JmY7ft8Q7tYiTx1qATGuKMjRpukUnJT2QD0EglAiEAvYTVa1Yk%2BAyOv%2F4aNEM5GZ%2Bclji%2BZGYRZ4uFTkOlvg4q%2FwMIWhAAGgw2Mzc0MjMxODM4MDUiDGoM7GiI3%2F9vcXt%2FLircA9XEVVTuvnw%2FXcLPUVT%2B24RtbAA7HyNf%2BIBDvjDzrDHSKI%2FTesm2ZV%2Fvf1C6Vykrj0bpgDFuy%2FASKdDQ4oyWNuhVIUltMw%2FlIQkCeGVPev0c592nEtL7qD7XglbrHtblMWeUW7xBb22%2F3iuG7ZhR4LGFHVLpIlvIEHCzk5bUJ6G9Q138dpkWL4HrTZ%2FdkpwPC1FoEtfoIAOQwvQa4la0Qvd6TviV3BWnS13me%2Fac6unT6zybcwYNZKT6q%2BA4DO4RlaIUg8Xu2y7kRjAKS6dJHOrVPHlL8I6IqBz3fCfSro6H9124EkhlLJss6T%2BZ2Fa%2BBc3QOO0EsVKZq0LOkJu8uaAiH4IR3YXXMfQx%2FItBgQwk%2Fiay6T0jteZq3l7s6mxVpaeo%2FkgRFe75uLqVFSarEIV%2BPphCGtCMIqAmOl3QVyJqGOn1CLoTD%2Bpep8SI6IVIiEshOgxruoCDaWpEDg2e0TfOwDhKC9fuJD15XatDpqMxDcA9YKuIDhBGCitxbsioNjdCST1CPIwxqEv%2BkHVtp%2BebHgTL39Pu2YzbGY6yitao20d%2F7DGkUtyVcbeacpQVC8qSu7Mdo%2BIHesllH7ohkPEnmea5k22DvWGiP9P5%2Bth8kS45BFgsAJQcf%2BQmMN3c59IGOqUBlScBelMRAHj5FlQB%2BvC3JdzNl0FS4gNSsljs7HJgpfOF6%2FvLigcZ2YmI41O%2FqTPhzk6aUht6L4GciV%2F6EJHgg4bWgZdlNLp0R7gXbqzMwMJJ8gJvUgjDtX5wpp3aI5AxqKHBcNEjk5vXrUgpnjoYPidoVotf5awsX4FfLbHLSJky21qvd3krkyzF4da%2B5HLxWo6F9jINWa5eGPJNYr6y0Iwq2bW8&X-Amz-Signature=3beef384d61f80b60e29937342b09ccad33eab4574e190d3ffdbcda62dd79b3a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZ623R42%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBlg85JmY7ft8Q7tYiTx1qATGuKMjRpukUnJT2QD0EglAiEAvYTVa1Yk%2BAyOv%2F4aNEM5GZ%2Bclji%2BZGYRZ4uFTkOlvg4q%2FwMIWhAAGgw2Mzc0MjMxODM4MDUiDGoM7GiI3%2F9vcXt%2FLircA9XEVVTuvnw%2FXcLPUVT%2B24RtbAA7HyNf%2BIBDvjDzrDHSKI%2FTesm2ZV%2Fvf1C6Vykrj0bpgDFuy%2FASKdDQ4oyWNuhVIUltMw%2FlIQkCeGVPev0c592nEtL7qD7XglbrHtblMWeUW7xBb22%2F3iuG7ZhR4LGFHVLpIlvIEHCzk5bUJ6G9Q138dpkWL4HrTZ%2FdkpwPC1FoEtfoIAOQwvQa4la0Qvd6TviV3BWnS13me%2Fac6unT6zybcwYNZKT6q%2BA4DO4RlaIUg8Xu2y7kRjAKS6dJHOrVPHlL8I6IqBz3fCfSro6H9124EkhlLJss6T%2BZ2Fa%2BBc3QOO0EsVKZq0LOkJu8uaAiH4IR3YXXMfQx%2FItBgQwk%2Fiay6T0jteZq3l7s6mxVpaeo%2FkgRFe75uLqVFSarEIV%2BPphCGtCMIqAmOl3QVyJqGOn1CLoTD%2Bpep8SI6IVIiEshOgxruoCDaWpEDg2e0TfOwDhKC9fuJD15XatDpqMxDcA9YKuIDhBGCitxbsioNjdCST1CPIwxqEv%2BkHVtp%2BebHgTL39Pu2YzbGY6yitao20d%2F7DGkUtyVcbeacpQVC8qSu7Mdo%2BIHesllH7ohkPEnmea5k22DvWGiP9P5%2Bth8kS45BFgsAJQcf%2BQmMN3c59IGOqUBlScBelMRAHj5FlQB%2BvC3JdzNl0FS4gNSsljs7HJgpfOF6%2FvLigcZ2YmI41O%2FqTPhzk6aUht6L4GciV%2F6EJHgg4bWgZdlNLp0R7gXbqzMwMJJ8gJvUgjDtX5wpp3aI5AxqKHBcNEjk5vXrUgpnjoYPidoVotf5awsX4FfLbHLSJky21qvd3krkyzF4da%2B5HLxWo6F9jINWa5eGPJNYr6y0Iwq2bW8&X-Amz-Signature=ca46821f6e05f2d322d102dcbc4af7feeefca3cf7bd6f38dd74002bc606fee1a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VZ623R42%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBlg85JmY7ft8Q7tYiTx1qATGuKMjRpukUnJT2QD0EglAiEAvYTVa1Yk%2BAyOv%2F4aNEM5GZ%2Bclji%2BZGYRZ4uFTkOlvg4q%2FwMIWhAAGgw2Mzc0MjMxODM4MDUiDGoM7GiI3%2F9vcXt%2FLircA9XEVVTuvnw%2FXcLPUVT%2B24RtbAA7HyNf%2BIBDvjDzrDHSKI%2FTesm2ZV%2Fvf1C6Vykrj0bpgDFuy%2FASKdDQ4oyWNuhVIUltMw%2FlIQkCeGVPev0c592nEtL7qD7XglbrHtblMWeUW7xBb22%2F3iuG7ZhR4LGFHVLpIlvIEHCzk5bUJ6G9Q138dpkWL4HrTZ%2FdkpwPC1FoEtfoIAOQwvQa4la0Qvd6TviV3BWnS13me%2Fac6unT6zybcwYNZKT6q%2BA4DO4RlaIUg8Xu2y7kRjAKS6dJHOrVPHlL8I6IqBz3fCfSro6H9124EkhlLJss6T%2BZ2Fa%2BBc3QOO0EsVKZq0LOkJu8uaAiH4IR3YXXMfQx%2FItBgQwk%2Fiay6T0jteZq3l7s6mxVpaeo%2FkgRFe75uLqVFSarEIV%2BPphCGtCMIqAmOl3QVyJqGOn1CLoTD%2Bpep8SI6IVIiEshOgxruoCDaWpEDg2e0TfOwDhKC9fuJD15XatDpqMxDcA9YKuIDhBGCitxbsioNjdCST1CPIwxqEv%2BkHVtp%2BebHgTL39Pu2YzbGY6yitao20d%2F7DGkUtyVcbeacpQVC8qSu7Mdo%2BIHesllH7ohkPEnmea5k22DvWGiP9P5%2Bth8kS45BFgsAJQcf%2BQmMN3c59IGOqUBlScBelMRAHj5FlQB%2BvC3JdzNl0FS4gNSsljs7HJgpfOF6%2FvLigcZ2YmI41O%2FqTPhzk6aUht6L4GciV%2F6EJHgg4bWgZdlNLp0R7gXbqzMwMJJ8gJvUgjDtX5wpp3aI5AxqKHBcNEjk5vXrUgpnjoYPidoVotf5awsX4FfLbHLSJky21qvd3krkyzF4da%2B5HLxWo6F9jINWa5eGPJNYr6y0Iwq2bW8&X-Amz-Signature=9e623cfe475551f2ac0329c774f432a7739cd448e3aad395294c1b027eeff43a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3FVMY33%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2h96KMD7cEYUCZmmtjQ5r%2B2MaEeQYFw0W101O3iKJBAIhAItqdSwmTL5l9o%2BxdA3fMnWHON%2FEywWxThIJiraDPVTXKv8DCFoQABoMNjM3NDIzMTgzODA1IgwVhj14WgeWi3ON%2BdYq3AN5EYlLjjFO2EhQVpB61f39vEqGLpItcTeYAuy8G1FHYLAJyrFzzHVt%2F6zmzxVI6Vz4Fky8Ic4Nohd1cEW7A2KG%2Fhco8qeIjXb%2FqPHBF%2BQYxPA4Ut2Dk5sgIFngrfklsbJIAVnEaHMnlsZxBAji6O3tTVStuMBAesOFnuBoVO5Qev0iv7lRuLAfqIaCmkGw9kaw8lsEdym5DNXbb%2FRV6TSGWaZ0Ea0Ys7QJVzFEd8yqKLBho22vWKYV6qz4ENPIVx84KDDnyUEnea%2F%2BKSejFMM9puXZ2xKYRApkjTpV6tNlGP92CgAzfmTKTgGSGkIgdFDxJe87Z%2FaQNFP5cdyQitiFNgd4ZkyFH0bi%2FHGMxF1MoQME4hTlm2j7u%2F1CF9D%2FTj%2BvwP6c%2F%2FhQGcGrN4%2FJvDe9xZJv5fQ%2FRyS%2F6xQJ3u7S71heIuALWhmQQ9o8G7iWYjIO42itXYv8LRmRP3n7OkecPlhRPbMpcrOhDgJKTV57%2BUK4wwsqEoRvpRD364QHjXu0Y9EI3ZOxStmrRY%2FFP8GMFBJ%2Fa6foSmbQdH52BGWZ%2B1gnLwyEl5cbXizMU%2BRFlQv4hFI9BSnuLTJj1%2BJOCITYm3kppDcKruQHLymtGWhIAe%2BLUiGjFzNvUzMt8zC43%2BfSBjqkAXSNm6%2FqPRQ5tdAxX5fLuIpqbFzae9bGn1dlh2EVLGUrKkOlyxhQVH1%2BvUlKLnPFWAvobkYgJ7s77sgragPDYXvvKjqydY9XaflYiXdbGoBSQ5HUvHzqDP58UibppJGS4nMTQ4zrvGmAMvHRM3BhRstQAgt1u8v%2BEM7CW9x0yM%2Bj6%2FmziD6xFLgxQUZyw4R47tIyI1gs3jvaNoq%2BlU6GMQ7oNJ0k&X-Amz-Signature=e2726f6c408ffc6bc462ddd112291d3cc074a745a8b8a2fe771ecdede77143e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3FVMY33%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2h96KMD7cEYUCZmmtjQ5r%2B2MaEeQYFw0W101O3iKJBAIhAItqdSwmTL5l9o%2BxdA3fMnWHON%2FEywWxThIJiraDPVTXKv8DCFoQABoMNjM3NDIzMTgzODA1IgwVhj14WgeWi3ON%2BdYq3AN5EYlLjjFO2EhQVpB61f39vEqGLpItcTeYAuy8G1FHYLAJyrFzzHVt%2F6zmzxVI6Vz4Fky8Ic4Nohd1cEW7A2KG%2Fhco8qeIjXb%2FqPHBF%2BQYxPA4Ut2Dk5sgIFngrfklsbJIAVnEaHMnlsZxBAji6O3tTVStuMBAesOFnuBoVO5Qev0iv7lRuLAfqIaCmkGw9kaw8lsEdym5DNXbb%2FRV6TSGWaZ0Ea0Ys7QJVzFEd8yqKLBho22vWKYV6qz4ENPIVx84KDDnyUEnea%2F%2BKSejFMM9puXZ2xKYRApkjTpV6tNlGP92CgAzfmTKTgGSGkIgdFDxJe87Z%2FaQNFP5cdyQitiFNgd4ZkyFH0bi%2FHGMxF1MoQME4hTlm2j7u%2F1CF9D%2FTj%2BvwP6c%2F%2FhQGcGrN4%2FJvDe9xZJv5fQ%2FRyS%2F6xQJ3u7S71heIuALWhmQQ9o8G7iWYjIO42itXYv8LRmRP3n7OkecPlhRPbMpcrOhDgJKTV57%2BUK4wwsqEoRvpRD364QHjXu0Y9EI3ZOxStmrRY%2FFP8GMFBJ%2Fa6foSmbQdH52BGWZ%2B1gnLwyEl5cbXizMU%2BRFlQv4hFI9BSnuLTJj1%2BJOCITYm3kppDcKruQHLymtGWhIAe%2BLUiGjFzNvUzMt8zC43%2BfSBjqkAXSNm6%2FqPRQ5tdAxX5fLuIpqbFzae9bGn1dlh2EVLGUrKkOlyxhQVH1%2BvUlKLnPFWAvobkYgJ7s77sgragPDYXvvKjqydY9XaflYiXdbGoBSQ5HUvHzqDP58UibppJGS4nMTQ4zrvGmAMvHRM3BhRstQAgt1u8v%2BEM7CW9x0yM%2Bj6%2FmziD6xFLgxQUZyw4R47tIyI1gs3jvaNoq%2BlU6GMQ7oNJ0k&X-Amz-Signature=af8cf00cdb49dc1672d23be4170c6dc2596198921fceb35c9a9aa9762b9fc133&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3FVMY33%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2h96KMD7cEYUCZmmtjQ5r%2B2MaEeQYFw0W101O3iKJBAIhAItqdSwmTL5l9o%2BxdA3fMnWHON%2FEywWxThIJiraDPVTXKv8DCFoQABoMNjM3NDIzMTgzODA1IgwVhj14WgeWi3ON%2BdYq3AN5EYlLjjFO2EhQVpB61f39vEqGLpItcTeYAuy8G1FHYLAJyrFzzHVt%2F6zmzxVI6Vz4Fky8Ic4Nohd1cEW7A2KG%2Fhco8qeIjXb%2FqPHBF%2BQYxPA4Ut2Dk5sgIFngrfklsbJIAVnEaHMnlsZxBAji6O3tTVStuMBAesOFnuBoVO5Qev0iv7lRuLAfqIaCmkGw9kaw8lsEdym5DNXbb%2FRV6TSGWaZ0Ea0Ys7QJVzFEd8yqKLBho22vWKYV6qz4ENPIVx84KDDnyUEnea%2F%2BKSejFMM9puXZ2xKYRApkjTpV6tNlGP92CgAzfmTKTgGSGkIgdFDxJe87Z%2FaQNFP5cdyQitiFNgd4ZkyFH0bi%2FHGMxF1MoQME4hTlm2j7u%2F1CF9D%2FTj%2BvwP6c%2F%2FhQGcGrN4%2FJvDe9xZJv5fQ%2FRyS%2F6xQJ3u7S71heIuALWhmQQ9o8G7iWYjIO42itXYv8LRmRP3n7OkecPlhRPbMpcrOhDgJKTV57%2BUK4wwsqEoRvpRD364QHjXu0Y9EI3ZOxStmrRY%2FFP8GMFBJ%2Fa6foSmbQdH52BGWZ%2B1gnLwyEl5cbXizMU%2BRFlQv4hFI9BSnuLTJj1%2BJOCITYm3kppDcKruQHLymtGWhIAe%2BLUiGjFzNvUzMt8zC43%2BfSBjqkAXSNm6%2FqPRQ5tdAxX5fLuIpqbFzae9bGn1dlh2EVLGUrKkOlyxhQVH1%2BvUlKLnPFWAvobkYgJ7s77sgragPDYXvvKjqydY9XaflYiXdbGoBSQ5HUvHzqDP58UibppJGS4nMTQ4zrvGmAMvHRM3BhRstQAgt1u8v%2BEM7CW9x0yM%2Bj6%2FmziD6xFLgxQUZyw4R47tIyI1gs3jvaNoq%2BlU6GMQ7oNJ0k&X-Amz-Signature=8f6e0f400474c584a2b00eefd1f84cc9cba9f3f5121820673987cf2a74a9c3fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T3FVMY33%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD2h96KMD7cEYUCZmmtjQ5r%2B2MaEeQYFw0W101O3iKJBAIhAItqdSwmTL5l9o%2BxdA3fMnWHON%2FEywWxThIJiraDPVTXKv8DCFoQABoMNjM3NDIzMTgzODA1IgwVhj14WgeWi3ON%2BdYq3AN5EYlLjjFO2EhQVpB61f39vEqGLpItcTeYAuy8G1FHYLAJyrFzzHVt%2F6zmzxVI6Vz4Fky8Ic4Nohd1cEW7A2KG%2Fhco8qeIjXb%2FqPHBF%2BQYxPA4Ut2Dk5sgIFngrfklsbJIAVnEaHMnlsZxBAji6O3tTVStuMBAesOFnuBoVO5Qev0iv7lRuLAfqIaCmkGw9kaw8lsEdym5DNXbb%2FRV6TSGWaZ0Ea0Ys7QJVzFEd8yqKLBho22vWKYV6qz4ENPIVx84KDDnyUEnea%2F%2BKSejFMM9puXZ2xKYRApkjTpV6tNlGP92CgAzfmTKTgGSGkIgdFDxJe87Z%2FaQNFP5cdyQitiFNgd4ZkyFH0bi%2FHGMxF1MoQME4hTlm2j7u%2F1CF9D%2FTj%2BvwP6c%2F%2FhQGcGrN4%2FJvDe9xZJv5fQ%2FRyS%2F6xQJ3u7S71heIuALWhmQQ9o8G7iWYjIO42itXYv8LRmRP3n7OkecPlhRPbMpcrOhDgJKTV57%2BUK4wwsqEoRvpRD364QHjXu0Y9EI3ZOxStmrRY%2FFP8GMFBJ%2Fa6foSmbQdH52BGWZ%2B1gnLwyEl5cbXizMU%2BRFlQv4hFI9BSnuLTJj1%2BJOCITYm3kppDcKruQHLymtGWhIAe%2BLUiGjFzNvUzMt8zC43%2BfSBjqkAXSNm6%2FqPRQ5tdAxX5fLuIpqbFzae9bGn1dlh2EVLGUrKkOlyxhQVH1%2BvUlKLnPFWAvobkYgJ7s77sgragPDYXvvKjqydY9XaflYiXdbGoBSQ5HUvHzqDP58UibppJGS4nMTQ4zrvGmAMvHRM3BhRstQAgt1u8v%2BEM7CW9x0yM%2Bj6%2FmziD6xFLgxQUZyw4R47tIyI1gs3jvaNoq%2BlU6GMQ7oNJ0k&X-Amz-Signature=060ab58f192998929426c3661109dc2294d59e9428a4180500575cb2142bbceb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZXA542AX%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095544Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCYnGQ%2FbUFwti%2B0GwgY6M6YMM1rLMF9w6VXrauE5quCJAIhAL6t1M3%2FXGkUd3GpNZTPmuko%2FTKtkqCNee%2BIg0cPTMxNKv8DCFoQABoMNjM3NDIzMTgzODA1IgynXppygivAutKduSMq3AO1JsLC8jclUPUpTRCbUnHNOf1heD3MHcqZzcSd7Vv870SCm3QAupd3EdKXkAhiQstryvFHsiy0GaciC%2B2zxxh8JbunLOOOUGNESW7tTodBq1hz7Jk5zwveOlw5fJiXILvSsmGgj11aNkE%2Fo0XsIosulgY3pdmRIajNV4Lm3sUgkjeDTMMLFA9l0wQuwtvNVBxMMbCHxTYKFJbcr9jooYKxFZM1EBFbkbrETRZofk6fKJRYL4iGI2Y8AlQ67XKL0t7JXM9Hzji1q2Ib5TtFM1LSNnZGOGbVLF6IGFi08Y3mCHlomwLM%2BwaVYTg%2BatqlNvMpEc%2B%2FYgry6n8RZKesGjNiXFGG9N4XJ43H%2B67OHzvQbFruQg3l51G8BIqMdgunqJnFJBgqEfLlgcWyfQ7qDAvk4Rgbq%2F4x2tteNwJXIVYWNXRXt9RgcdmshOpKw%2BGLvD9epIvo6PcjCTnguwipJ97IkXgM68zM3zpVoDw853II8O8A409cYecMOw5aQDY6si9Ihz2DxWofSOEyyTtsr772CZ4vN2%2FrKRPKGxt5fHrF2p1RAuy6jw1SMd9MNQPGiawLzwizZW%2Ft0jk7DZAhyEftX68hVr%2B%2BzYwXdn5Wt%2BDAP3eS%2BjeX%2FyZic1vLXDCM4efSBjqkARuooVKzUAebiHeho1ZZ7U3gey0fDxcBASUGYwNiaawVrQWvaSdaAhgB8QI2ccMLN9%2BCcabKRtAHnlrhsDNIYWvogbeijZ42Zg9RUlCWIBkPIdO5rDyQtKE5iJeHncsKMRlsoORR%2FGSAOrGxtXY3Cp6v%2BwgBEOJc6kXBfatNrUaVzgo34OwSZVQZTlf85jzoNESlgtfo7g8HArmAkcuYDIa%2FK629&X-Amz-Signature=29c01c036ce6b1f41db5d3bc40162b4f5aaec39e4ffe65b13c068dbb8086543c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FPY5LIT%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095545Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBnQzetx900VDWeAXza6Zq%2BTAgcDFT%2FNWeLC5ttTDMcwAiEAtlkaqvmuYtSNJTUgI2wHR9mO7niqMm%2BjpVGfWMP3aIEq%2FwMIWhAAGgw2Mzc0MjMxODM4MDUiDOj6fvJBsqHcGSxHwCrcAx2OZLy6Wd0FuvTuqx40EMlJw2SYbL%2FRaKi6uZCbKtOBfAzpqZqqQudnBkhTaES%2FNLfbsiS858g4qCiPeBXRO9p6D0%2FVFBnOmjyW%2BTIwSVus4eXu9%2BpsVVJTMrAJuGziQ2msoDTSL2dmi7%2B9dX3cn9sKJe4yHN2W%2Be0Fa48OG3JgxDCab717kbZhDEMciscdumomamSnYMOyDLHQwu8LcnFCVCaTgxCoST2S83eF%2FTHjpEKsmsLUWaass8ZiN6naZFbGvb8Xp1HAVuE3S8bOhc24iXn7rOE2a36IC3JWTW%2BHUAlCbaqAlfhjtuYzufK1zqbFM7bpD9Fvh%2Fra9u7%2BlP3nlw9u%2BAF7681JpIbYIIB2R7mHy1eAJiWjOXhv0i%2B0Xdyzd50Q%2FEeIVTBvfCAytZdCkTIZVdpGD%2FsnBP0r9PAh890rzVEn4qnJdBLQM039DZmPA3wkCYFlPtoUhuog5zQkOQZzayzdFAhKFSzUWzkwMUnQ5YMpXjX%2BLF98VcIHwF8W9C%2BeXjLzuRtmFpN6EEvZndEXz9KgmalCNfSFjyKfwBFsasV2tqm4lLHVf0M1BbOOK8NkQ6EFWoPfhd8tNOgtU%2B4Y8CdtzBdDg%2BavYrYmeLv%2FYvrlCKvXuHzqMJjf59IGOqUBsTw%2FAQKLi7AU9RvCxK9EUV4WNXFpmm5QzIPO6qaEAFS9Zhs2UcZb73wKoZWl%2FdoGlYqS5Fffx9%2FnM9BMHvhdfEZdW%2BKYmNIizaw0RQIQmUw%2FFC71TGxiSw0YECtXExxeNv5tvZ67a0Wp9KG0tnjezt4ETsoqvruVahDMH3Zg6lSnYJW8pf%2BFoL1uA0hkHeAkoj%2FJW4L4k5n6bT7MIFYnwPbq%2FatH&X-Amz-Signature=398c2a256c4d6f08f067e657d62fcaedc605a43b18e5513fe7e77236e0882784&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FPY5LIT%2F20260717%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260717T095545Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIBnQzetx900VDWeAXza6Zq%2BTAgcDFT%2FNWeLC5ttTDMcwAiEAtlkaqvmuYtSNJTUgI2wHR9mO7niqMm%2BjpVGfWMP3aIEq%2FwMIWhAAGgw2Mzc0MjMxODM4MDUiDOj6fvJBsqHcGSxHwCrcAx2OZLy6Wd0FuvTuqx40EMlJw2SYbL%2FRaKi6uZCbKtOBfAzpqZqqQudnBkhTaES%2FNLfbsiS858g4qCiPeBXRO9p6D0%2FVFBnOmjyW%2BTIwSVus4eXu9%2BpsVVJTMrAJuGziQ2msoDTSL2dmi7%2B9dX3cn9sKJe4yHN2W%2Be0Fa48OG3JgxDCab717kbZhDEMciscdumomamSnYMOyDLHQwu8LcnFCVCaTgxCoST2S83eF%2FTHjpEKsmsLUWaass8ZiN6naZFbGvb8Xp1HAVuE3S8bOhc24iXn7rOE2a36IC3JWTW%2BHUAlCbaqAlfhjtuYzufK1zqbFM7bpD9Fvh%2Fra9u7%2BlP3nlw9u%2BAF7681JpIbYIIB2R7mHy1eAJiWjOXhv0i%2B0Xdyzd50Q%2FEeIVTBvfCAytZdCkTIZVdpGD%2FsnBP0r9PAh890rzVEn4qnJdBLQM039DZmPA3wkCYFlPtoUhuog5zQkOQZzayzdFAhKFSzUWzkwMUnQ5YMpXjX%2BLF98VcIHwF8W9C%2BeXjLzuRtmFpN6EEvZndEXz9KgmalCNfSFjyKfwBFsasV2tqm4lLHVf0M1BbOOK8NkQ6EFWoPfhd8tNOgtU%2B4Y8CdtzBdDg%2BavYrYmeLv%2FYvrlCKvXuHzqMJjf59IGOqUBsTw%2FAQKLi7AU9RvCxK9EUV4WNXFpmm5QzIPO6qaEAFS9Zhs2UcZb73wKoZWl%2FdoGlYqS5Fffx9%2FnM9BMHvhdfEZdW%2BKYmNIizaw0RQIQmUw%2FFC71TGxiSw0YECtXExxeNv5tvZ67a0Wp9KG0tnjezt4ETsoqvruVahDMH3Zg6lSnYJW8pf%2BFoL1uA0hkHeAkoj%2FJW4L4k5n6bT7MIFYnwPbq%2FatH&X-Amz-Signature=e487c1c6f4c536d1d70103d662e8a2bbe652d80a0ee924123758c97f4a1854d0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
