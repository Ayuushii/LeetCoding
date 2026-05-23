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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WN3EYPF7%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQCU0V%2BzIDS2NHfktjSg2mFqQIOsWZxYMJvvtzRw3nHCLQIhAIhyYidWk%2BxmDaNIi4%2BwQXTWnqqdVPaQCIKfM1CwyQytKv8DCDIQABoMNjM3NDIzMTgzODA1IgyLjVsGPnNpVPzPfLoq3APr3IwDRT6TZYCJWe5QFybuoOtGdyOJwFgDVwtkp7a8Udlfs%2F%2FY4%2FU8xp%2BBfpPV2aH4AEIaCiOgcBSm79oQJvRG%2BGAFkRjBGpObDiFpWTfmVHe4vCNeRmWz7rCZCDNZ4xVbemIPm2o3j6DK%2F155NgP%2FRYYwrJ1ZrwUr4bFyh9EPcQdFWmjYm%2F0AqUcV0dFs8kTHWA%2FQH9pg%2BNSp8p9IkCAeaCFE39vgpCFC5mr2hx0pPrle69%2BfbksxVJpJOWCtkcs%2FCAp7NNHx9QFEHqn7AXXEjNNiCb3r5W3uuF6osVOKM22Z%2F054ipLft2BNSjsg11KshuUhaVnPoq0EGYCG3tBSHITCLObrKbW2lj0IXdFhzaIatMUfd5E%2F52dZqtS5gclINYfyJH5X8K3zLQLDGI9nxQ1QRc7Qajr3Jrdc1PQnhbem5NpdoR7%2BE2y2Bgx9ftT0NJ1ttLN7BOUP6LE6xyYwZ9Gvj4YpVvq3dMh33qn1%2BVe0u4Czef2UPxvmaHp0lktpahGk%2B5s0sKCn9ziTJWvbk36I3IH5YVWdwJjBbJNBAIqVFS2nKy0gMwZ4%2BGlTM1yO9s6E5Pmu1PYpOFSjlkMNOTCJlJeAi0vimkthd8IdbTmnQ9sKFVUAq0ypGzCS2sXQBjqkAa17tQXqQz2Znxd8nj2yp%2FcI31npRHT0cuQjI41lYLjy%2BR6U2OI1mvqhnCbqw0CIPpG2nmTjDX%2FjUxNV2r3dU3xkBzN5HDnxseFvtsSKi6SYVrFSiLzoL6ZdegbTfoANwRvAIp1HqUA5PH2IcMKNMc9GZlMeMyNyX36G1%2FgNklDgjCrDgkFMsi9S0td8MI%2BM7s4RYHBSWxoMVaw0YEi%2FIGjfH1zF&X-Amz-Signature=7aedfcc85f37d9e9a32aa55c2b2de6e22c8cc5c65de75950344fe94c39666d19&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WN3EYPF7%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQCU0V%2BzIDS2NHfktjSg2mFqQIOsWZxYMJvvtzRw3nHCLQIhAIhyYidWk%2BxmDaNIi4%2BwQXTWnqqdVPaQCIKfM1CwyQytKv8DCDIQABoMNjM3NDIzMTgzODA1IgyLjVsGPnNpVPzPfLoq3APr3IwDRT6TZYCJWe5QFybuoOtGdyOJwFgDVwtkp7a8Udlfs%2F%2FY4%2FU8xp%2BBfpPV2aH4AEIaCiOgcBSm79oQJvRG%2BGAFkRjBGpObDiFpWTfmVHe4vCNeRmWz7rCZCDNZ4xVbemIPm2o3j6DK%2F155NgP%2FRYYwrJ1ZrwUr4bFyh9EPcQdFWmjYm%2F0AqUcV0dFs8kTHWA%2FQH9pg%2BNSp8p9IkCAeaCFE39vgpCFC5mr2hx0pPrle69%2BfbksxVJpJOWCtkcs%2FCAp7NNHx9QFEHqn7AXXEjNNiCb3r5W3uuF6osVOKM22Z%2F054ipLft2BNSjsg11KshuUhaVnPoq0EGYCG3tBSHITCLObrKbW2lj0IXdFhzaIatMUfd5E%2F52dZqtS5gclINYfyJH5X8K3zLQLDGI9nxQ1QRc7Qajr3Jrdc1PQnhbem5NpdoR7%2BE2y2Bgx9ftT0NJ1ttLN7BOUP6LE6xyYwZ9Gvj4YpVvq3dMh33qn1%2BVe0u4Czef2UPxvmaHp0lktpahGk%2B5s0sKCn9ziTJWvbk36I3IH5YVWdwJjBbJNBAIqVFS2nKy0gMwZ4%2BGlTM1yO9s6E5Pmu1PYpOFSjlkMNOTCJlJeAi0vimkthd8IdbTmnQ9sKFVUAq0ypGzCS2sXQBjqkAa17tQXqQz2Znxd8nj2yp%2FcI31npRHT0cuQjI41lYLjy%2BR6U2OI1mvqhnCbqw0CIPpG2nmTjDX%2FjUxNV2r3dU3xkBzN5HDnxseFvtsSKi6SYVrFSiLzoL6ZdegbTfoANwRvAIp1HqUA5PH2IcMKNMc9GZlMeMyNyX36G1%2FgNklDgjCrDgkFMsi9S0td8MI%2BM7s4RYHBSWxoMVaw0YEi%2FIGjfH1zF&X-Amz-Signature=52af1b13da37adc9d412bc99ea610adb302e248d6cf037276fce88d90e64f3bb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WN3EYPF7%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQCU0V%2BzIDS2NHfktjSg2mFqQIOsWZxYMJvvtzRw3nHCLQIhAIhyYidWk%2BxmDaNIi4%2BwQXTWnqqdVPaQCIKfM1CwyQytKv8DCDIQABoMNjM3NDIzMTgzODA1IgyLjVsGPnNpVPzPfLoq3APr3IwDRT6TZYCJWe5QFybuoOtGdyOJwFgDVwtkp7a8Udlfs%2F%2FY4%2FU8xp%2BBfpPV2aH4AEIaCiOgcBSm79oQJvRG%2BGAFkRjBGpObDiFpWTfmVHe4vCNeRmWz7rCZCDNZ4xVbemIPm2o3j6DK%2F155NgP%2FRYYwrJ1ZrwUr4bFyh9EPcQdFWmjYm%2F0AqUcV0dFs8kTHWA%2FQH9pg%2BNSp8p9IkCAeaCFE39vgpCFC5mr2hx0pPrle69%2BfbksxVJpJOWCtkcs%2FCAp7NNHx9QFEHqn7AXXEjNNiCb3r5W3uuF6osVOKM22Z%2F054ipLft2BNSjsg11KshuUhaVnPoq0EGYCG3tBSHITCLObrKbW2lj0IXdFhzaIatMUfd5E%2F52dZqtS5gclINYfyJH5X8K3zLQLDGI9nxQ1QRc7Qajr3Jrdc1PQnhbem5NpdoR7%2BE2y2Bgx9ftT0NJ1ttLN7BOUP6LE6xyYwZ9Gvj4YpVvq3dMh33qn1%2BVe0u4Czef2UPxvmaHp0lktpahGk%2B5s0sKCn9ziTJWvbk36I3IH5YVWdwJjBbJNBAIqVFS2nKy0gMwZ4%2BGlTM1yO9s6E5Pmu1PYpOFSjlkMNOTCJlJeAi0vimkthd8IdbTmnQ9sKFVUAq0ypGzCS2sXQBjqkAa17tQXqQz2Znxd8nj2yp%2FcI31npRHT0cuQjI41lYLjy%2BR6U2OI1mvqhnCbqw0CIPpG2nmTjDX%2FjUxNV2r3dU3xkBzN5HDnxseFvtsSKi6SYVrFSiLzoL6ZdegbTfoANwRvAIp1HqUA5PH2IcMKNMc9GZlMeMyNyX36G1%2FgNklDgjCrDgkFMsi9S0td8MI%2BM7s4RYHBSWxoMVaw0YEi%2FIGjfH1zF&X-Amz-Signature=ace29b315b51971009e4a9feff184c85021ec6f52d746f6d4b9700a3e3d5ae87&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEUPUXSC%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIA%2FNGQ6eCiDRmSLHTQdhxGY30BJSmSUJsVGSn9OVCEUuAiBQ8aLdjf1l4rBxW3mW8AV9gvJTmBIl%2F9CjmnRTYzS09yr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMZVkW98%2FMQ59HhuwfKtwDnRyb5dpJv5VeZVqmb%2BdPDLkMMaorzdIciz4FVyGfMTQrsoe28MJk8fgwp2%2BFsTTQ5q%2BsWSvI6%2BB8TAviR89ZpWJmb03KuqFlkvs3qP5mbZJWHmnQGn1Jtw8eE69tigvdBP4OIJHbufR4Zilm7QkpctBc86Rq5Uet1j0bd5vd%2FV%2FpNIyvrxVPaNGSt7X%2FcYwyeGdKE6qoL5RLm6cwFy0iTUQPGPqHYW6iRqYXoKR0tm7UaNfc%2FqnO3aC10%2F3t%2BM2fLVmwzwZ5FrUSNqsjwAuQWA5f9d0rAKNFtlWk4S1zU%2BlYy0PtrXtPjYjb%2B2LHx7%2Ff%2F9t6gsSA7zefFVZW6y%2BGtQaqLJpEBUptrQros1N7hrQ9kHeAeNblgXaBuQ6JldSpeJ3xEIWAEgLnE4OEFSsqPPvDTYeEcRUgvieXIUYHBGWZdK1ez0GzvTaU6c6fQMpFVWXDC6dLjxKpgoh7fEM0IbRmfjLBFKbzI2ewngeVOb7or71dnsg6sr6SvAbN02RZ4vLG8qXO3IxfyjGi4QETOi%2FYMDgXKwRwKtIBXm1odyRGjSosnf61MXPvI1Pog8qiVX3ECnUkjf%2FA4TVmD6KE0rm90vOzYiAg%2FwXbRF9S6wSiw%2BXpMVwI7xnQP5AwtdrF0AY6pgG2k9CJSn%2BGqfFUATcUhhl8s13ubZniLKZ0vvHL1Tgaz%2BkwqYm41869ODMTyYX4Xkf1HObN0kSCQfh6Md6eusGn2tJCUAivY%2BuBhQlPBvDv8P%2BJ7HxbWTg2%2Fzxh%2FGogU85erPpTs91GeZQC7MMSnR%2Fa78hHvndOYG1V6K%2BcH4o0UUZXbRWtSnTDMHuTQCcof%2BJ%2BZPiMZopMi3mWFTESk1AeogDDcFqb&X-Amz-Signature=498222c92b4051a3d6afe4b26daa06d765a6c76a51b8945147453257fd241af2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEUPUXSC%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIA%2FNGQ6eCiDRmSLHTQdhxGY30BJSmSUJsVGSn9OVCEUuAiBQ8aLdjf1l4rBxW3mW8AV9gvJTmBIl%2F9CjmnRTYzS09yr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMZVkW98%2FMQ59HhuwfKtwDnRyb5dpJv5VeZVqmb%2BdPDLkMMaorzdIciz4FVyGfMTQrsoe28MJk8fgwp2%2BFsTTQ5q%2BsWSvI6%2BB8TAviR89ZpWJmb03KuqFlkvs3qP5mbZJWHmnQGn1Jtw8eE69tigvdBP4OIJHbufR4Zilm7QkpctBc86Rq5Uet1j0bd5vd%2FV%2FpNIyvrxVPaNGSt7X%2FcYwyeGdKE6qoL5RLm6cwFy0iTUQPGPqHYW6iRqYXoKR0tm7UaNfc%2FqnO3aC10%2F3t%2BM2fLVmwzwZ5FrUSNqsjwAuQWA5f9d0rAKNFtlWk4S1zU%2BlYy0PtrXtPjYjb%2B2LHx7%2Ff%2F9t6gsSA7zefFVZW6y%2BGtQaqLJpEBUptrQros1N7hrQ9kHeAeNblgXaBuQ6JldSpeJ3xEIWAEgLnE4OEFSsqPPvDTYeEcRUgvieXIUYHBGWZdK1ez0GzvTaU6c6fQMpFVWXDC6dLjxKpgoh7fEM0IbRmfjLBFKbzI2ewngeVOb7or71dnsg6sr6SvAbN02RZ4vLG8qXO3IxfyjGi4QETOi%2FYMDgXKwRwKtIBXm1odyRGjSosnf61MXPvI1Pog8qiVX3ECnUkjf%2FA4TVmD6KE0rm90vOzYiAg%2FwXbRF9S6wSiw%2BXpMVwI7xnQP5AwtdrF0AY6pgG2k9CJSn%2BGqfFUATcUhhl8s13ubZniLKZ0vvHL1Tgaz%2BkwqYm41869ODMTyYX4Xkf1HObN0kSCQfh6Md6eusGn2tJCUAivY%2BuBhQlPBvDv8P%2BJ7HxbWTg2%2Fzxh%2FGogU85erPpTs91GeZQC7MMSnR%2Fa78hHvndOYG1V6K%2BcH4o0UUZXbRWtSnTDMHuTQCcof%2BJ%2BZPiMZopMi3mWFTESk1AeogDDcFqb&X-Amz-Signature=c96ce2e831259b1d87359fb0b34011333158bbbc2ee93afa08dbdd460bdae1e9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEUPUXSC%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIA%2FNGQ6eCiDRmSLHTQdhxGY30BJSmSUJsVGSn9OVCEUuAiBQ8aLdjf1l4rBxW3mW8AV9gvJTmBIl%2F9CjmnRTYzS09yr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMZVkW98%2FMQ59HhuwfKtwDnRyb5dpJv5VeZVqmb%2BdPDLkMMaorzdIciz4FVyGfMTQrsoe28MJk8fgwp2%2BFsTTQ5q%2BsWSvI6%2BB8TAviR89ZpWJmb03KuqFlkvs3qP5mbZJWHmnQGn1Jtw8eE69tigvdBP4OIJHbufR4Zilm7QkpctBc86Rq5Uet1j0bd5vd%2FV%2FpNIyvrxVPaNGSt7X%2FcYwyeGdKE6qoL5RLm6cwFy0iTUQPGPqHYW6iRqYXoKR0tm7UaNfc%2FqnO3aC10%2F3t%2BM2fLVmwzwZ5FrUSNqsjwAuQWA5f9d0rAKNFtlWk4S1zU%2BlYy0PtrXtPjYjb%2B2LHx7%2Ff%2F9t6gsSA7zefFVZW6y%2BGtQaqLJpEBUptrQros1N7hrQ9kHeAeNblgXaBuQ6JldSpeJ3xEIWAEgLnE4OEFSsqPPvDTYeEcRUgvieXIUYHBGWZdK1ez0GzvTaU6c6fQMpFVWXDC6dLjxKpgoh7fEM0IbRmfjLBFKbzI2ewngeVOb7or71dnsg6sr6SvAbN02RZ4vLG8qXO3IxfyjGi4QETOi%2FYMDgXKwRwKtIBXm1odyRGjSosnf61MXPvI1Pog8qiVX3ECnUkjf%2FA4TVmD6KE0rm90vOzYiAg%2FwXbRF9S6wSiw%2BXpMVwI7xnQP5AwtdrF0AY6pgG2k9CJSn%2BGqfFUATcUhhl8s13ubZniLKZ0vvHL1Tgaz%2BkwqYm41869ODMTyYX4Xkf1HObN0kSCQfh6Md6eusGn2tJCUAivY%2BuBhQlPBvDv8P%2BJ7HxbWTg2%2Fzxh%2FGogU85erPpTs91GeZQC7MMSnR%2Fa78hHvndOYG1V6K%2BcH4o0UUZXbRWtSnTDMHuTQCcof%2BJ%2BZPiMZopMi3mWFTESk1AeogDDcFqb&X-Amz-Signature=43509ef2cbb49114abc86dbcaef43766d52de7f5fbb336ee3042c020dffce7b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZEUPUXSC%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIA%2FNGQ6eCiDRmSLHTQdhxGY30BJSmSUJsVGSn9OVCEUuAiBQ8aLdjf1l4rBxW3mW8AV9gvJTmBIl%2F9CjmnRTYzS09yr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMZVkW98%2FMQ59HhuwfKtwDnRyb5dpJv5VeZVqmb%2BdPDLkMMaorzdIciz4FVyGfMTQrsoe28MJk8fgwp2%2BFsTTQ5q%2BsWSvI6%2BB8TAviR89ZpWJmb03KuqFlkvs3qP5mbZJWHmnQGn1Jtw8eE69tigvdBP4OIJHbufR4Zilm7QkpctBc86Rq5Uet1j0bd5vd%2FV%2FpNIyvrxVPaNGSt7X%2FcYwyeGdKE6qoL5RLm6cwFy0iTUQPGPqHYW6iRqYXoKR0tm7UaNfc%2FqnO3aC10%2F3t%2BM2fLVmwzwZ5FrUSNqsjwAuQWA5f9d0rAKNFtlWk4S1zU%2BlYy0PtrXtPjYjb%2B2LHx7%2Ff%2F9t6gsSA7zefFVZW6y%2BGtQaqLJpEBUptrQros1N7hrQ9kHeAeNblgXaBuQ6JldSpeJ3xEIWAEgLnE4OEFSsqPPvDTYeEcRUgvieXIUYHBGWZdK1ez0GzvTaU6c6fQMpFVWXDC6dLjxKpgoh7fEM0IbRmfjLBFKbzI2ewngeVOb7or71dnsg6sr6SvAbN02RZ4vLG8qXO3IxfyjGi4QETOi%2FYMDgXKwRwKtIBXm1odyRGjSosnf61MXPvI1Pog8qiVX3ECnUkjf%2FA4TVmD6KE0rm90vOzYiAg%2FwXbRF9S6wSiw%2BXpMVwI7xnQP5AwtdrF0AY6pgG2k9CJSn%2BGqfFUATcUhhl8s13ubZniLKZ0vvHL1Tgaz%2BkwqYm41869ODMTyYX4Xkf1HObN0kSCQfh6Md6eusGn2tJCUAivY%2BuBhQlPBvDv8P%2BJ7HxbWTg2%2Fzxh%2FGogU85erPpTs91GeZQC7MMSnR%2Fa78hHvndOYG1V6K%2BcH4o0UUZXbRWtSnTDMHuTQCcof%2BJ%2BZPiMZopMi3mWFTESk1AeogDDcFqb&X-Amz-Signature=714d557dbbb98f3b94c28b2e140090e76d22fa39ab88f088a5b332ee90c075c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YUPJXOBC%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIFNFK4PLr8kde23mj02vFmb5ElT1MLgw72oiJkADP8sMAiB8aIyNWp%2FD4HGtxRpI7dpcxzVralzbHQxRONKwUYdWxyr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIM4UrOP0b5%2FS6s%2FqkYKtwD1pxZDyGXnlbyVGaoDc1C8MhQWV9twBXEivxjxrNjZG9eRJ4YRLRiI05%2BVz4mJZbAKysXW4x1lczJ5WXaQ7%2Fo28qKwJAXxeJvd5hlEP3LUQaB0KHTGUqJZgNwSFBp5qPRO0iK37pYZqvSrVc3aXDuX%2FP0%2BeX6kqAWSikF%2FeGuoMHOOTLJDmKeGqFVhHcP5AuMQL09zdfodzJo9N3fc9itGHPm9%2B%2FAxLfrTDXwbHxXz1XLlcVMWgPt6XRzlU%2FdBrOQc4%2Fw%2Fmr8LLC3qbyfJCRYrPCV174PROqKf20RE4lrsVQoZvdkqfzPHLyV38fb6x754iJWEnFfqR0bSCJYmCLjtIxDKw6L7ULZuQL1iJgWEEVPQ0KmZHn6VZDN3h%2FykuTgzfsMrydHRAT1348Luq1%2Bpo%2BAmsS176cxNuyeUl9%2Fg%2FmboaF5%2BGnSRjVzvrTaUt6X546lbObM48mBMDImVKGzGbRqmm72ZDDSYhG0nhBeuPJ7PSsZCi04k1ZkD9YZLILLsrKKT4EAxWthEd%2BiFRJp0j3eQFG%2FFU2XjTLYE9wARWPaLgeq%2F72PP%2BatpiWJj3fgfYVRnhRPZ0H5TOPDgPJ5JjQ85YwYTAm5AiC4%2Fscl9G0FMSRIuVgletKapa8w9tnF0AY6pgEuxJquWdprgzHqY1ETWJ2eTiVaF37otNiTKAW6pWKaR%2F%2BQP7g9esqETrDJYdZUhvifoZRTIXOpG9HyZQd7b0xXahlftebxfHtVD7JgRkq%2Fv%2F%2BEeEJ%2FdsjJGtRNyc64o9VA7Ig5M4bCcYohNcrnV4pr2XRt3r7Da3YlAIbrng4dReOt9%2FMHb3vEZJg8gv3aW1HE9mshYBup7AVuDBjmf2jr3RTw%2BEH%2F&X-Amz-Signature=f39f223b4cec28e3fb281041f77966cc539f4dccb3aa1b8e7252f56e9ab4118d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676NZABTB%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIAt6CHGV9GAoP0Sl6Mb7zC8iU5WiHE84o3AWXdn4j3WQAiBzZXdzDWcbDLkzgeXr7EkF5jDdul4AIi7fnBn0M9UVdCr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMgX69D47Z6Co4k8auKtwDEl6KFvoDFwSTy1WjglXhoyzzQpqBgWlPr8fUclv7xcugbZ2pviPmVFZnUw8ReLM20j2MIjWsTEeFMRVkAwALeSVlwKtsId7jGEFiIFVoKKjCDo9uPInWeoaAjaZkOdAvhd5%2FnzCFYZOfzxqkVBf7VKepMbQmn6z1WGBx7zQnUOSbM%2BzQgAJYnejY4ApGg%2Fdd%2BGts8vmykNBJgyYO2QDBtS%2B3r89xjTgSzMmcSqydUVtg07zMCcQMImtRMeyroFq07QKWWSPJvY1tjc4FxpRf73sFCiLZBzel7RB2tHjauNIUz3A50mj%2FJukzqHoniOKYH95JB7MGvMOD02XwaHV8BNdKP7j10DySOIPFVkLBlNxYz3VpnGj0vjDT09EIhUmWL3a1MccAcsA4qsTekKelJWZj1YjcIZ5ACm7h50uG8KZdp29wo9ndYSfibn3P5wnrbekZpjZo5Lsye1OX3x%2FWnLUSJ%2Fut0xSDvAQnrcHiFumqd4sOEsNREI2s1B4MC6Z1358qJOj%2FRy%2BnXTUe2QrviGd7YoSsXK%2FmqyjV9D0GVgjtjYir0Yqk%2FDv4%2FLXTgyM9H4iL%2BIlNTiKwH%2BN5COwsuDNzhpNCA8Z5BDimqQXj90eI6XNap1X71sYU2VUw%2F9jF0AY6pgGWRlxnDuRVZfeVrX7M5YF0cxB%2BTwEDq8Kv0zpXNKxA1N%2FK2RhL11Oavt8Qs2%2Fy5iHUvmLVgXX3ndkpFzS%2BVI7ltS6Zmde4TIS%2FRZF8IsZ3bV8LKVPd46SIQGLItj0BqZizzHSf7fxYXwqTCoxy%2BomzoGR10Lw6V5V2Lx4R5A9A1KAkHakSvM21b4b6SsgglyWolx4oPQp5xpzvbVmoK%2BngxeQ70odj&X-Amz-Signature=044b71de1430b672ccd8769bfc425f58f0fcdf572faac43c954b211b11443d2e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46676NZABTB%2F20260523%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260523T095152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIAt6CHGV9GAoP0Sl6Mb7zC8iU5WiHE84o3AWXdn4j3WQAiBzZXdzDWcbDLkzgeXr7EkF5jDdul4AIi7fnBn0M9UVdCr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMgX69D47Z6Co4k8auKtwDEl6KFvoDFwSTy1WjglXhoyzzQpqBgWlPr8fUclv7xcugbZ2pviPmVFZnUw8ReLM20j2MIjWsTEeFMRVkAwALeSVlwKtsId7jGEFiIFVoKKjCDo9uPInWeoaAjaZkOdAvhd5%2FnzCFYZOfzxqkVBf7VKepMbQmn6z1WGBx7zQnUOSbM%2BzQgAJYnejY4ApGg%2Fdd%2BGts8vmykNBJgyYO2QDBtS%2B3r89xjTgSzMmcSqydUVtg07zMCcQMImtRMeyroFq07QKWWSPJvY1tjc4FxpRf73sFCiLZBzel7RB2tHjauNIUz3A50mj%2FJukzqHoniOKYH95JB7MGvMOD02XwaHV8BNdKP7j10DySOIPFVkLBlNxYz3VpnGj0vjDT09EIhUmWL3a1MccAcsA4qsTekKelJWZj1YjcIZ5ACm7h50uG8KZdp29wo9ndYSfibn3P5wnrbekZpjZo5Lsye1OX3x%2FWnLUSJ%2Fut0xSDvAQnrcHiFumqd4sOEsNREI2s1B4MC6Z1358qJOj%2FRy%2BnXTUe2QrviGd7YoSsXK%2FmqyjV9D0GVgjtjYir0Yqk%2FDv4%2FLXTgyM9H4iL%2BIlNTiKwH%2BN5COwsuDNzhpNCA8Z5BDimqQXj90eI6XNap1X71sYU2VUw%2F9jF0AY6pgGWRlxnDuRVZfeVrX7M5YF0cxB%2BTwEDq8Kv0zpXNKxA1N%2FK2RhL11Oavt8Qs2%2Fy5iHUvmLVgXX3ndkpFzS%2BVI7ltS6Zmde4TIS%2FRZF8IsZ3bV8LKVPd46SIQGLItj0BqZizzHSf7fxYXwqTCoxy%2BomzoGR10Lw6V5V2Lx4R5A9A1KAkHakSvM21b4b6SsgglyWolx4oPQp5xpzvbVmoK%2BngxeQ70odj&X-Amz-Signature=58042f3071e0f8b609faf2882105a67e8a496e9063f5d2117b4289571add3edd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
