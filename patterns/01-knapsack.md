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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667L3W4VG5%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQDPQG54pZ7ss8kl7G3YiGmihHeHXOivhXgZoN%2BsN63RXAIgFgYW7YR3xuF32S%2FCbvpIe0QEfxGyS1ESoQieZSizh6IqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAJIx%2BgATL6rU21FRyrcA%2FMRucsv9cTzWC5XWT0UpkrFI5EanFuOlFQuuqSpqO1Dfmdn2VsXhXeTRzFxQB8KRmIvu0xDBP0cJmE7zZX2u3sgiIPhulmwNovZH1Dx2nq79qWCdh1mQZ7kSJPABMdmzYB24n0U3bHn1hye64YtkV6XAlT7cetxT%2BK7WddYN06It7D7NdlJpBb84YhifUop0XzdvxRBeLd93zi0EjovQiJ06uQJlU0Vi4RyKzfDOtGFIFPDa2T6xQ7Wt4ZXFzi9EuNZE5LNcnpKQ1RfPukEw9zx6gInUtJdxNWqckrg%2FZ4x49mTY0FuKOZF1m4rlVo4ya6I3uZk7MYQq2WIGM%2BPZrtzZHszwXwRFRpULrpLr9qoRCjlkBop0a2jT9%2BhM75wz4YI4o%2F4RTvQD1DSYsN9YJ8%2BN3YFTAfngSqkQpB7HNJFfMtN79WIiZ9aQc%2FNjY%2FRttmkvtSO85rfcRJMdWZnL60ovlEtisYEG1Y9Qs79H5o6ZhoTFRlmux9D%2B2d6Yk61bKw7RcPeNZyZBEDrPKaiE4oEN48EJmU5Xxa2Zu7%2F5Pe%2FcNVUWj0M9VsszVfstgj1twuTY%2Br99Zd%2FF0VDI6sktYCyTCIRcODrmwFmIx0u2klQdgtp7i3x4j0AiWtCMK%2F7jM8GOqUBye3rCPqI8hnnPyFGGXl4uJD2KdcU56R36cwC1UFin5ik3ra9NhKgrK7qbMBPCVm3LO3ZM5tHayO%2FO9y2vTaX0yLF1zptudrsMEw18UsN63OTyvkgks4gjF2b7upYwT46RQKnWpYlc7d2L4VBR11q2YAKB7C1jRrC0acjTKqXFPjNx3QN%2B99%2B5ZHOHUMNkSccdeRYdch1ky6TwZraFBGN%2BvSxeeew&X-Amz-Signature=02dc706fcc7c95699cf899a6ea693c5c97ae4cb8dd902d3578a1fce4d66ccb70&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667L3W4VG5%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQDPQG54pZ7ss8kl7G3YiGmihHeHXOivhXgZoN%2BsN63RXAIgFgYW7YR3xuF32S%2FCbvpIe0QEfxGyS1ESoQieZSizh6IqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAJIx%2BgATL6rU21FRyrcA%2FMRucsv9cTzWC5XWT0UpkrFI5EanFuOlFQuuqSpqO1Dfmdn2VsXhXeTRzFxQB8KRmIvu0xDBP0cJmE7zZX2u3sgiIPhulmwNovZH1Dx2nq79qWCdh1mQZ7kSJPABMdmzYB24n0U3bHn1hye64YtkV6XAlT7cetxT%2BK7WddYN06It7D7NdlJpBb84YhifUop0XzdvxRBeLd93zi0EjovQiJ06uQJlU0Vi4RyKzfDOtGFIFPDa2T6xQ7Wt4ZXFzi9EuNZE5LNcnpKQ1RfPukEw9zx6gInUtJdxNWqckrg%2FZ4x49mTY0FuKOZF1m4rlVo4ya6I3uZk7MYQq2WIGM%2BPZrtzZHszwXwRFRpULrpLr9qoRCjlkBop0a2jT9%2BhM75wz4YI4o%2F4RTvQD1DSYsN9YJ8%2BN3YFTAfngSqkQpB7HNJFfMtN79WIiZ9aQc%2FNjY%2FRttmkvtSO85rfcRJMdWZnL60ovlEtisYEG1Y9Qs79H5o6ZhoTFRlmux9D%2B2d6Yk61bKw7RcPeNZyZBEDrPKaiE4oEN48EJmU5Xxa2Zu7%2F5Pe%2FcNVUWj0M9VsszVfstgj1twuTY%2Br99Zd%2FF0VDI6sktYCyTCIRcODrmwFmIx0u2klQdgtp7i3x4j0AiWtCMK%2F7jM8GOqUBye3rCPqI8hnnPyFGGXl4uJD2KdcU56R36cwC1UFin5ik3ra9NhKgrK7qbMBPCVm3LO3ZM5tHayO%2FO9y2vTaX0yLF1zptudrsMEw18UsN63OTyvkgks4gjF2b7upYwT46RQKnWpYlc7d2L4VBR11q2YAKB7C1jRrC0acjTKqXFPjNx3QN%2B99%2B5ZHOHUMNkSccdeRYdch1ky6TwZraFBGN%2BvSxeeew&X-Amz-Signature=511a1ac66bf9f758391d0200fd8d99659fd2fbea2777c903d11d00155db6da97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667L3W4VG5%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJHMEUCIQDPQG54pZ7ss8kl7G3YiGmihHeHXOivhXgZoN%2BsN63RXAIgFgYW7YR3xuF32S%2FCbvpIe0QEfxGyS1ESoQieZSizh6IqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDAJIx%2BgATL6rU21FRyrcA%2FMRucsv9cTzWC5XWT0UpkrFI5EanFuOlFQuuqSpqO1Dfmdn2VsXhXeTRzFxQB8KRmIvu0xDBP0cJmE7zZX2u3sgiIPhulmwNovZH1Dx2nq79qWCdh1mQZ7kSJPABMdmzYB24n0U3bHn1hye64YtkV6XAlT7cetxT%2BK7WddYN06It7D7NdlJpBb84YhifUop0XzdvxRBeLd93zi0EjovQiJ06uQJlU0Vi4RyKzfDOtGFIFPDa2T6xQ7Wt4ZXFzi9EuNZE5LNcnpKQ1RfPukEw9zx6gInUtJdxNWqckrg%2FZ4x49mTY0FuKOZF1m4rlVo4ya6I3uZk7MYQq2WIGM%2BPZrtzZHszwXwRFRpULrpLr9qoRCjlkBop0a2jT9%2BhM75wz4YI4o%2F4RTvQD1DSYsN9YJ8%2BN3YFTAfngSqkQpB7HNJFfMtN79WIiZ9aQc%2FNjY%2FRttmkvtSO85rfcRJMdWZnL60ovlEtisYEG1Y9Qs79H5o6ZhoTFRlmux9D%2B2d6Yk61bKw7RcPeNZyZBEDrPKaiE4oEN48EJmU5Xxa2Zu7%2F5Pe%2FcNVUWj0M9VsszVfstgj1twuTY%2Br99Zd%2FF0VDI6sktYCyTCIRcODrmwFmIx0u2klQdgtp7i3x4j0AiWtCMK%2F7jM8GOqUBye3rCPqI8hnnPyFGGXl4uJD2KdcU56R36cwC1UFin5ik3ra9NhKgrK7qbMBPCVm3LO3ZM5tHayO%2FO9y2vTaX0yLF1zptudrsMEw18UsN63OTyvkgks4gjF2b7upYwT46RQKnWpYlc7d2L4VBR11q2YAKB7C1jRrC0acjTKqXFPjNx3QN%2B99%2B5ZHOHUMNkSccdeRYdch1ky6TwZraFBGN%2BvSxeeew&X-Amz-Signature=33d32348d4f3582c4443a3e62ca0920cd57150f6ffbca5955b830100519c5461&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666BLKWNPB%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJFMEMCHxZsI86HFISfBi7moIqJ4NgOs2lKeWh9nCXrwMgtLl8CIBx7HIGuobLEGc40RnLi%2BDdZeG5QAbkyKL3dtxQZN1bhKogECOn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFjt4SZpUWnJk1Mwgq3APBUzBuTboQjStOoR3%2FEDxxp8UpiKwKuGEbUGhpBahy51emcn003BYVKMPCFVwe1fg%2BJHTffS5MbtZ%2BAttAuG9xlFsY94FkkgkCecT9mAmZo2k3lLxTFt288je8sJUK3ZvT1PwfkYnBd1GBAj0UGK5ZhqFjWypr%2BgZ82Pyd9YU6kPo%2FP%2Ffm%2Bzeel6h49Kk5mOH1Hge%2FAAOeME1MYc1lD0YpXlxXP8daOn7Jnzt5c3xUVQpxhGMLYjXpnorZINi4OsQQxuffQUF7CUTV3nbUcRIXzl3I6XwsHPTtscnoBam%2FXptKoMz9IuSGvsNvxzrTET7nKiUcu5G394Mp3L3UjdK6M9GkuENaSmM87v7hOyhm%2BY5P0zwCyEkWgW%2BcUMZax2y6OTK%2BE1yC1yRNena1Shgz41nPj%2FFdcwXhGOHx7YbgPJv7P3AmVrpfhBGh74NRsMAUZy8Rs1Q62lIb8zSv40934qQ0n0r%2BzuIm0%2FPA4bezE%2FIXR5wbOMNO1SFb0E0xv%2F9qwdFGBef2YAYdKZy%2BdlynrkRlWCUfCdmb6eWAIDFxZpvINrOq20znA%2BNQBliSh2qTFSbeba%2FuV50JPOvORb25Mkpnju9qd4UOBxrlbcUUS40n%2BDZuppnjWcp8hDDt%2B4zPBjqnAfVkl6fLnV9fqolnwxjHA%2BZd1RfVhDe%2FnWLiB%2FBEsayx8dpuc7eaETKJDZjIe25vh6r29%2BlZLcEGPggoCAOkNWXrhQFpjIQIJ2lCRM0VPScevA0t%2BjHt2UoSynXycyxFNoNgvlK0fVfVyO3uthbwTL01BIF6SpwrQMCorSZXk53C4kLqJlcoVnAOEYTHLTbz6%2FI24AmCzfZ46nfTWTjkZ%2Fn77HS%2FxJXn&X-Amz-Signature=2fb153f291b0319902508e540ee42c23bde0dad7ddb7e6a36194c80c85f86449&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666BLKWNPB%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJFMEMCHxZsI86HFISfBi7moIqJ4NgOs2lKeWh9nCXrwMgtLl8CIBx7HIGuobLEGc40RnLi%2BDdZeG5QAbkyKL3dtxQZN1bhKogECOn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFjt4SZpUWnJk1Mwgq3APBUzBuTboQjStOoR3%2FEDxxp8UpiKwKuGEbUGhpBahy51emcn003BYVKMPCFVwe1fg%2BJHTffS5MbtZ%2BAttAuG9xlFsY94FkkgkCecT9mAmZo2k3lLxTFt288je8sJUK3ZvT1PwfkYnBd1GBAj0UGK5ZhqFjWypr%2BgZ82Pyd9YU6kPo%2FP%2Ffm%2Bzeel6h49Kk5mOH1Hge%2FAAOeME1MYc1lD0YpXlxXP8daOn7Jnzt5c3xUVQpxhGMLYjXpnorZINi4OsQQxuffQUF7CUTV3nbUcRIXzl3I6XwsHPTtscnoBam%2FXptKoMz9IuSGvsNvxzrTET7nKiUcu5G394Mp3L3UjdK6M9GkuENaSmM87v7hOyhm%2BY5P0zwCyEkWgW%2BcUMZax2y6OTK%2BE1yC1yRNena1Shgz41nPj%2FFdcwXhGOHx7YbgPJv7P3AmVrpfhBGh74NRsMAUZy8Rs1Q62lIb8zSv40934qQ0n0r%2BzuIm0%2FPA4bezE%2FIXR5wbOMNO1SFb0E0xv%2F9qwdFGBef2YAYdKZy%2BdlynrkRlWCUfCdmb6eWAIDFxZpvINrOq20znA%2BNQBliSh2qTFSbeba%2FuV50JPOvORb25Mkpnju9qd4UOBxrlbcUUS40n%2BDZuppnjWcp8hDDt%2B4zPBjqnAfVkl6fLnV9fqolnwxjHA%2BZd1RfVhDe%2FnWLiB%2FBEsayx8dpuc7eaETKJDZjIe25vh6r29%2BlZLcEGPggoCAOkNWXrhQFpjIQIJ2lCRM0VPScevA0t%2BjHt2UoSynXycyxFNoNgvlK0fVfVyO3uthbwTL01BIF6SpwrQMCorSZXk53C4kLqJlcoVnAOEYTHLTbz6%2FI24AmCzfZ46nfTWTjkZ%2Fn77HS%2FxJXn&X-Amz-Signature=feb6aed02f61444383764baff3b9117dfcd38dc5d7ec7336dad5fac2ac252843&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666BLKWNPB%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJFMEMCHxZsI86HFISfBi7moIqJ4NgOs2lKeWh9nCXrwMgtLl8CIBx7HIGuobLEGc40RnLi%2BDdZeG5QAbkyKL3dtxQZN1bhKogECOn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFjt4SZpUWnJk1Mwgq3APBUzBuTboQjStOoR3%2FEDxxp8UpiKwKuGEbUGhpBahy51emcn003BYVKMPCFVwe1fg%2BJHTffS5MbtZ%2BAttAuG9xlFsY94FkkgkCecT9mAmZo2k3lLxTFt288je8sJUK3ZvT1PwfkYnBd1GBAj0UGK5ZhqFjWypr%2BgZ82Pyd9YU6kPo%2FP%2Ffm%2Bzeel6h49Kk5mOH1Hge%2FAAOeME1MYc1lD0YpXlxXP8daOn7Jnzt5c3xUVQpxhGMLYjXpnorZINi4OsQQxuffQUF7CUTV3nbUcRIXzl3I6XwsHPTtscnoBam%2FXptKoMz9IuSGvsNvxzrTET7nKiUcu5G394Mp3L3UjdK6M9GkuENaSmM87v7hOyhm%2BY5P0zwCyEkWgW%2BcUMZax2y6OTK%2BE1yC1yRNena1Shgz41nPj%2FFdcwXhGOHx7YbgPJv7P3AmVrpfhBGh74NRsMAUZy8Rs1Q62lIb8zSv40934qQ0n0r%2BzuIm0%2FPA4bezE%2FIXR5wbOMNO1SFb0E0xv%2F9qwdFGBef2YAYdKZy%2BdlynrkRlWCUfCdmb6eWAIDFxZpvINrOq20znA%2BNQBliSh2qTFSbeba%2FuV50JPOvORb25Mkpnju9qd4UOBxrlbcUUS40n%2BDZuppnjWcp8hDDt%2B4zPBjqnAfVkl6fLnV9fqolnwxjHA%2BZd1RfVhDe%2FnWLiB%2FBEsayx8dpuc7eaETKJDZjIe25vh6r29%2BlZLcEGPggoCAOkNWXrhQFpjIQIJ2lCRM0VPScevA0t%2BjHt2UoSynXycyxFNoNgvlK0fVfVyO3uthbwTL01BIF6SpwrQMCorSZXk53C4kLqJlcoVnAOEYTHLTbz6%2FI24AmCzfZ46nfTWTjkZ%2Fn77HS%2FxJXn&X-Amz-Signature=05258b91ef9dd7384b8dcf5b30003c2bb8f02843084073222b0a5f3265d014a1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666BLKWNPB%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085026Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJFMEMCHxZsI86HFISfBi7moIqJ4NgOs2lKeWh9nCXrwMgtLl8CIBx7HIGuobLEGc40RnLi%2BDdZeG5QAbkyKL3dtxQZN1bhKogECOn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxFjt4SZpUWnJk1Mwgq3APBUzBuTboQjStOoR3%2FEDxxp8UpiKwKuGEbUGhpBahy51emcn003BYVKMPCFVwe1fg%2BJHTffS5MbtZ%2BAttAuG9xlFsY94FkkgkCecT9mAmZo2k3lLxTFt288je8sJUK3ZvT1PwfkYnBd1GBAj0UGK5ZhqFjWypr%2BgZ82Pyd9YU6kPo%2FP%2Ffm%2Bzeel6h49Kk5mOH1Hge%2FAAOeME1MYc1lD0YpXlxXP8daOn7Jnzt5c3xUVQpxhGMLYjXpnorZINi4OsQQxuffQUF7CUTV3nbUcRIXzl3I6XwsHPTtscnoBam%2FXptKoMz9IuSGvsNvxzrTET7nKiUcu5G394Mp3L3UjdK6M9GkuENaSmM87v7hOyhm%2BY5P0zwCyEkWgW%2BcUMZax2y6OTK%2BE1yC1yRNena1Shgz41nPj%2FFdcwXhGOHx7YbgPJv7P3AmVrpfhBGh74NRsMAUZy8Rs1Q62lIb8zSv40934qQ0n0r%2BzuIm0%2FPA4bezE%2FIXR5wbOMNO1SFb0E0xv%2F9qwdFGBef2YAYdKZy%2BdlynrkRlWCUfCdmb6eWAIDFxZpvINrOq20znA%2BNQBliSh2qTFSbeba%2FuV50JPOvORb25Mkpnju9qd4UOBxrlbcUUS40n%2BDZuppnjWcp8hDDt%2B4zPBjqnAfVkl6fLnV9fqolnwxjHA%2BZd1RfVhDe%2FnWLiB%2FBEsayx8dpuc7eaETKJDZjIe25vh6r29%2BlZLcEGPggoCAOkNWXrhQFpjIQIJ2lCRM0VPScevA0t%2BjHt2UoSynXycyxFNoNgvlK0fVfVyO3uthbwTL01BIF6SpwrQMCorSZXk53C4kLqJlcoVnAOEYTHLTbz6%2FI24AmCzfZ46nfTWTjkZ%2Fn77HS%2FxJXn&X-Amz-Signature=a4f172a82beb7a4c1a611f239c0f89e3e8c557456417d94d50b8cc99300f8b42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWPSFAKB%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085026Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECAaCXVzLXdlc3QtMiJGMEQCIFn63QqbiLxydD7Vi%2B6NWOLYOU0K45NJ7t07VZt%2FLRu3AiABq0%2B0HK2x04larumhkzCzLbdE0m1CU1DyGpJZab0zMSqIBAjp%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMHSBdd8P5Elgj2vDYKtwDjZPhJIPxZd8lYAWlzOGCCwSzLvet5dUaMUBDXsDVgXQBixW2l9%2BwLAeAQnviIJY1sIlkw%2B8kb6zM7gWWwrWq0uSeIncgAExDnvVGYqe4MPUytHghT1Le%2B98q2p%2FULGLgxmj3FWUyBgQbDEV0SS5KcSzR2Q%2BsHMuXbNVR7xRhmPLLwbAclZ6bgvvsDJAc9GPkRJjTiAzdaTCexnsz52hOdXY6sj9kE6ZD8Lsrxbr3PwHD1D2cLCB4QcYkphW6EE%2BQpRYqARRMyuFSf2zxud5Whwl8sMEIW50cOZD3dOB7%2FUWvjSYWNLtkoZr7jipg6zPkCEzzoQHiQiKak%2BNmazuLkFig3AHT7GTSXf5yDFTkkSDAHxsyVwCo72NSb%2FMoJMP%2BlOABnxMI3v0BQloi19%2FwbONNOjF6efA%2Bm3B%2BK6d7IJ3Xq3sQJfN%2FYdpM1gVNl5zidzZmeZycB6H%2Fl0AQuPBXkYnJDMQNrrqDICRA8DSXXYbfs29z6%2B%2F7AD9tOhxaA79yb7TsUx9Ofn6siOX6ETaNsO6dada16nRa27R046hcPsfxp5ybDCC7hVbuxBuv4ONTrmPK%2FBOV5cTazhbxOzk8OZuhyvsTvTAeFtzHRq5ni%2F7aQY57VdJb4wgfqKQwqPuMzwY6pgH%2FFOxz3Z23Eqll2xIIWcwzj3kqGHgzw0iDkWc3KH0nwXPjEO57FlfF6BZEbqbb%2FGTwPKJJWd7MxOcm72s6KZUxSEMD%2Fhx33DNIsxHWtDnKYsG4r%2BETsi245%2Fk8oKDINegjdQfGrCUoV%2Fa4tiNLsQWui5X%2FsOEjepwLXGhsP%2BuZjYalpoR5KrKsv%2FjLCEi%2FIsab992D8BhvZJAf4O67FD1d%2BdFuAIWX&X-Amz-Signature=86f5674e615c9a5149e67a2b4e9a0132fd252bdac687f5a309fc56713de3cd2d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZE3P3ZH%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085026Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQCcAA2UZYRUkcnmyACGWcmZfqcf3tT%2Fk%2B5SeYw652sW7QIgEhZnPeUNSz3pGTqrKPzEyvY4QHtNi9IQEd3QzMtCGBUqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOszt1dx89wqj9CkzCrcA9jOuFnNJn5bv17lId%2B%2FAcM1nz8BJp6wJdv6cOEGZiIuN8F4H0Kqs9iBScXCp3v3lGclGCn5UNWnN6KRZ92reXEhnw8oWiyz0j1kUNnNZ4jBzoy18%2BcMCdTN6vDgXWw7sMHuGXuejbidtPMzjKzCr6hXzyif4xmGRmwUuHWB3Ozo1ycHdFZgntYJPcrTQVRJ647IIboFJm%2FSmttL7sOUrHmuAWF7K9xuF2nMAyFokrAxR0fAIdhqIGorTbg04xeTorCRLhXomO3t6mUFiORIjdoB3AbLKuPK%2F6V9SZV2umGjFLzxoQQt6aILWXtUDyH0YIscBBl7nnY9VzPKSgFOMOYxvxXF%2BrZqWqIxZJ0Apg4wP2ESVg8%2BjzvqMJVSkh1vqfU6vmJV391F%2BMFgjiJbJW85KPcgycE6iAjZ7QKZTT32Z5NoaR19DbtP3tVU9i9b%2BKrPJdiskx5r%2BXmVkMfS05%2FSySsVXfCBPphdwGKKa99kYp9%2BdYf08BrBbW09WAtwVdgSsW2e1iWnZavQIfdnGoyGXkbjnGOIAzpoSNe1ddf7tBsx4VtruFwBpi3sWhb%2Fa5YHg%2FBlyW6FNZEpRYhAqWh9UiGcke1BfhK%2BVWgcVUpILfXQheUK%2FV5KvSwpMJr9jM8GOqUBdNRQG0xaeWAQhsg8jcbAnr9u9Jw6zh8VY%2BxKvig%2Bjh%2Fvw3FzWrGMRuECsus4q9hDbwCiWwGCOUc0qO2YJIPhIc%2BW4BLhGAEDtaNrgvP5sm1qz%2FmpPMOCelNas2J5kQdR9QHLVOXD9RO%2Bk4Flibxs%2FAm9NjKIBKynYZ5ROVHrqXr%2BKuRlMaIN2RDVt2cPba5cY54iUO3d0WO7UtTnG8NFTdyw67%2Be&X-Amz-Signature=e1a96ed20c761cf94e0535bfa453ae46dfc2ed2ad4111e5d972558984310ac2b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZE3P3ZH%2F20260418%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260418T085026Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECEaCXVzLXdlc3QtMiJHMEUCIQCcAA2UZYRUkcnmyACGWcmZfqcf3tT%2Fk%2B5SeYw652sW7QIgEhZnPeUNSz3pGTqrKPzEyvY4QHtNi9IQEd3QzMtCGBUqiAQI6f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOszt1dx89wqj9CkzCrcA9jOuFnNJn5bv17lId%2B%2FAcM1nz8BJp6wJdv6cOEGZiIuN8F4H0Kqs9iBScXCp3v3lGclGCn5UNWnN6KRZ92reXEhnw8oWiyz0j1kUNnNZ4jBzoy18%2BcMCdTN6vDgXWw7sMHuGXuejbidtPMzjKzCr6hXzyif4xmGRmwUuHWB3Ozo1ycHdFZgntYJPcrTQVRJ647IIboFJm%2FSmttL7sOUrHmuAWF7K9xuF2nMAyFokrAxR0fAIdhqIGorTbg04xeTorCRLhXomO3t6mUFiORIjdoB3AbLKuPK%2F6V9SZV2umGjFLzxoQQt6aILWXtUDyH0YIscBBl7nnY9VzPKSgFOMOYxvxXF%2BrZqWqIxZJ0Apg4wP2ESVg8%2BjzvqMJVSkh1vqfU6vmJV391F%2BMFgjiJbJW85KPcgycE6iAjZ7QKZTT32Z5NoaR19DbtP3tVU9i9b%2BKrPJdiskx5r%2BXmVkMfS05%2FSySsVXfCBPphdwGKKa99kYp9%2BdYf08BrBbW09WAtwVdgSsW2e1iWnZavQIfdnGoyGXkbjnGOIAzpoSNe1ddf7tBsx4VtruFwBpi3sWhb%2Fa5YHg%2FBlyW6FNZEpRYhAqWh9UiGcke1BfhK%2BVWgcVUpILfXQheUK%2FV5KvSwpMJr9jM8GOqUBdNRQG0xaeWAQhsg8jcbAnr9u9Jw6zh8VY%2BxKvig%2Bjh%2Fvw3FzWrGMRuECsus4q9hDbwCiWwGCOUc0qO2YJIPhIc%2BW4BLhGAEDtaNrgvP5sm1qz%2FmpPMOCelNas2J5kQdR9QHLVOXD9RO%2Bk4Flibxs%2FAm9NjKIBKynYZ5ROVHrqXr%2BKuRlMaIN2RDVt2cPba5cY54iUO3d0WO7UtTnG8NFTdyw67%2Be&X-Amz-Signature=c167004759e2aa79b4e001e658c1bb7ea136db8989427ed0ddff527fce6f6a56&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
