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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOF4BRZ5%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIQCxkBGYl6xpksLX%2FO4Kdmd3HMp65CMPQPB8U5Pq8GmOMgIgZtXH78vXTc2hXj8bsEPHqEuWrv8XDAm%2BZs7cBMb4HUIq%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDMBtgYdgISZskLgIbyrcAyNHWf3LTvLjMwjO6WyvhX8zHJSfkyD2nKZPwUWes46yjLixjnnzwd7I13%2F7PIOlqR7CcHpSvkbFcGFTvOwtd5SY3YNSQ4ycYtHP%2FsEwQll544ZjTYE2wHhZi%2F1GIWK9xQp6dZUyk0t1KGUNXXzKkiSNIsG4L1FIVMssZBnRW9DeC4r3k7ChwT8NAmJ3WgkiVPIPKhsLstgUx5zxqbMHFBnsQes9vLILa0SbHeVBxgC%2FCijHwBneNMwZSJdu0dcrLyLy8%2FPlvNoCTc1pWbbVGI%2FdCv6eYun8XRn72bj%2BiOjHm%2Bz4eAJgDwqk4I%2BVVBKdOy2yIzOTAlTozqGlMabGPUwxBYBjocaA%2F1Qv9%2FS7uLKM%2B8KkoZM1k6Ns2D8cZ1F%2BXSk5dpe7o4P9cJM2rlQUXmGaYsK0B7pc5uoTnTk%2BeEufjA66KTZll2S8eQ1aAjYrfPqcDHD04mA4yEubsuwiGC2sxMc%2FmPAL7SeS5fkzfjUTWd%2BIaqb7uWOz3UUMGZy9Cyna%2BOl1NIML6WqP3BKdhTkIFEmaYpaAnNy3vOkseGJGRFLVZhENwXCcBf%2Befh866ZF4chTeWe798OKqbTEYkpNtktPWEzwHAwSzp0o2x9GTFy72P5OAEFqkDsAPMM7Z%2BtQGOqUBZjuQv%2FBk0x5rAY6Zm4dZYDnfUVtNxBBZWy9If6S6PFYMKtf%2Bah%2BqFcZSBHwAHOeHNTv4AoOz4jJDsFKPikSdRXrz2N%2BaJKviFGjZ%2BzQv4W9BnaF8ebzCB8%2FNSzO1g5Qd636cfVObQ3VEMSDdBAsuYLcQyuQDhp1aNj4CT05k9RvoUbPB9yoh6HHypi2bRKCwzjrH327OfUuVKkt5MG2wxB%2BOks8g&X-Amz-Signature=a7cc615fccbf4a735645ea37d95d63755edba5c28777ac49361263494fc88bbc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOF4BRZ5%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIQCxkBGYl6xpksLX%2FO4Kdmd3HMp65CMPQPB8U5Pq8GmOMgIgZtXH78vXTc2hXj8bsEPHqEuWrv8XDAm%2BZs7cBMb4HUIq%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDMBtgYdgISZskLgIbyrcAyNHWf3LTvLjMwjO6WyvhX8zHJSfkyD2nKZPwUWes46yjLixjnnzwd7I13%2F7PIOlqR7CcHpSvkbFcGFTvOwtd5SY3YNSQ4ycYtHP%2FsEwQll544ZjTYE2wHhZi%2F1GIWK9xQp6dZUyk0t1KGUNXXzKkiSNIsG4L1FIVMssZBnRW9DeC4r3k7ChwT8NAmJ3WgkiVPIPKhsLstgUx5zxqbMHFBnsQes9vLILa0SbHeVBxgC%2FCijHwBneNMwZSJdu0dcrLyLy8%2FPlvNoCTc1pWbbVGI%2FdCv6eYun8XRn72bj%2BiOjHm%2Bz4eAJgDwqk4I%2BVVBKdOy2yIzOTAlTozqGlMabGPUwxBYBjocaA%2F1Qv9%2FS7uLKM%2B8KkoZM1k6Ns2D8cZ1F%2BXSk5dpe7o4P9cJM2rlQUXmGaYsK0B7pc5uoTnTk%2BeEufjA66KTZll2S8eQ1aAjYrfPqcDHD04mA4yEubsuwiGC2sxMc%2FmPAL7SeS5fkzfjUTWd%2BIaqb7uWOz3UUMGZy9Cyna%2BOl1NIML6WqP3BKdhTkIFEmaYpaAnNy3vOkseGJGRFLVZhENwXCcBf%2Befh866ZF4chTeWe798OKqbTEYkpNtktPWEzwHAwSzp0o2x9GTFy72P5OAEFqkDsAPMM7Z%2BtQGOqUBZjuQv%2FBk0x5rAY6Zm4dZYDnfUVtNxBBZWy9If6S6PFYMKtf%2Bah%2BqFcZSBHwAHOeHNTv4AoOz4jJDsFKPikSdRXrz2N%2BaJKviFGjZ%2BzQv4W9BnaF8ebzCB8%2FNSzO1g5Qd636cfVObQ3VEMSDdBAsuYLcQyuQDhp1aNj4CT05k9RvoUbPB9yoh6HHypi2bRKCwzjrH327OfUuVKkt5MG2wxB%2BOks8g&X-Amz-Signature=656c47d12b817070b617e3836618fd67f5d6b1a18170f09e4260c90069789754&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOF4BRZ5%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIQCxkBGYl6xpksLX%2FO4Kdmd3HMp65CMPQPB8U5Pq8GmOMgIgZtXH78vXTc2hXj8bsEPHqEuWrv8XDAm%2BZs7cBMb4HUIq%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDMBtgYdgISZskLgIbyrcAyNHWf3LTvLjMwjO6WyvhX8zHJSfkyD2nKZPwUWes46yjLixjnnzwd7I13%2F7PIOlqR7CcHpSvkbFcGFTvOwtd5SY3YNSQ4ycYtHP%2FsEwQll544ZjTYE2wHhZi%2F1GIWK9xQp6dZUyk0t1KGUNXXzKkiSNIsG4L1FIVMssZBnRW9DeC4r3k7ChwT8NAmJ3WgkiVPIPKhsLstgUx5zxqbMHFBnsQes9vLILa0SbHeVBxgC%2FCijHwBneNMwZSJdu0dcrLyLy8%2FPlvNoCTc1pWbbVGI%2FdCv6eYun8XRn72bj%2BiOjHm%2Bz4eAJgDwqk4I%2BVVBKdOy2yIzOTAlTozqGlMabGPUwxBYBjocaA%2F1Qv9%2FS7uLKM%2B8KkoZM1k6Ns2D8cZ1F%2BXSk5dpe7o4P9cJM2rlQUXmGaYsK0B7pc5uoTnTk%2BeEufjA66KTZll2S8eQ1aAjYrfPqcDHD04mA4yEubsuwiGC2sxMc%2FmPAL7SeS5fkzfjUTWd%2BIaqb7uWOz3UUMGZy9Cyna%2BOl1NIML6WqP3BKdhTkIFEmaYpaAnNy3vOkseGJGRFLVZhENwXCcBf%2Befh866ZF4chTeWe798OKqbTEYkpNtktPWEzwHAwSzp0o2x9GTFy72P5OAEFqkDsAPMM7Z%2BtQGOqUBZjuQv%2FBk0x5rAY6Zm4dZYDnfUVtNxBBZWy9If6S6PFYMKtf%2Bah%2BqFcZSBHwAHOeHNTv4AoOz4jJDsFKPikSdRXrz2N%2BaJKviFGjZ%2BzQv4W9BnaF8ebzCB8%2FNSzO1g5Qd636cfVObQ3VEMSDdBAsuYLcQyuQDhp1aNj4CT05k9RvoUbPB9yoh6HHypi2bRKCwzjrH327OfUuVKkt5MG2wxB%2BOks8g&X-Amz-Signature=b7ad9fa120f2108bd6cfb31732767594c6f3d37219a6c8dfdd9441c399d006e0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6G3CJQD%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIEq%2FAI6D96xSURiKHJRwXDvAGFl1ysY3wM4PVYhTLdl8AiEAtYg8uuOp1KF4hcJWNpWyca48uFyvpRV9giXCZO7ZgG4q%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDLbFQC4u%2FcTuDghhXyrcA36Kpev279OCie65m2zWjnYTvvwReU5FZ6CUVlYBolAHcg4H5raOqsj1OxlurDPZNffAsTWbeccNGxeylChyJQXMbOZ%2Bj5%2B0FUMikJ%2BK1BIXRWK%2B86NmYo4%2Faa%2FMQQwdqvVJa2Uo0AEz73T6hugciSx6hC4jDEdQlFnwxfPeTryIFsECK%2BQBcv1ylyYnta9WpBGeaK4wtXjO6X%2F%2Bks%2FXboQ%2F6hx3DWO%2FdN6bbmYwsLcw28L81tt3hK7jJcX4Atp2XTB3hqLVmxhvv4GPtJAKxKAbkJ4Qe5M4SOuzbgr0R7gBVOuRR0o5PJoKOPFFuu%2BlprYNWxR5TGSJ3HkN984QtJMkrhl3GDbSO1jtBtlDyuUbpWlwnUA7kPYuObOOagj0KaMczxwEqOmPrGFP67nhGg6XLlrL9OwBlaHzjClzBIGTtuZt%2BZud9pCOJpMxXB0%2FkoB17%2BN7pqPwpA%2FuaFuIR%2BrO%2Bmf9QA7aSYseYlYHlZw%2BJzvC7wpXukQuyb2VsPKv0Rgau8AZAdROu4Ya8WOINAOwkdywK10BnkugYViKvYaqborF1zgXrc%2FLb2jS%2FvAFcMknpBsXkMiXTDvoHcsK0K4vS%2Fiq%2BYChOUWEW3QlIfxQy9VAhFMYomxI3jtFMLTb%2BtQGOqUBgulSl6uCyeB2YrWneWocNL2xjMpQ4ZIycyVWBtWE%2FolFTCT7T%2FpX%2FuGWQ6k8d7G3%2F78tUsGyrENzjRRzpcHoNTKXN43uu4bU1bG29qJSZ5Pqt626HAM9Qie%2FXms2ZGTUqi3pqak87uuMjDcLykQLIEwy%2FyUOeuufGlceIbNHiKWMraGZFDkqCp14Zw4YCZoSqHcj1wCFadI3%2F1PW1VLGbFRcrZMS&X-Amz-Signature=e2ff7fb57b8cb876f3a6c1329611869c4b2386add4df0055650282f2b7c0faad&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6G3CJQD%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIEq%2FAI6D96xSURiKHJRwXDvAGFl1ysY3wM4PVYhTLdl8AiEAtYg8uuOp1KF4hcJWNpWyca48uFyvpRV9giXCZO7ZgG4q%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDLbFQC4u%2FcTuDghhXyrcA36Kpev279OCie65m2zWjnYTvvwReU5FZ6CUVlYBolAHcg4H5raOqsj1OxlurDPZNffAsTWbeccNGxeylChyJQXMbOZ%2Bj5%2B0FUMikJ%2BK1BIXRWK%2B86NmYo4%2Faa%2FMQQwdqvVJa2Uo0AEz73T6hugciSx6hC4jDEdQlFnwxfPeTryIFsECK%2BQBcv1ylyYnta9WpBGeaK4wtXjO6X%2F%2Bks%2FXboQ%2F6hx3DWO%2FdN6bbmYwsLcw28L81tt3hK7jJcX4Atp2XTB3hqLVmxhvv4GPtJAKxKAbkJ4Qe5M4SOuzbgr0R7gBVOuRR0o5PJoKOPFFuu%2BlprYNWxR5TGSJ3HkN984QtJMkrhl3GDbSO1jtBtlDyuUbpWlwnUA7kPYuObOOagj0KaMczxwEqOmPrGFP67nhGg6XLlrL9OwBlaHzjClzBIGTtuZt%2BZud9pCOJpMxXB0%2FkoB17%2BN7pqPwpA%2FuaFuIR%2BrO%2Bmf9QA7aSYseYlYHlZw%2BJzvC7wpXukQuyb2VsPKv0Rgau8AZAdROu4Ya8WOINAOwkdywK10BnkugYViKvYaqborF1zgXrc%2FLb2jS%2FvAFcMknpBsXkMiXTDvoHcsK0K4vS%2Fiq%2BYChOUWEW3QlIfxQy9VAhFMYomxI3jtFMLTb%2BtQGOqUBgulSl6uCyeB2YrWneWocNL2xjMpQ4ZIycyVWBtWE%2FolFTCT7T%2FpX%2FuGWQ6k8d7G3%2F78tUsGyrENzjRRzpcHoNTKXN43uu4bU1bG29qJSZ5Pqt626HAM9Qie%2FXms2ZGTUqi3pqak87uuMjDcLykQLIEwy%2FyUOeuufGlceIbNHiKWMraGZFDkqCp14Zw4YCZoSqHcj1wCFadI3%2F1PW1VLGbFRcrZMS&X-Amz-Signature=093bdabec3fb902c5e10835e74b5685f0e08dfe408b28ee66d19a13ff5c03631&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6G3CJQD%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIEq%2FAI6D96xSURiKHJRwXDvAGFl1ysY3wM4PVYhTLdl8AiEAtYg8uuOp1KF4hcJWNpWyca48uFyvpRV9giXCZO7ZgG4q%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDLbFQC4u%2FcTuDghhXyrcA36Kpev279OCie65m2zWjnYTvvwReU5FZ6CUVlYBolAHcg4H5raOqsj1OxlurDPZNffAsTWbeccNGxeylChyJQXMbOZ%2Bj5%2B0FUMikJ%2BK1BIXRWK%2B86NmYo4%2Faa%2FMQQwdqvVJa2Uo0AEz73T6hugciSx6hC4jDEdQlFnwxfPeTryIFsECK%2BQBcv1ylyYnta9WpBGeaK4wtXjO6X%2F%2Bks%2FXboQ%2F6hx3DWO%2FdN6bbmYwsLcw28L81tt3hK7jJcX4Atp2XTB3hqLVmxhvv4GPtJAKxKAbkJ4Qe5M4SOuzbgr0R7gBVOuRR0o5PJoKOPFFuu%2BlprYNWxR5TGSJ3HkN984QtJMkrhl3GDbSO1jtBtlDyuUbpWlwnUA7kPYuObOOagj0KaMczxwEqOmPrGFP67nhGg6XLlrL9OwBlaHzjClzBIGTtuZt%2BZud9pCOJpMxXB0%2FkoB17%2BN7pqPwpA%2FuaFuIR%2BrO%2Bmf9QA7aSYseYlYHlZw%2BJzvC7wpXukQuyb2VsPKv0Rgau8AZAdROu4Ya8WOINAOwkdywK10BnkugYViKvYaqborF1zgXrc%2FLb2jS%2FvAFcMknpBsXkMiXTDvoHcsK0K4vS%2Fiq%2BYChOUWEW3QlIfxQy9VAhFMYomxI3jtFMLTb%2BtQGOqUBgulSl6uCyeB2YrWneWocNL2xjMpQ4ZIycyVWBtWE%2FolFTCT7T%2FpX%2FuGWQ6k8d7G3%2F78tUsGyrENzjRRzpcHoNTKXN43uu4bU1bG29qJSZ5Pqt626HAM9Qie%2FXms2ZGTUqi3pqak87uuMjDcLykQLIEwy%2FyUOeuufGlceIbNHiKWMraGZFDkqCp14Zw4YCZoSqHcj1wCFadI3%2F1PW1VLGbFRcrZMS&X-Amz-Signature=c536f0f8212ae73928965c3e0042ae0af9ef3346b24d68247aef600dade121e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6G3CJQD%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIEq%2FAI6D96xSURiKHJRwXDvAGFl1ysY3wM4PVYhTLdl8AiEAtYg8uuOp1KF4hcJWNpWyca48uFyvpRV9giXCZO7ZgG4q%2FwMIPhAAGgw2Mzc0MjMxODM4MDUiDLbFQC4u%2FcTuDghhXyrcA36Kpev279OCie65m2zWjnYTvvwReU5FZ6CUVlYBolAHcg4H5raOqsj1OxlurDPZNffAsTWbeccNGxeylChyJQXMbOZ%2Bj5%2B0FUMikJ%2BK1BIXRWK%2B86NmYo4%2Faa%2FMQQwdqvVJa2Uo0AEz73T6hugciSx6hC4jDEdQlFnwxfPeTryIFsECK%2BQBcv1ylyYnta9WpBGeaK4wtXjO6X%2F%2Bks%2FXboQ%2F6hx3DWO%2FdN6bbmYwsLcw28L81tt3hK7jJcX4Atp2XTB3hqLVmxhvv4GPtJAKxKAbkJ4Qe5M4SOuzbgr0R7gBVOuRR0o5PJoKOPFFuu%2BlprYNWxR5TGSJ3HkN984QtJMkrhl3GDbSO1jtBtlDyuUbpWlwnUA7kPYuObOOagj0KaMczxwEqOmPrGFP67nhGg6XLlrL9OwBlaHzjClzBIGTtuZt%2BZud9pCOJpMxXB0%2FkoB17%2BN7pqPwpA%2FuaFuIR%2BrO%2Bmf9QA7aSYseYlYHlZw%2BJzvC7wpXukQuyb2VsPKv0Rgau8AZAdROu4Ya8WOINAOwkdywK10BnkugYViKvYaqborF1zgXrc%2FLb2jS%2FvAFcMknpBsXkMiXTDvoHcsK0K4vS%2Fiq%2BYChOUWEW3QlIfxQy9VAhFMYomxI3jtFMLTb%2BtQGOqUBgulSl6uCyeB2YrWneWocNL2xjMpQ4ZIycyVWBtWE%2FolFTCT7T%2FpX%2FuGWQ6k8d7G3%2F78tUsGyrENzjRRzpcHoNTKXN43uu4bU1bG29qJSZ5Pqt626HAM9Qie%2FXms2ZGTUqi3pqak87uuMjDcLykQLIEwy%2FyUOeuufGlceIbNHiKWMraGZFDkqCp14Zw4YCZoSqHcj1wCFadI3%2F1PW1VLGbFRcrZMS&X-Amz-Signature=008c2830a6e4083207dcd273f4af5831ca9c804970b28a379260dbe3e7364448&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XOTF3INC%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135907Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJHMEUCIAxKVcEkEFSJaZOf90gYpjXOnM%2FbsCR9TdhYzCPi9Cv5AiEAv6Di9m%2B4ooGLNiwmYlqMeH978o1L%2Bflm0sfB3I5mz8kq%2FwMIPRAAGgw2Mzc0MjMxODM4MDUiDJsUi3QxYKU27%2FllmCrcA4gZYJCvYn%2Bg%2FD8akbxI41nAM%2BxuZR%2Bim%2BToG1zRIH%2BFd0KrKcsgnUYkmAnILHLVxC%2FEpPd0f5tWXaUtyRcTzysog4VWBS3aupZpK0zgidJcmUJoUZENApkQLj1l4PDkwpy37Ehvqw2Ijqn4fpCSqz3JXIjvCaJUREKBR6J4ILZeyk4As2g8Y9DiHh9%2B9%2BhZhYp11FwzWObp%2FWmgm%2BmgXIqSTnlVnrYGcSlT6dG5vcZ%2Bo5FHdFAEfBsrkFjbZbdXzJpip36Js1GYbopVn7gvZUn3PGPGLTDaC3wRq0xJilNailmsyJc%2B8rguDVT%2B7tRSqR9IOeuxX4PpSicifoFZGBpVL1dKlHAQNgzknIIJr7SPfNENYRFJlqfQHZLScb2fg3OBn%2FS%2BcUy4PHZ4QW12zWkiiuDm0%2BWNJbUQMhiw93AcYQCm6fhGrTofw%2FMsDpKz1mXLeI2OQbCt1kse6jl0PaWlsVjCW3opk0ZJVh5NNWNvevaHAEaZlqChSCdPFdoqM2CYxABd49wd8cwIotW6c1IXw2gff4FBQp5tRqUQvBAx35EKshUXxvt29IWhgjkV2ydJUwURT%2B%2FZYmxbYH3%2Fs7%2FKnrjyIfHfeOBcYVDMR%2BiIF%2FAy%2FGiTmKlzMUhJMP%2FZ%2BtQGOqUB3xkeOt6Qu%2Fj%2Fq8Nv%2FtFODrA%2B5m30VJ%2FjUM%2FtC4OeRMwvamif2azvJn%2B%2FFRgUohFrxz%2FDaDHA9q7sO4XtTkmzczySW4qY5SOz1UiFSEhU%2Bhrw8QU2axbxbaajxS5gVWcFZ7%2FpgiJeC6Kf3cATAwVbUZCm4ckVl1cEFFP4BpvBtmwOpTOjtG07fPwBIVc8itYyXrc5buMm9maCNFJDMTUggNdqgvk2&X-Amz-Signature=471615fc3837c345122f6c3990eff49605d70196ba031b10a3efb0431f296133&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665MVQIJVB%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135908Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJGMEQCIDtao4OdzbF6Q22fb%2FoxJkgRjGo5EplPWS%2F25D1OlSJ2AiAoLiicttHctMVQ1Bx3LSrlmukrXW7s1DjU2N%2Bl7AzIwSr%2FAwg%2BEAAaDDYzNzQyMzE4MzgwNSIMTcTrhteSEyDv3RplKtwDBDpsXluSopHugxKfzTC3FcnHFCc1thGB%2FDxyMTC3jzaXG3DHGi6kWGjdiwmKNPWKLsLSf3RA7JrxJ4327rJvPew7WOgRfSjYqENAcuR2o0SZ3dea2nFL6j%2BM80DJdvk2K%2BMaj9KNU3TtwKiWmgoXs%2FgJKwLm7F%2FVjhguH7cbCYD7xzNHkf3R2Tf8uehfCOT4CYUKm6H0NWcR1wR7PuGgV7iSAjGT%2BN3JKKsOoaH103ju%2BmkuJV7pFwDXAeq4ruDP9XpkEpFkY6zCutIhmSXvYOHG4%2FVBGOXqcxh%2FdrwbaLFUCY2VFCgiPRg0XyPlnb6WWDemV0nbi3Vn1%2FsI2HRtsIsRmj7KSvC6y5fDygjptK4bFa67yPb1Z%2BKYdRl8gSjulGxBAExoC99DOFjgFFF450Nj7fgpKt%2BN0074qRI1iwqAEACvjA9UY5v%2Fuhv0jn5wri4LJiklu4Xvk4iw%2BYz1SaxibigfupSxZmeZCOHmpgMmHkQt%2BDp2FFKTMahl4pa83cZHOFVI4iYOjcIeSu14096od%2FVqIesXjeVJwDA8YUFr7W4SrDiY8s4dfM5J088ZA7Fn4wWRbEq6soG8phvoAWQl6bqO6%2Bfbs3OSzeOB5z4ZnIxbHzLxt14Ws9MwmNz61AY6pgF5WpyNtm3zc44uE5jXTMiNTT9mfklEYMi7Tn8%2FeF8TGFq9lLTZPd6YcE36h2yMHL1EDoqPGZapjQ1RGRRdLlZmi1Fd508DYIv1IBFLerX2Wrq8OetZKosLD4CAkMBZxbJoCSDTXdpPb8LSG1kHBdT9MhGRP8MV%2BV1kak%2BD72QgSJf%2BCbJeb7wbs2JrA%2FOIWPgUOr05uVFPb%2BqaUmPJbKG9sjdU88xV&X-Amz-Signature=8bc8ac32a814261fbb47fbed32f83ca3e8dc720fa35a9c63aec7c73b4786b5ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665MVQIJVB%2F20260907%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260907T135908Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHUaCXVzLXdlc3QtMiJGMEQCIDtao4OdzbF6Q22fb%2FoxJkgRjGo5EplPWS%2F25D1OlSJ2AiAoLiicttHctMVQ1Bx3LSrlmukrXW7s1DjU2N%2Bl7AzIwSr%2FAwg%2BEAAaDDYzNzQyMzE4MzgwNSIMTcTrhteSEyDv3RplKtwDBDpsXluSopHugxKfzTC3FcnHFCc1thGB%2FDxyMTC3jzaXG3DHGi6kWGjdiwmKNPWKLsLSf3RA7JrxJ4327rJvPew7WOgRfSjYqENAcuR2o0SZ3dea2nFL6j%2BM80DJdvk2K%2BMaj9KNU3TtwKiWmgoXs%2FgJKwLm7F%2FVjhguH7cbCYD7xzNHkf3R2Tf8uehfCOT4CYUKm6H0NWcR1wR7PuGgV7iSAjGT%2BN3JKKsOoaH103ju%2BmkuJV7pFwDXAeq4ruDP9XpkEpFkY6zCutIhmSXvYOHG4%2FVBGOXqcxh%2FdrwbaLFUCY2VFCgiPRg0XyPlnb6WWDemV0nbi3Vn1%2FsI2HRtsIsRmj7KSvC6y5fDygjptK4bFa67yPb1Z%2BKYdRl8gSjulGxBAExoC99DOFjgFFF450Nj7fgpKt%2BN0074qRI1iwqAEACvjA9UY5v%2Fuhv0jn5wri4LJiklu4Xvk4iw%2BYz1SaxibigfupSxZmeZCOHmpgMmHkQt%2BDp2FFKTMahl4pa83cZHOFVI4iYOjcIeSu14096od%2FVqIesXjeVJwDA8YUFr7W4SrDiY8s4dfM5J088ZA7Fn4wWRbEq6soG8phvoAWQl6bqO6%2Bfbs3OSzeOB5z4ZnIxbHzLxt14Ws9MwmNz61AY6pgF5WpyNtm3zc44uE5jXTMiNTT9mfklEYMi7Tn8%2FeF8TGFq9lLTZPd6YcE36h2yMHL1EDoqPGZapjQ1RGRRdLlZmi1Fd508DYIv1IBFLerX2Wrq8OetZKosLD4CAkMBZxbJoCSDTXdpPb8LSG1kHBdT9MhGRP8MV%2BV1kak%2BD72QgSJf%2BCbJeb7wbs2JrA%2FOIWPgUOr05uVFPb%2BqaUmPJbKG9sjdU88xV&X-Amz-Signature=cbaf55b82f037cb570da9a2597a424a98a483026951b677dae32c99247b01cb7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
