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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RS5K3VQ3%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQD3%2FlgFTg0HGAOUcyJysgISw6%2F1FsjeXqAe86RpG1Lc%2BgIhAPwwIAWTHp%2BWrB6HW0WWgH4I%2BAvY%2BXubFoKerfhi7WiVKv8DCDIQABoMNjM3NDIzMTgzODA1IgwmElVei4yKdir11DAq3APq0t8JfY%2BGS54PO20VJJ90Fbz3IJA1Ohg8JAUcE09JJxwQ7k3zaCAqF6njn48MILV20y4Gxv6jbdQ9P9i%2FlDpf9vOrKCjaOQ621Pg3nXQEJ3pd3cmSq7%2FmysG6fVXWd6rF3VgkAhngSwHyHAPre2AF6ssN1KlOgiKvjEt44znpuZYTMn8DOyMWn2kDL6w4pkfyZ4%2BdK3qRl3IXPBF59JLQI5XsPJNd4gy%2BO6HLRscxBwKT1SBKokkEqKzzILuj34rgcQ9QY5NRx3O%2B9%2BPPPMttxY3W%2B%2Bl8m0hjSSyun%2BC93FrzId8L43qAk5v04vT8iCDctqacvrEnU48j1%2BAoGBZgzQ2jI6UeZOezA%2BB2eKWzZudYPg0cAr0hTWzX97yfOl4la0logJb36Hs8NPq%2FtT0d%2BTyQ72NfPS%2BfnemaVexM9jWoycec2nfexJlAs7irOAgAiodfm1%2FDLU2hjBTODL%2BrEQlnBxIeE%2B%2BY9FlREW8aTH2WASPypcD11y7Y7ZYUcUNqBjo9G13QCyiKpe434zHg2Ahg1HoayTnCe3qz7sT4GG9D5ZnzSYDqATMf9ynq7kNgbuNmx3wfEVuDNoJX1Znzy2HbWCa8yYQxFX%2BzlT0qnnNVhVPgLcpcJQ7vDDCY%2FpzPBjqkAQY0e5fNBUZOXPozXvmTTVCCHEp7x4iHNjHLtLVbarOS3ZHhDNk%2BWKMAJPI4FJ%2BCFOR0qU8wDtyMxTeEk%2Fqu5fNnmlZEvOWvosaYQF%2Bh%2FrVPv0QDbSvD%2FVDV5KWwjly0PaCJZocRZtHT%2BqNCHzzoa79XZ%2BUh1JYV2orpiaGWHVXBJaQhZ2iC6qEi9qK9v%2F6VuFj%2FoMI04OCp2TcDK80ybVBaF3aJ&X-Amz-Signature=b7d219b93850182b4c600d7ba90472519530005962fa79a0a9b1fe8e8cce1f3c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RS5K3VQ3%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQD3%2FlgFTg0HGAOUcyJysgISw6%2F1FsjeXqAe86RpG1Lc%2BgIhAPwwIAWTHp%2BWrB6HW0WWgH4I%2BAvY%2BXubFoKerfhi7WiVKv8DCDIQABoMNjM3NDIzMTgzODA1IgwmElVei4yKdir11DAq3APq0t8JfY%2BGS54PO20VJJ90Fbz3IJA1Ohg8JAUcE09JJxwQ7k3zaCAqF6njn48MILV20y4Gxv6jbdQ9P9i%2FlDpf9vOrKCjaOQ621Pg3nXQEJ3pd3cmSq7%2FmysG6fVXWd6rF3VgkAhngSwHyHAPre2AF6ssN1KlOgiKvjEt44znpuZYTMn8DOyMWn2kDL6w4pkfyZ4%2BdK3qRl3IXPBF59JLQI5XsPJNd4gy%2BO6HLRscxBwKT1SBKokkEqKzzILuj34rgcQ9QY5NRx3O%2B9%2BPPPMttxY3W%2B%2Bl8m0hjSSyun%2BC93FrzId8L43qAk5v04vT8iCDctqacvrEnU48j1%2BAoGBZgzQ2jI6UeZOezA%2BB2eKWzZudYPg0cAr0hTWzX97yfOl4la0logJb36Hs8NPq%2FtT0d%2BTyQ72NfPS%2BfnemaVexM9jWoycec2nfexJlAs7irOAgAiodfm1%2FDLU2hjBTODL%2BrEQlnBxIeE%2B%2BY9FlREW8aTH2WASPypcD11y7Y7ZYUcUNqBjo9G13QCyiKpe434zHg2Ahg1HoayTnCe3qz7sT4GG9D5ZnzSYDqATMf9ynq7kNgbuNmx3wfEVuDNoJX1Znzy2HbWCa8yYQxFX%2BzlT0qnnNVhVPgLcpcJQ7vDDCY%2FpzPBjqkAQY0e5fNBUZOXPozXvmTTVCCHEp7x4iHNjHLtLVbarOS3ZHhDNk%2BWKMAJPI4FJ%2BCFOR0qU8wDtyMxTeEk%2Fqu5fNnmlZEvOWvosaYQF%2Bh%2FrVPv0QDbSvD%2FVDV5KWwjly0PaCJZocRZtHT%2BqNCHzzoa79XZ%2BUh1JYV2orpiaGWHVXBJaQhZ2iC6qEi9qK9v%2F6VuFj%2FoMI04OCp2TcDK80ybVBaF3aJ&X-Amz-Signature=23f1833fb05e2571f98bc668f58fe9191a36fc6d073c0f6d4dafcf3069b8cf7b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RS5K3VQ3%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJIMEYCIQD3%2FlgFTg0HGAOUcyJysgISw6%2F1FsjeXqAe86RpG1Lc%2BgIhAPwwIAWTHp%2BWrB6HW0WWgH4I%2BAvY%2BXubFoKerfhi7WiVKv8DCDIQABoMNjM3NDIzMTgzODA1IgwmElVei4yKdir11DAq3APq0t8JfY%2BGS54PO20VJJ90Fbz3IJA1Ohg8JAUcE09JJxwQ7k3zaCAqF6njn48MILV20y4Gxv6jbdQ9P9i%2FlDpf9vOrKCjaOQ621Pg3nXQEJ3pd3cmSq7%2FmysG6fVXWd6rF3VgkAhngSwHyHAPre2AF6ssN1KlOgiKvjEt44znpuZYTMn8DOyMWn2kDL6w4pkfyZ4%2BdK3qRl3IXPBF59JLQI5XsPJNd4gy%2BO6HLRscxBwKT1SBKokkEqKzzILuj34rgcQ9QY5NRx3O%2B9%2BPPPMttxY3W%2B%2Bl8m0hjSSyun%2BC93FrzId8L43qAk5v04vT8iCDctqacvrEnU48j1%2BAoGBZgzQ2jI6UeZOezA%2BB2eKWzZudYPg0cAr0hTWzX97yfOl4la0logJb36Hs8NPq%2FtT0d%2BTyQ72NfPS%2BfnemaVexM9jWoycec2nfexJlAs7irOAgAiodfm1%2FDLU2hjBTODL%2BrEQlnBxIeE%2B%2BY9FlREW8aTH2WASPypcD11y7Y7ZYUcUNqBjo9G13QCyiKpe434zHg2Ahg1HoayTnCe3qz7sT4GG9D5ZnzSYDqATMf9ynq7kNgbuNmx3wfEVuDNoJX1Znzy2HbWCa8yYQxFX%2BzlT0qnnNVhVPgLcpcJQ7vDDCY%2FpzPBjqkAQY0e5fNBUZOXPozXvmTTVCCHEp7x4iHNjHLtLVbarOS3ZHhDNk%2BWKMAJPI4FJ%2BCFOR0qU8wDtyMxTeEk%2Fqu5fNnmlZEvOWvosaYQF%2Bh%2FrVPv0QDbSvD%2FVDV5KWwjly0PaCJZocRZtHT%2BqNCHzzoa79XZ%2BUh1JYV2orpiaGWHVXBJaQhZ2iC6qEi9qK9v%2F6VuFj%2FoMI04OCp2TcDK80ybVBaF3aJ&X-Amz-Signature=29757bae6e92035ac71ebbb5f197714be6fbb735d885c0ecffe9ee91594621ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JIJ2BUQ%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIGBuViOf%2Br7DrUZzwl1bdR82bsgcddTZw2b%2FA7uVsrnbAiBhrXz%2BhSrv7YbsrZYPS2peAajTosvD5ri6d3vAZE0Ajir%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMPv8XBZ1uCEL%2BRWVYKtwDJsixPnLO4WAVIvaEdswdbb%2F5iG6I%2F6LPrVSqM9yOFHW6EOHqeLDn5CEcCptCP%2B4cBkWNB6DiDiGKEjzxCnK9eMjgJl5ZmNgXjoCh%2FfUxJcQ3CfqP%2B67b%2BXS7VYOv9p7%2FvK2LN5MVKZgbC0GUF6aNf2GdkbHzKfLfdqhh8QA%2FD6Iuv4qy%2FkTbQIWLsQrPmBzmqmLJo%2BNUp1hhdqNExJOKyffoNxz0XPwlIph2sjURmCw6W7WzQpXLEA0PY7VpHanEKnNMEfzSwIpmF1PTyUSNh5ZVSEshBcHdClBnfvTEj%2BiT5Qpd969D89LBbfRKampVveg7qmsSb7UOJrmZiTXUwmSbopM7uuYTjbpKVI63iDQgFJ5%2BeONwyUkJoyM3I0YfPP1aLCKVhlwRhTUOFVgxWG322SN366f9SgTsBC3J9ZTq%2BVjlH2Su9x10s89ysFuGjqdO0%2BLkEx%2BLKDe161d1PZfmKgHlC8%2BWessX47oIW8noM3jlttcyTNKIv0AsRyFxibEfa%2FzEq3yzqEBXix5aIdjvyqs%2Fegj%2FaUPUW81n3U0zQdwfLUNYXxM4bh4e9HdgEXeqBD7RMpzLn6lIGeF70aYsAfgWZ6pKlVkJfUmJRLhVQl8%2BxN%2BgwFsFhgEwhP%2BczwY6pgHu1gD0G4LNRaBvLhEfam60ky0qqihAmMysDSuJ2Es7kSqrRHX9zoqAkV%2F1pL25wf68RRT9A81IDyKb6tNj3PHOXvNw24Aw%2FpC20mG%2FJ%2FpGRpIoSuro7xjRWqI16vUZ%2Brc2ktYYfCAfW2d8TLItFIiUa4%2B4l7Q2V%2FzF%2FEQB%2BxkBQN4UBZ%2FRo5AszPb%2FHgViRxJ9NdPJg0azVU%2F67PMQ8fYByb%2F3KgEw&X-Amz-Signature=940ac1c8953391525600180af507b0b288a36cee5e4edc31183e027c6b00a4b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JIJ2BUQ%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIGBuViOf%2Br7DrUZzwl1bdR82bsgcddTZw2b%2FA7uVsrnbAiBhrXz%2BhSrv7YbsrZYPS2peAajTosvD5ri6d3vAZE0Ajir%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMPv8XBZ1uCEL%2BRWVYKtwDJsixPnLO4WAVIvaEdswdbb%2F5iG6I%2F6LPrVSqM9yOFHW6EOHqeLDn5CEcCptCP%2B4cBkWNB6DiDiGKEjzxCnK9eMjgJl5ZmNgXjoCh%2FfUxJcQ3CfqP%2B67b%2BXS7VYOv9p7%2FvK2LN5MVKZgbC0GUF6aNf2GdkbHzKfLfdqhh8QA%2FD6Iuv4qy%2FkTbQIWLsQrPmBzmqmLJo%2BNUp1hhdqNExJOKyffoNxz0XPwlIph2sjURmCw6W7WzQpXLEA0PY7VpHanEKnNMEfzSwIpmF1PTyUSNh5ZVSEshBcHdClBnfvTEj%2BiT5Qpd969D89LBbfRKampVveg7qmsSb7UOJrmZiTXUwmSbopM7uuYTjbpKVI63iDQgFJ5%2BeONwyUkJoyM3I0YfPP1aLCKVhlwRhTUOFVgxWG322SN366f9SgTsBC3J9ZTq%2BVjlH2Su9x10s89ysFuGjqdO0%2BLkEx%2BLKDe161d1PZfmKgHlC8%2BWessX47oIW8noM3jlttcyTNKIv0AsRyFxibEfa%2FzEq3yzqEBXix5aIdjvyqs%2Fegj%2FaUPUW81n3U0zQdwfLUNYXxM4bh4e9HdgEXeqBD7RMpzLn6lIGeF70aYsAfgWZ6pKlVkJfUmJRLhVQl8%2BxN%2BgwFsFhgEwhP%2BczwY6pgHu1gD0G4LNRaBvLhEfam60ky0qqihAmMysDSuJ2Es7kSqrRHX9zoqAkV%2F1pL25wf68RRT9A81IDyKb6tNj3PHOXvNw24Aw%2FpC20mG%2FJ%2FpGRpIoSuro7xjRWqI16vUZ%2Brc2ktYYfCAfW2d8TLItFIiUa4%2B4l7Q2V%2FzF%2FEQB%2BxkBQN4UBZ%2FRo5AszPb%2FHgViRxJ9NdPJg0azVU%2F67PMQ8fYByb%2F3KgEw&X-Amz-Signature=61937cc741064b5a3fd00c0a6b35fe550ea7995988077af0bf0016b517813071&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JIJ2BUQ%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIGBuViOf%2Br7DrUZzwl1bdR82bsgcddTZw2b%2FA7uVsrnbAiBhrXz%2BhSrv7YbsrZYPS2peAajTosvD5ri6d3vAZE0Ajir%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMPv8XBZ1uCEL%2BRWVYKtwDJsixPnLO4WAVIvaEdswdbb%2F5iG6I%2F6LPrVSqM9yOFHW6EOHqeLDn5CEcCptCP%2B4cBkWNB6DiDiGKEjzxCnK9eMjgJl5ZmNgXjoCh%2FfUxJcQ3CfqP%2B67b%2BXS7VYOv9p7%2FvK2LN5MVKZgbC0GUF6aNf2GdkbHzKfLfdqhh8QA%2FD6Iuv4qy%2FkTbQIWLsQrPmBzmqmLJo%2BNUp1hhdqNExJOKyffoNxz0XPwlIph2sjURmCw6W7WzQpXLEA0PY7VpHanEKnNMEfzSwIpmF1PTyUSNh5ZVSEshBcHdClBnfvTEj%2BiT5Qpd969D89LBbfRKampVveg7qmsSb7UOJrmZiTXUwmSbopM7uuYTjbpKVI63iDQgFJ5%2BeONwyUkJoyM3I0YfPP1aLCKVhlwRhTUOFVgxWG322SN366f9SgTsBC3J9ZTq%2BVjlH2Su9x10s89ysFuGjqdO0%2BLkEx%2BLKDe161d1PZfmKgHlC8%2BWessX47oIW8noM3jlttcyTNKIv0AsRyFxibEfa%2FzEq3yzqEBXix5aIdjvyqs%2Fegj%2FaUPUW81n3U0zQdwfLUNYXxM4bh4e9HdgEXeqBD7RMpzLn6lIGeF70aYsAfgWZ6pKlVkJfUmJRLhVQl8%2BxN%2BgwFsFhgEwhP%2BczwY6pgHu1gD0G4LNRaBvLhEfam60ky0qqihAmMysDSuJ2Es7kSqrRHX9zoqAkV%2F1pL25wf68RRT9A81IDyKb6tNj3PHOXvNw24Aw%2FpC20mG%2FJ%2FpGRpIoSuro7xjRWqI16vUZ%2Brc2ktYYfCAfW2d8TLItFIiUa4%2B4l7Q2V%2FzF%2FEQB%2BxkBQN4UBZ%2FRo5AszPb%2FHgViRxJ9NdPJg0azVU%2F67PMQ8fYByb%2F3KgEw&X-Amz-Signature=e6cfbcf5d832972e2d87afca29c76399fc9e8a5f173aa1dd291039edb274b8c7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666JIJ2BUQ%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092531Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIGBuViOf%2Br7DrUZzwl1bdR82bsgcddTZw2b%2FA7uVsrnbAiBhrXz%2BhSrv7YbsrZYPS2peAajTosvD5ri6d3vAZE0Ajir%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMPv8XBZ1uCEL%2BRWVYKtwDJsixPnLO4WAVIvaEdswdbb%2F5iG6I%2F6LPrVSqM9yOFHW6EOHqeLDn5CEcCptCP%2B4cBkWNB6DiDiGKEjzxCnK9eMjgJl5ZmNgXjoCh%2FfUxJcQ3CfqP%2B67b%2BXS7VYOv9p7%2FvK2LN5MVKZgbC0GUF6aNf2GdkbHzKfLfdqhh8QA%2FD6Iuv4qy%2FkTbQIWLsQrPmBzmqmLJo%2BNUp1hhdqNExJOKyffoNxz0XPwlIph2sjURmCw6W7WzQpXLEA0PY7VpHanEKnNMEfzSwIpmF1PTyUSNh5ZVSEshBcHdClBnfvTEj%2BiT5Qpd969D89LBbfRKampVveg7qmsSb7UOJrmZiTXUwmSbopM7uuYTjbpKVI63iDQgFJ5%2BeONwyUkJoyM3I0YfPP1aLCKVhlwRhTUOFVgxWG322SN366f9SgTsBC3J9ZTq%2BVjlH2Su9x10s89ysFuGjqdO0%2BLkEx%2BLKDe161d1PZfmKgHlC8%2BWessX47oIW8noM3jlttcyTNKIv0AsRyFxibEfa%2FzEq3yzqEBXix5aIdjvyqs%2Fegj%2FaUPUW81n3U0zQdwfLUNYXxM4bh4e9HdgEXeqBD7RMpzLn6lIGeF70aYsAfgWZ6pKlVkJfUmJRLhVQl8%2BxN%2BgwFsFhgEwhP%2BczwY6pgHu1gD0G4LNRaBvLhEfam60ky0qqihAmMysDSuJ2Es7kSqrRHX9zoqAkV%2F1pL25wf68RRT9A81IDyKb6tNj3PHOXvNw24Aw%2FpC20mG%2FJ%2FpGRpIoSuro7xjRWqI16vUZ%2Brc2ktYYfCAfW2d8TLItFIiUa4%2B4l7Q2V%2FzF%2FEQB%2BxkBQN4UBZ%2FRo5AszPb%2FHgViRxJ9NdPJg0azVU%2F67PMQ8fYByb%2F3KgEw&X-Amz-Signature=c91780a4fd7d72b7fdd0f7b10d73f2bbbcc1a03751b75192e4833de4f08065ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XPENQWVK%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIFVfUjzGxnA8YdM4mLJiXM0R53F24grHUUnvOGXQdnwZAiAUsooApRSxhY6vpFIMNKD3DfRuppGzMv045zEcFJ9Suir%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMvClLzdQYPgEQbMbBKtwDI6nGEwaCh76cnlkB5F3cdN1NY7th4AUu4j7D6eac7hVHMezc2BsC9ueXwUGLaJBq5VreILHYa%2BqtyVgmVHgmbvg5kJ45kwjjnsEeJgYy%2BNdu5RGw2izY4Eei1ycG1gz4KzB2YcEdMhDo1fGBfAWIt0agguc2Ub4D%2FvVWMDULKY2HcdlmkDHKCIiqnmyIzb%2FzN3X%2B%2FYwQg2nTJ2eHkf%2BetPZu0kydRz8Z4WCtxML3W9ORNpVEtGmts6ly23mtu3DLPXhZIhtme8iM%2F0PHxDu3OkcbK3YmYAGqZmi5EI3jdzPumjdDKK99JbcJ66UioJKytJpv7BnsofMeoqNOufNa22ebDDzt9sazuRrc%2FXKKyx5ZsjQ%2FA3y2v2GmWXKc%2FJOGypHKpNhgQVNMZ8yX%2FlmCr25I3e%2F0jEK2cWxxDXfhu5xdYCiXUJWE4tM4UR8KN3YO9xYOD54TGyNmM9i932EwotaxYBg57Gm3xVpPjcb0%2FSMl5ZLq9LfiALIr%2FSgQqR9SIKzMPTNGlvGScFrp%2FucD5LMzjXjALlZi0bEf2f%2Bd6K%2FG4Frff7J5UhJ9K8MleELrXrT%2FZhkp9lNLwk2f%2FIakEPVwORLCOVIFxoGwX%2BFtQ3qwefqTpZDi1FL7fDUw7YCdzwY6pgHIb7UGtzDXfs1C4D9KdR71kGVr09nxo8X4EEWaUyoHP1Jxil0OGsaUNBspJywSIfPh1GJbqRT1mf4XpvDtH7QSxt3lRsYq%2Fp4Hm%2B5EXcg92Tg5WPseGD2khQOGLRaJVNJTHBqqVpu5YD6PZ4ju1VXmKxHEaG4ZwRcvJZzR0TnacT8TBZhLsKY%2BBBrXc53cVC1ly3wdu3iiX7MHfrwXBWTFRXBJcIMO&X-Amz-Signature=970e6a57ea31de01149f29d49b550e0996a5fd071798334404a405bcb7ede582&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEYIXS2U%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIELK2o%2B%2BQbGAs9SO1tHar5Yvhupdv24p%2FCPPFM%2BXKWJuAiB8OFUaJIluXvO14tOA0YSUhCYLPm%2FB9FCkkDD4CKRAYyr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMbJGqS6GUYy%2FQAE7NKtwDgbafIt3JbtERlw%2F7VJNNxbodvhedS3GbNpqVQ16gANyYTZa2ZR3nTjCJt5H7PaP7iZyXLh8Qd4kmSvztoRC7uw8Yd2NaAJ3GyUBtLGK8dER%2BcZbPCaRUSyvP9j0cxThXf%2FGMcTIJE9ttMRq9QRSLIeboXA4Wa1vxwCVZmnzSEvloM8zaxc0RVwlzdmrHNcHswjfq5qVU3bOcaUUifGM4LnP7K7ct3er5BFg0olXtoOnyY4yUY2g9sVCAsBRvjMC6Kfm6PajhUoX%2FZOVPnriY08W7bOu%2FexBxD%2B8sEBkLrn3Bd5CezPRo3vaDHohRRvFo6N7By%2BE9TzQy4iB1u%2BCxOeDfg%2FgkpNVx4RfZEjDDx2tkYrPlKpraAPOXbNmd4YU4sgAy6SlakzH3GdEvC%2Biry6FMO5qagfrA3OwreNJL5qsltXhbSeBPlb8yudQw4O9b36yo%2BRKYevQE7ic6IEeEhr5Q4Rt%2FN5%2FQQsEVlmpxhMixI1wurtlYDYoANLUnlvscdkG9G9QAg3wf9FvcY0KhDL5NrArOUZkt25DaYY3B%2FSpQ7KZPEC5V%2FZNm4LqCS4WE%2B1qZKeJAoSFOzbPxoJPGR0F3w2xT8KvatW6ZRR8gnL7zG4I9oOORMCTZU%2FAw3%2F6czwY6pgHBFNRq9tcm0kAFsW8eEc98eoQw20od7%2FgMh8KpRiIRgHlliCBSh%2F8Bk7ontShFYUkM69u90%2F%2BLqcGyTqUvc0gJwZPErJJgyIMnc3FGrYhK4kSynP3HS4MP89hxkID1QMY296cxkfmFUA5RuoBwu7p0sJeS6DMlQI7mmLLyNxEDg9Y2U1l3Dn3D8dO64ZyIhj0CZXkS6gsRnWWPNa%2F8aat6u4E6K7Yo&X-Amz-Signature=13f07173362b5ac3201178734cf83da73c0764b217c048d38618be3424fd538b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YEYIXS2U%2F20260421%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260421T092534Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEGkaCXVzLXdlc3QtMiJGMEQCIELK2o%2B%2BQbGAs9SO1tHar5Yvhupdv24p%2FCPPFM%2BXKWJuAiB8OFUaJIluXvO14tOA0YSUhCYLPm%2FB9FCkkDD4CKRAYyr%2FAwgyEAAaDDYzNzQyMzE4MzgwNSIMbJGqS6GUYy%2FQAE7NKtwDgbafIt3JbtERlw%2F7VJNNxbodvhedS3GbNpqVQ16gANyYTZa2ZR3nTjCJt5H7PaP7iZyXLh8Qd4kmSvztoRC7uw8Yd2NaAJ3GyUBtLGK8dER%2BcZbPCaRUSyvP9j0cxThXf%2FGMcTIJE9ttMRq9QRSLIeboXA4Wa1vxwCVZmnzSEvloM8zaxc0RVwlzdmrHNcHswjfq5qVU3bOcaUUifGM4LnP7K7ct3er5BFg0olXtoOnyY4yUY2g9sVCAsBRvjMC6Kfm6PajhUoX%2FZOVPnriY08W7bOu%2FexBxD%2B8sEBkLrn3Bd5CezPRo3vaDHohRRvFo6N7By%2BE9TzQy4iB1u%2BCxOeDfg%2FgkpNVx4RfZEjDDx2tkYrPlKpraAPOXbNmd4YU4sgAy6SlakzH3GdEvC%2Biry6FMO5qagfrA3OwreNJL5qsltXhbSeBPlb8yudQw4O9b36yo%2BRKYevQE7ic6IEeEhr5Q4Rt%2FN5%2FQQsEVlmpxhMixI1wurtlYDYoANLUnlvscdkG9G9QAg3wf9FvcY0KhDL5NrArOUZkt25DaYY3B%2FSpQ7KZPEC5V%2FZNm4LqCS4WE%2B1qZKeJAoSFOzbPxoJPGR0F3w2xT8KvatW6ZRR8gnL7zG4I9oOORMCTZU%2FAw3%2F6czwY6pgHBFNRq9tcm0kAFsW8eEc98eoQw20od7%2FgMh8KpRiIRgHlliCBSh%2F8Bk7ontShFYUkM69u90%2F%2BLqcGyTqUvc0gJwZPErJJgyIMnc3FGrYhK4kSynP3HS4MP89hxkID1QMY296cxkfmFUA5RuoBwu7p0sJeS6DMlQI7mmLLyNxEDg9Y2U1l3Dn3D8dO64ZyIhj0CZXkS6gsRnWWPNa%2F8aat6u4E6K7Yo&X-Amz-Signature=ac41959694463e7a57b0041dc132dbc9dd2fdff791b0330537a5241ee5e0b20e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
