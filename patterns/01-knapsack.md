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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPG4HTNX%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIBiweCCJPjdQzZ81Jwqmf8gxyeUtU0u74hU00A4k2UpIAiEAqk%2ByPAoK2U3bknDH1yWtR53iq0QI%2F%2FPrz6ZoPZZ%2FRYcq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDBRwIILRSQsicII1ZSrcAx3I27B1zI6EYAD4E6dC1TP6kaPxiisR2uIbVRUtvntnBUQqMUQYO7rdQt0yWj%2Fg6go1wprCjkgTWE3K9vMLsc76LTqIDFWDgKSK9R6rtAaZA4%2FLCMKwrbck7ePc1nFti6RBWsOVt5QY%2BY1P72YzUVWNY%2Fg7UdToofTC8sduIdxBrLc2q790wx%2BP7eK28ovAt277yQll%2FwAeeryHI%2FmM6bceh9tX46f4prYpyGN8NbHl1qdp%2FVNZe5k0thk%2F7695tFh%2FtJTcziwwTUaR56KnrJrAzkekZBMzjjFs5jWb4r%2FoGy23tICi1XkJmp9mv%2F7ZRYwuwxL7jB3aJbsBXHGrCfPcgWAbQQPeO3VSOVfRsV9hzkkVzG5o70OoKS%2BOZLCYlCbryIodPuzL5uTqhbQQk1I7Opk3BW8paNMJBcbiOWw0QNSvCHXvXjOX%2BRwX1LaFWcyrzWQOAkg%2BSsAajSbd654v8b1chs1GbWUfRONGW7UQ5CKP4qzfcSOgeLVHnEuwG%2FzNtwWPnBEZA4vjoijVSVomFNNATXsD3E19PUlooTLV3AI49R2%2Bzu3i%2BXYpAC03ca7PcDkbJMkLyOg6fYzExKRH%2BmFAj%2Bscn7%2BS3sNu3GJH0JjyzSJeXw8z3IAtMKav%2FNcGOqUBRz6eyVQY0Hvsf10vszVcLUlocIudzZkV%2Fhj%2F2VtP6fuo%2BUziqj2zHZUTiHGBVVCk%2B1DcBjTXcWyRnT%2BSxiJAd9IJgB9zte0LZ7K7bqxnkzcbY1QkwxZXrwlvu%2FOtDG%2BsbgzzfGQQBeO4GCrUD8HzvrMIFfWCae7zRc3RIK4ECU7GARJHQ1Wy9rYFM1RFQMCHR6BAo2MDYkpmj%2B1eLXffhqYHgnlt&X-Amz-Signature=99be0530dd9078270ab0e16e13208e9ef24d8c7188fab8d259886c0c9736d71c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPG4HTNX%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIBiweCCJPjdQzZ81Jwqmf8gxyeUtU0u74hU00A4k2UpIAiEAqk%2ByPAoK2U3bknDH1yWtR53iq0QI%2F%2FPrz6ZoPZZ%2FRYcq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDBRwIILRSQsicII1ZSrcAx3I27B1zI6EYAD4E6dC1TP6kaPxiisR2uIbVRUtvntnBUQqMUQYO7rdQt0yWj%2Fg6go1wprCjkgTWE3K9vMLsc76LTqIDFWDgKSK9R6rtAaZA4%2FLCMKwrbck7ePc1nFti6RBWsOVt5QY%2BY1P72YzUVWNY%2Fg7UdToofTC8sduIdxBrLc2q790wx%2BP7eK28ovAt277yQll%2FwAeeryHI%2FmM6bceh9tX46f4prYpyGN8NbHl1qdp%2FVNZe5k0thk%2F7695tFh%2FtJTcziwwTUaR56KnrJrAzkekZBMzjjFs5jWb4r%2FoGy23tICi1XkJmp9mv%2F7ZRYwuwxL7jB3aJbsBXHGrCfPcgWAbQQPeO3VSOVfRsV9hzkkVzG5o70OoKS%2BOZLCYlCbryIodPuzL5uTqhbQQk1I7Opk3BW8paNMJBcbiOWw0QNSvCHXvXjOX%2BRwX1LaFWcyrzWQOAkg%2BSsAajSbd654v8b1chs1GbWUfRONGW7UQ5CKP4qzfcSOgeLVHnEuwG%2FzNtwWPnBEZA4vjoijVSVomFNNATXsD3E19PUlooTLV3AI49R2%2Bzu3i%2BXYpAC03ca7PcDkbJMkLyOg6fYzExKRH%2BmFAj%2Bscn7%2BS3sNu3GJH0JjyzSJeXw8z3IAtMKav%2FNcGOqUBRz6eyVQY0Hvsf10vszVcLUlocIudzZkV%2Fhj%2F2VtP6fuo%2BUziqj2zHZUTiHGBVVCk%2B1DcBjTXcWyRnT%2BSxiJAd9IJgB9zte0LZ7K7bqxnkzcbY1QkwxZXrwlvu%2FOtDG%2BsbgzzfGQQBeO4GCrUD8HzvrMIFfWCae7zRc3RIK4ECU7GARJHQ1Wy9rYFM1RFQMCHR6BAo2MDYkpmj%2B1eLXffhqYHgnlt&X-Amz-Signature=ccf3c0e76917979a0b0570939387486a860e5de85bf8e1df6bb60772368a5444&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WPG4HTNX%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIBiweCCJPjdQzZ81Jwqmf8gxyeUtU0u74hU00A4k2UpIAiEAqk%2ByPAoK2U3bknDH1yWtR53iq0QI%2F%2FPrz6ZoPZZ%2FRYcq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDBRwIILRSQsicII1ZSrcAx3I27B1zI6EYAD4E6dC1TP6kaPxiisR2uIbVRUtvntnBUQqMUQYO7rdQt0yWj%2Fg6go1wprCjkgTWE3K9vMLsc76LTqIDFWDgKSK9R6rtAaZA4%2FLCMKwrbck7ePc1nFti6RBWsOVt5QY%2BY1P72YzUVWNY%2Fg7UdToofTC8sduIdxBrLc2q790wx%2BP7eK28ovAt277yQll%2FwAeeryHI%2FmM6bceh9tX46f4prYpyGN8NbHl1qdp%2FVNZe5k0thk%2F7695tFh%2FtJTcziwwTUaR56KnrJrAzkekZBMzjjFs5jWb4r%2FoGy23tICi1XkJmp9mv%2F7ZRYwuwxL7jB3aJbsBXHGrCfPcgWAbQQPeO3VSOVfRsV9hzkkVzG5o70OoKS%2BOZLCYlCbryIodPuzL5uTqhbQQk1I7Opk3BW8paNMJBcbiOWw0QNSvCHXvXjOX%2BRwX1LaFWcyrzWQOAkg%2BSsAajSbd654v8b1chs1GbWUfRONGW7UQ5CKP4qzfcSOgeLVHnEuwG%2FzNtwWPnBEZA4vjoijVSVomFNNATXsD3E19PUlooTLV3AI49R2%2Bzu3i%2BXYpAC03ca7PcDkbJMkLyOg6fYzExKRH%2BmFAj%2Bscn7%2BS3sNu3GJH0JjyzSJeXw8z3IAtMKav%2FNcGOqUBRz6eyVQY0Hvsf10vszVcLUlocIudzZkV%2Fhj%2F2VtP6fuo%2BUziqj2zHZUTiHGBVVCk%2B1DcBjTXcWyRnT%2BSxiJAd9IJgB9zte0LZ7K7bqxnkzcbY1QkwxZXrwlvu%2FOtDG%2BsbgzzfGQQBeO4GCrUD8HzvrMIFfWCae7zRc3RIK4ECU7GARJHQ1Wy9rYFM1RFQMCHR6BAo2MDYkpmj%2B1eLXffhqYHgnlt&X-Amz-Signature=570235272bb9db218251766a9d6690eeceffbe87e94f6e47af5b6fdbc016d9c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664DS3VPK3%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJIMEYCIQDX0hV6fILvcuW%2B2%2BqVpkqGvRwPW4zvCe3Z2q9REc1vVQIhAM4nWu1zKeSgS0Wi%2FpTPj6NEkE%2FO67gpFR4K0ncD3vV7Kv8DCBgQABoMNjM3NDIzMTgzODA1IgxqMKZm3FjzFna70gIq3AO%2FoAE%2BYdaxpKXBPdAa2G%2F4UevujCADt3ui%2BE6htP0OIkvy7nvaiK4c6pmImu%2F6ZbbOuyNK7H9%2FyRyy7x7R%2F%2FFn%2FYSvOeFJxWUHPpZ3vexQjUGD0zBnWcI%2F2VtpnN2mZLzucdecsmST7qT3MV0DC%2Fb3pMNYQ8WVe8vvTwfBOYj216toSjLknrKlf6hUKKfTuRpTGZf%2FSe0CtqfleeU1H4ZxYuNY1XzhoRy%2Fkg6jhOgZsXJIFmkn5yfL4pjgveC4R%2FE9homXKSuD7CtUMBTVdvrCXZOmxaVswEdiYPQfiJnPUOZgExy1WPyXwOq4Gwf4N1l1aa6jMx20DHDrvX%2FzOpbcMUTtSvRKTicaZO8IOqL4K9joeLXTOEr%2FDP%2BrSbs%2Fh7Bwy8w9Py5lhLAKTicHNMziGfyF7sgu38O%2FEP6aGCygxh8d5QDiJP%2BjcJNd6GgfwC4xowqDvRUzNsPYmEBstujSuQlZH9V%2FVqWjyykCNA9ZRYxnj5CzgRYqqrMTEcEJ%2FRBmo%2Boxf69yEs9uEEyJCFPvF3pAiLAhucM07C%2FshAOcQlge4QKTvS3vYE%2FgF453Iy8w4JRezZCu63OReRYiPZg6%2BVD9QdAQhUZWprE21hMySzPzz%2Fd2ADsRvBvI6DDzrvzXBjqkAQpunoQN7gV0oNudg%2FjdWVi4ECt4aVp6D6VNfpF4fOY0Zke4FCUEB7GVJPf1fACYSshoqmTlmcJI6vlrrloE%2BYq8CXcii%2BnvY4BA5ssTszxeguDjdLyQZ0BEXguSxkzzBXOjqdfobiYPI4ioW8ItO5GF7eLD%2BshBU0n%2BDyTYqDrId2xE%2FYxcymkCzLkMyyrT1XcYA63qNUWCX45cEqz7ZymX%2BAdp&X-Amz-Signature=cfe7d6009e4167e98b8b2234e69378d633306b19b9a0c8cc42276e2ef90adf8c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664DS3VPK3%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJIMEYCIQDX0hV6fILvcuW%2B2%2BqVpkqGvRwPW4zvCe3Z2q9REc1vVQIhAM4nWu1zKeSgS0Wi%2FpTPj6NEkE%2FO67gpFR4K0ncD3vV7Kv8DCBgQABoMNjM3NDIzMTgzODA1IgxqMKZm3FjzFna70gIq3AO%2FoAE%2BYdaxpKXBPdAa2G%2F4UevujCADt3ui%2BE6htP0OIkvy7nvaiK4c6pmImu%2F6ZbbOuyNK7H9%2FyRyy7x7R%2F%2FFn%2FYSvOeFJxWUHPpZ3vexQjUGD0zBnWcI%2F2VtpnN2mZLzucdecsmST7qT3MV0DC%2Fb3pMNYQ8WVe8vvTwfBOYj216toSjLknrKlf6hUKKfTuRpTGZf%2FSe0CtqfleeU1H4ZxYuNY1XzhoRy%2Fkg6jhOgZsXJIFmkn5yfL4pjgveC4R%2FE9homXKSuD7CtUMBTVdvrCXZOmxaVswEdiYPQfiJnPUOZgExy1WPyXwOq4Gwf4N1l1aa6jMx20DHDrvX%2FzOpbcMUTtSvRKTicaZO8IOqL4K9joeLXTOEr%2FDP%2BrSbs%2Fh7Bwy8w9Py5lhLAKTicHNMziGfyF7sgu38O%2FEP6aGCygxh8d5QDiJP%2BjcJNd6GgfwC4xowqDvRUzNsPYmEBstujSuQlZH9V%2FVqWjyykCNA9ZRYxnj5CzgRYqqrMTEcEJ%2FRBmo%2Boxf69yEs9uEEyJCFPvF3pAiLAhucM07C%2FshAOcQlge4QKTvS3vYE%2FgF453Iy8w4JRezZCu63OReRYiPZg6%2BVD9QdAQhUZWprE21hMySzPzz%2Fd2ADsRvBvI6DDzrvzXBjqkAQpunoQN7gV0oNudg%2FjdWVi4ECt4aVp6D6VNfpF4fOY0Zke4FCUEB7GVJPf1fACYSshoqmTlmcJI6vlrrloE%2BYq8CXcii%2BnvY4BA5ssTszxeguDjdLyQZ0BEXguSxkzzBXOjqdfobiYPI4ioW8ItO5GF7eLD%2BshBU0n%2BDyTYqDrId2xE%2FYxcymkCzLkMyyrT1XcYA63qNUWCX45cEqz7ZymX%2BAdp&X-Amz-Signature=616c26b177790d1bf7036fad9bc7c51ef6a7f4bfba1e3c7173dfe333af618bd6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664DS3VPK3%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJIMEYCIQDX0hV6fILvcuW%2B2%2BqVpkqGvRwPW4zvCe3Z2q9REc1vVQIhAM4nWu1zKeSgS0Wi%2FpTPj6NEkE%2FO67gpFR4K0ncD3vV7Kv8DCBgQABoMNjM3NDIzMTgzODA1IgxqMKZm3FjzFna70gIq3AO%2FoAE%2BYdaxpKXBPdAa2G%2F4UevujCADt3ui%2BE6htP0OIkvy7nvaiK4c6pmImu%2F6ZbbOuyNK7H9%2FyRyy7x7R%2F%2FFn%2FYSvOeFJxWUHPpZ3vexQjUGD0zBnWcI%2F2VtpnN2mZLzucdecsmST7qT3MV0DC%2Fb3pMNYQ8WVe8vvTwfBOYj216toSjLknrKlf6hUKKfTuRpTGZf%2FSe0CtqfleeU1H4ZxYuNY1XzhoRy%2Fkg6jhOgZsXJIFmkn5yfL4pjgveC4R%2FE9homXKSuD7CtUMBTVdvrCXZOmxaVswEdiYPQfiJnPUOZgExy1WPyXwOq4Gwf4N1l1aa6jMx20DHDrvX%2FzOpbcMUTtSvRKTicaZO8IOqL4K9joeLXTOEr%2FDP%2BrSbs%2Fh7Bwy8w9Py5lhLAKTicHNMziGfyF7sgu38O%2FEP6aGCygxh8d5QDiJP%2BjcJNd6GgfwC4xowqDvRUzNsPYmEBstujSuQlZH9V%2FVqWjyykCNA9ZRYxnj5CzgRYqqrMTEcEJ%2FRBmo%2Boxf69yEs9uEEyJCFPvF3pAiLAhucM07C%2FshAOcQlge4QKTvS3vYE%2FgF453Iy8w4JRezZCu63OReRYiPZg6%2BVD9QdAQhUZWprE21hMySzPzz%2Fd2ADsRvBvI6DDzrvzXBjqkAQpunoQN7gV0oNudg%2FjdWVi4ECt4aVp6D6VNfpF4fOY0Zke4FCUEB7GVJPf1fACYSshoqmTlmcJI6vlrrloE%2BYq8CXcii%2BnvY4BA5ssTszxeguDjdLyQZ0BEXguSxkzzBXOjqdfobiYPI4ioW8ItO5GF7eLD%2BshBU0n%2BDyTYqDrId2xE%2FYxcymkCzLkMyyrT1XcYA63qNUWCX45cEqz7ZymX%2BAdp&X-Amz-Signature=933068b2a4cdcb932a61721b5714df3e444a9ee331aba7bcbf714dda1555e0b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664DS3VPK3%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJIMEYCIQDX0hV6fILvcuW%2B2%2BqVpkqGvRwPW4zvCe3Z2q9REc1vVQIhAM4nWu1zKeSgS0Wi%2FpTPj6NEkE%2FO67gpFR4K0ncD3vV7Kv8DCBgQABoMNjM3NDIzMTgzODA1IgxqMKZm3FjzFna70gIq3AO%2FoAE%2BYdaxpKXBPdAa2G%2F4UevujCADt3ui%2BE6htP0OIkvy7nvaiK4c6pmImu%2F6ZbbOuyNK7H9%2FyRyy7x7R%2F%2FFn%2FYSvOeFJxWUHPpZ3vexQjUGD0zBnWcI%2F2VtpnN2mZLzucdecsmST7qT3MV0DC%2Fb3pMNYQ8WVe8vvTwfBOYj216toSjLknrKlf6hUKKfTuRpTGZf%2FSe0CtqfleeU1H4ZxYuNY1XzhoRy%2Fkg6jhOgZsXJIFmkn5yfL4pjgveC4R%2FE9homXKSuD7CtUMBTVdvrCXZOmxaVswEdiYPQfiJnPUOZgExy1WPyXwOq4Gwf4N1l1aa6jMx20DHDrvX%2FzOpbcMUTtSvRKTicaZO8IOqL4K9joeLXTOEr%2FDP%2BrSbs%2Fh7Bwy8w9Py5lhLAKTicHNMziGfyF7sgu38O%2FEP6aGCygxh8d5QDiJP%2BjcJNd6GgfwC4xowqDvRUzNsPYmEBstujSuQlZH9V%2FVqWjyykCNA9ZRYxnj5CzgRYqqrMTEcEJ%2FRBmo%2Boxf69yEs9uEEyJCFPvF3pAiLAhucM07C%2FshAOcQlge4QKTvS3vYE%2FgF453Iy8w4JRezZCu63OReRYiPZg6%2BVD9QdAQhUZWprE21hMySzPzz%2Fd2ADsRvBvI6DDzrvzXBjqkAQpunoQN7gV0oNudg%2FjdWVi4ECt4aVp6D6VNfpF4fOY0Zke4FCUEB7GVJPf1fACYSshoqmTlmcJI6vlrrloE%2BYq8CXcii%2BnvY4BA5ssTszxeguDjdLyQZ0BEXguSxkzzBXOjqdfobiYPI4ioW8ItO5GF7eLD%2BshBU0n%2BDyTYqDrId2xE%2FYxcymkCzLkMyyrT1XcYA63qNUWCX45cEqz7ZymX%2BAdp&X-Amz-Signature=7d0260725904415f0641215f0005c7dc67c7c3bef58ee785747f261c8f21ff71&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZWOXMGYT%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIFYV9yBzN94NDLQ7%2FhoppfFzIZuy4VtYorFHGtwiqIrpAiEAmP%2FQAyHamU5ksOB9SI5iDyhE4SxKxsRtps5ytIE4YxUq%2FwMIGRAAGgw2Mzc0MjMxODM4MDUiDAc3GhzNqrtPK1FTbCrcAwzoPYM3EbmPNHvUfiU8eaUcGwqOd3z7IiZ6gwRBDRTHyPo2HOA%2Fo9HOk0ko1N%2Bjh86jeTJ26QMc2bk7QffmqNNgXOYP2Wif0Qp%2FACQjhfVrEWZvck%2Fam4pTYQaXyA82mUC%2BumIT672HQWAuD1GAmkAgK5vrBz6Zha4bl10%2FJbYbOn9LhVCb4C7pycqequCd0%2F6ha1NZDM%2FoC16Gi4xrOBM%2F6Mh14XC3zKnRLukgJnT7lu36UIj1Oqb1r%2FF%2FAo4hUGf6u03h858gfuvR5sBP1UhkFlAbvgZ7tApKyBWfwv9d7Ml49OGX9aLxjdZN%2FxRO2OrSoSFopmozijmLlulo5BklxA4oCeFD%2B33HqXmA4Wn%2BoZ91JcmQKoyAX0u9LiL%2FASecwGriWXhmlHGY%2FYmuHUhIkxMbQmJOL6tPmBH0P7uxDoL%2FJyj5G0IBGauXnUrt1adFVcWg%2FPZIwwsyGraBNmfFswhvAhLyxbhR0Y2bXqA8T4W3M2S%2Fyt1Wb7q605XbSdO46oAJ07PLV%2FYgH6EgK%2Bd7bQove8Wl3EstBfp4iZPCTMFEJe2TrtpFqHuWboGuUzk9Cu2288SAQZY9OAcYxpq5%2BUgMDVLEPm5aLWX7AuSgrGJ%2BMwYpWp6U777dMJ2w%2FNcGOqUBWQ21bGYPhbfVZz9gOMQcVlrEdY0lRudMdBoTmnN2bxeyZIOt7hzkuwEQ7jrYaa8F%2FT8oMX5Sx5LWPqy2v%2BG1X54wPGw90lfYdLqvPnVS9w8TQF%2FviSAZ5ICT4K9xluD7kciMy3pzor2ZnjtHL6P%2FSASfD%2FPIXtwcS7LkK7NeBYHVgbfxiPT7TLscaSHCWGsDrZ7MXXjHxSuXk%2B19eyxiwJOAFpJH&X-Amz-Signature=7b3de7f1fe1dfffa27728cd013f08351b31910c9a90bfe026f7ca9723caf2010&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646CE2JR6%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170315Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIA3KQjC0x2h%2Fkr7HSCObaLQgGx9Au%2BvLkWmG5AEoYJbqAiEAxTVOpx1zZQ3IxUtWVMWS1lEca9xUa8v95blnmz3Ja3gq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDM8sIz%2FtfPvt4MuxJyrcA9wn6zfw2gpdGPElyJL5VrC6j%2FtmwPB%2Fh76S%2FRgkkJiDhwbIT%2Bf9SYD9MjXiirW0J05ZhYuqlKGxcljC%2BXz9EDCm4%2F5VTBCSqE1Fv2dsx4UtNNzBwJJjh9mX0DUkbe%2Bodq9Fw8EN6OqJPztw%2BVk%2BnBk%2F%2FHV%2FJGrz61z6iL7KkmkeE9xM146CIL2YgtVh1O%2Bg7nszDmN%2BUpsmw%2F2S1NAsNqHXZlYgNXU1ECOSZGe31V3zdoJyLUNh4%2FDuHPXw1hZ6dddWzs%2FIGnJPKIXlchBt1UvxvOW0r81NBGJEQ2IXu%2BL2APWptvJ9UNsqoaG1FtCN1Eyp3gYuQSmMi6aHEFV5lNgpxymvijrgl1lJDjH98%2FViEPCPZEZup1puUw1263GFdb%2FHzFvNEQ51pQGJggf%2BBMoVIrcYKMV%2B8wWvRedmYqeHYkDhj9Z3Yei2tL4d8qlfnN8Um9dkXY7bHtA%2BPzDgVgxgnHBUZWZEKAeTX6sR5BZeXNJYXUKIbpkPwgFChWPQ7UYMG5aVD011fbtfSL%2BqKr7dmnL8IrPmS6KUPlXZfDwX2JeNhJyZ%2FgAjTwrAvYJqMc8sGtdGBtjGPpG8kUS3GuXTcnIDlkXbnYLF5oxsoSp%2Fs1wymb8gkBmk7eeJMPWt%2FNcGOqUBQDdrARFjVB3M6H5dYQK98CRqWoWJYvBuGKeF8PgxFsQOnaYWn%2FEclFpPss3bPrvG0Swd10zzAZp2gs93Pc88RuAfh6XGOe4FhEUwEXoUs%2BLiOryPiwTXP47ndxmZwNRT%2BTPKycPktBGsqlVhOFbOhpDCD2WUUaZn0m3Pe3g83U7%2F9rPu8R3TJZgC3WD4LlpIe%2FWO4B%2F%2Fq%2FnRgcxKKreu2v2Pm2a7&X-Amz-Signature=ed225af736e9388bd0540853f2968a2cc31f5fd6477f7c4ac74f86e6ce32e121&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46646CE2JR6%2F20261119%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261119T170315Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEFAaCXVzLXdlc3QtMiJHMEUCIA3KQjC0x2h%2Fkr7HSCObaLQgGx9Au%2BvLkWmG5AEoYJbqAiEAxTVOpx1zZQ3IxUtWVMWS1lEca9xUa8v95blnmz3Ja3gq%2FwMIGBAAGgw2Mzc0MjMxODM4MDUiDM8sIz%2FtfPvt4MuxJyrcA9wn6zfw2gpdGPElyJL5VrC6j%2FtmwPB%2Fh76S%2FRgkkJiDhwbIT%2Bf9SYD9MjXiirW0J05ZhYuqlKGxcljC%2BXz9EDCm4%2F5VTBCSqE1Fv2dsx4UtNNzBwJJjh9mX0DUkbe%2Bodq9Fw8EN6OqJPztw%2BVk%2BnBk%2F%2FHV%2FJGrz61z6iL7KkmkeE9xM146CIL2YgtVh1O%2Bg7nszDmN%2BUpsmw%2F2S1NAsNqHXZlYgNXU1ECOSZGe31V3zdoJyLUNh4%2FDuHPXw1hZ6dddWzs%2FIGnJPKIXlchBt1UvxvOW0r81NBGJEQ2IXu%2BL2APWptvJ9UNsqoaG1FtCN1Eyp3gYuQSmMi6aHEFV5lNgpxymvijrgl1lJDjH98%2FViEPCPZEZup1puUw1263GFdb%2FHzFvNEQ51pQGJggf%2BBMoVIrcYKMV%2B8wWvRedmYqeHYkDhj9Z3Yei2tL4d8qlfnN8Um9dkXY7bHtA%2BPzDgVgxgnHBUZWZEKAeTX6sR5BZeXNJYXUKIbpkPwgFChWPQ7UYMG5aVD011fbtfSL%2BqKr7dmnL8IrPmS6KUPlXZfDwX2JeNhJyZ%2FgAjTwrAvYJqMc8sGtdGBtjGPpG8kUS3GuXTcnIDlkXbnYLF5oxsoSp%2Fs1wymb8gkBmk7eeJMPWt%2FNcGOqUBQDdrARFjVB3M6H5dYQK98CRqWoWJYvBuGKeF8PgxFsQOnaYWn%2FEclFpPss3bPrvG0Swd10zzAZp2gs93Pc88RuAfh6XGOe4FhEUwEXoUs%2BLiOryPiwTXP47ndxmZwNRT%2BTPKycPktBGsqlVhOFbOhpDCD2WUUaZn0m3Pe3g83U7%2F9rPu8R3TJZgC3WD4LlpIe%2FWO4B%2F%2Fq%2FnRgcxKKreu2v2Pm2a7&X-Amz-Signature=e41ac8e5ee60073f4e9891413b17a09f5c4889a4f08db3cbb79a76490615ccc3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
