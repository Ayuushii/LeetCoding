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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WI5S5J4K%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD9L9Y9mgb5e3hikjALpvvnHKYA%2FiqGoSnM85g9VOcC8wIhAPhpBeKhYsWgprgKeLIoncOBzayeToO5kHjOwy9Nxk8RKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyFfEyULklyoFRUSAAq3AMe7KmLhnvG2Lt4zgpU74MATKgsc1G%2BNxjOC5X%2FDGI2tVJ0ew0bdfiFuKVD%2BEcHACZttzV2JXbvqF1Ji3M91nl%2BYm7NY6y2hn%2B43RNIDbW10K1al8qyiWgrHBd0Wws6wtINvdjJXEoc%2FAEUVHQk%2BYGvgBXeujveI5PjkwOH%2FM9BX10zC026cC7JjOjz%2FkFjF56kjBNI9TRzn8dWZZdDCQlBCUug3nCQde9lCWy%2FP3F%2FtcF6nd9ZZKXVMkOzhqUu7QGVev9A7qpGMAbS6NlRLXIS8JATWn5rENaOHj0cQ1kKIGPds34P9LFNOKVNCXVGXcYYzwfd0M%2BzouFnNsvMb%2F5hhIjbnt%2BPo0mPk%2BHSRWoQVNagWZm0MJ%2FvZjfnc%2Ban9KG5sHjX8gZzcke12Jk9abLi4AW6moghEB3TTuqvCN5bqNDlqLgRdvJeGl3zKwJuw5g%2BenZ1tS1sbUxMn9KbfW6Wy7%2FHlN03x0r2s%2BCW%2BHb%2BkG94zaqaao7GtSQH6At1p9ratrXiTPXkYsWoJdFVJ8ntdr4SwcyzwFvgVCWfXlAcJsupR%2Bb06%2Bmc21jgFiayfrK40x1r64n1Ly4O8aHkCmRjvnqImlOk%2BzMkK7%2BIC5p8wRZqACkQCHQMYW3BDjCHpsTVBjqkAdS%2F%2FNZ908LAn0A7Rmyqav9jI34Msx19tnqUqcBbSWBQNUoCqE0HCtOEEwD6Gn8jiypKDBZZ2ZWmHIjM32ygmbyy0r9NtoC6P2%2BBr7R3S3xU6fNpa%2B%2Bw%2FRiYmtXwd%2Bt%2F1CjiFGsUraZBKT8ExoO9URQq46PlM5cNtRsSaCS4GJNlxC00iuL1tGlI%2FmWa%2F77mPYgwO58CNtVqKw68mnJBZDpYj8Ne&X-Amz-Signature=6a2f3392caa03e524e38fccf2086c220fc490f58a7683fc68595d04c55fc69ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WI5S5J4K%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD9L9Y9mgb5e3hikjALpvvnHKYA%2FiqGoSnM85g9VOcC8wIhAPhpBeKhYsWgprgKeLIoncOBzayeToO5kHjOwy9Nxk8RKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyFfEyULklyoFRUSAAq3AMe7KmLhnvG2Lt4zgpU74MATKgsc1G%2BNxjOC5X%2FDGI2tVJ0ew0bdfiFuKVD%2BEcHACZttzV2JXbvqF1Ji3M91nl%2BYm7NY6y2hn%2B43RNIDbW10K1al8qyiWgrHBd0Wws6wtINvdjJXEoc%2FAEUVHQk%2BYGvgBXeujveI5PjkwOH%2FM9BX10zC026cC7JjOjz%2FkFjF56kjBNI9TRzn8dWZZdDCQlBCUug3nCQde9lCWy%2FP3F%2FtcF6nd9ZZKXVMkOzhqUu7QGVev9A7qpGMAbS6NlRLXIS8JATWn5rENaOHj0cQ1kKIGPds34P9LFNOKVNCXVGXcYYzwfd0M%2BzouFnNsvMb%2F5hhIjbnt%2BPo0mPk%2BHSRWoQVNagWZm0MJ%2FvZjfnc%2Ban9KG5sHjX8gZzcke12Jk9abLi4AW6moghEB3TTuqvCN5bqNDlqLgRdvJeGl3zKwJuw5g%2BenZ1tS1sbUxMn9KbfW6Wy7%2FHlN03x0r2s%2BCW%2BHb%2BkG94zaqaao7GtSQH6At1p9ratrXiTPXkYsWoJdFVJ8ntdr4SwcyzwFvgVCWfXlAcJsupR%2Bb06%2Bmc21jgFiayfrK40x1r64n1Ly4O8aHkCmRjvnqImlOk%2BzMkK7%2BIC5p8wRZqACkQCHQMYW3BDjCHpsTVBjqkAdS%2F%2FNZ908LAn0A7Rmyqav9jI34Msx19tnqUqcBbSWBQNUoCqE0HCtOEEwD6Gn8jiypKDBZZ2ZWmHIjM32ygmbyy0r9NtoC6P2%2BBr7R3S3xU6fNpa%2B%2Bw%2FRiYmtXwd%2Bt%2F1CjiFGsUraZBKT8ExoO9URQq46PlM5cNtRsSaCS4GJNlxC00iuL1tGlI%2FmWa%2F77mPYgwO58CNtVqKw68mnJBZDpYj8Ne&X-Amz-Signature=53c8047f931fecd2a39b606bdacd93791ce39a9386c66ac3af11c4c75660e62c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WI5S5J4K%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD9L9Y9mgb5e3hikjALpvvnHKYA%2FiqGoSnM85g9VOcC8wIhAPhpBeKhYsWgprgKeLIoncOBzayeToO5kHjOwy9Nxk8RKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyFfEyULklyoFRUSAAq3AMe7KmLhnvG2Lt4zgpU74MATKgsc1G%2BNxjOC5X%2FDGI2tVJ0ew0bdfiFuKVD%2BEcHACZttzV2JXbvqF1Ji3M91nl%2BYm7NY6y2hn%2B43RNIDbW10K1al8qyiWgrHBd0Wws6wtINvdjJXEoc%2FAEUVHQk%2BYGvgBXeujveI5PjkwOH%2FM9BX10zC026cC7JjOjz%2FkFjF56kjBNI9TRzn8dWZZdDCQlBCUug3nCQde9lCWy%2FP3F%2FtcF6nd9ZZKXVMkOzhqUu7QGVev9A7qpGMAbS6NlRLXIS8JATWn5rENaOHj0cQ1kKIGPds34P9LFNOKVNCXVGXcYYzwfd0M%2BzouFnNsvMb%2F5hhIjbnt%2BPo0mPk%2BHSRWoQVNagWZm0MJ%2FvZjfnc%2Ban9KG5sHjX8gZzcke12Jk9abLi4AW6moghEB3TTuqvCN5bqNDlqLgRdvJeGl3zKwJuw5g%2BenZ1tS1sbUxMn9KbfW6Wy7%2FHlN03x0r2s%2BCW%2BHb%2BkG94zaqaao7GtSQH6At1p9ratrXiTPXkYsWoJdFVJ8ntdr4SwcyzwFvgVCWfXlAcJsupR%2Bb06%2Bmc21jgFiayfrK40x1r64n1Ly4O8aHkCmRjvnqImlOk%2BzMkK7%2BIC5p8wRZqACkQCHQMYW3BDjCHpsTVBjqkAdS%2F%2FNZ908LAn0A7Rmyqav9jI34Msx19tnqUqcBbSWBQNUoCqE0HCtOEEwD6Gn8jiypKDBZZ2ZWmHIjM32ygmbyy0r9NtoC6P2%2BBr7R3S3xU6fNpa%2B%2Bw%2FRiYmtXwd%2Bt%2F1CjiFGsUraZBKT8ExoO9URQq46PlM5cNtRsSaCS4GJNlxC00iuL1tGlI%2FmWa%2F77mPYgwO58CNtVqKw68mnJBZDpYj8Ne&X-Amz-Signature=0d4dfc0592336bc9e8d1cb9eafbdc737d7d9ac2aee5b93656906308e1ba0cc6b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663E5UCHDO%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgByujCyVb0gX4oiHt33dfW%2F8s8vLnJFXnpmVgSUP3TAiEAi5zD7cptqzMmvRvGKhk9XKT696Yf%2B56vanvgVYalqCYqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLrC5twrHKcFWUIanircA%2FSYZJHohVlugli03cSVNrAIA%2BzUxPHoclbnrpxJ%2B9vhTjP6%2BebHMd6SbTtY4K8s6UWGnoM3eT9BBz%2BUNcMXYV%2BRyGhhOXd6z4vxYKlnZoNRvv%2BbDALdfnjpuz0i0v%2FRVkE%2FGjLEwhVM35gBFYLKHwZNowAUtAru3K04UPjOUEiwY17KuFC1G96vMY3msMdY3LRiUEmWGeDDS3Tao2sy90UQnnCxuDvOgXKbS6e4O4D0OqvW%2B5gQpoVmWOejc%2BM3u1ejO12pi3SCQZHX7AOAWfLvt1SDbhxnK7gQBTFIa2sHRKOgh6EFC%2Fc35NeTUUidBsXaN%2BPX8nCtaww135b9RB40US7c1YAOtBmZensDbsixPXIMW32tTQXoMjKQ%2BDJcjz3AfVR%2BExAGkDw37afUyk5en3C2w9BKhQZJoGLVphw5J6a%2BGThU3VbMNbzX7Q6OewvSHkxYvYnGYFP8iPUSBHWZUMEggs4ZCsDmq4k70olwE2kFxseVfdDIlS6r00%2FKRwzQIZ660hIZiY%2Bj2I3%2B3nonarcUAIsuwUN6lhujC1D7dM6QKDRacBIA2PvgWkLZ3R4A3amnwQpjzINFbKTIgAfR2BoXyhdeP379f9DGukWAAqCqO7plySHqX1AaMOemxNUGOqUBLsqKaH6EiJ%2F%2FNGuF64VstHpMI%2FdI52Qq3uN%2BVwCpF0bOyNgASAx07OWjm0ztoPG9zwteplN7n9lBSmM5vpyVQQL%2BE9CROLKGrpQ05R378N%2BUpw00S1nA12zQGCi0XDKENWPc1YKHo0SEgi8apwIopYOosij8SuE1bP6DGMZi4hKeg9u9l483BZIXNi%2Bnl9eQEPPM6GYHX0UBDXc4OmJWjK7Y3lxH&X-Amz-Signature=58bafa5d56fa48c9cbd969e2c9de21e58bf8b30ff45da76ada68910aaf19a6ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663E5UCHDO%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgByujCyVb0gX4oiHt33dfW%2F8s8vLnJFXnpmVgSUP3TAiEAi5zD7cptqzMmvRvGKhk9XKT696Yf%2B56vanvgVYalqCYqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLrC5twrHKcFWUIanircA%2FSYZJHohVlugli03cSVNrAIA%2BzUxPHoclbnrpxJ%2B9vhTjP6%2BebHMd6SbTtY4K8s6UWGnoM3eT9BBz%2BUNcMXYV%2BRyGhhOXd6z4vxYKlnZoNRvv%2BbDALdfnjpuz0i0v%2FRVkE%2FGjLEwhVM35gBFYLKHwZNowAUtAru3K04UPjOUEiwY17KuFC1G96vMY3msMdY3LRiUEmWGeDDS3Tao2sy90UQnnCxuDvOgXKbS6e4O4D0OqvW%2B5gQpoVmWOejc%2BM3u1ejO12pi3SCQZHX7AOAWfLvt1SDbhxnK7gQBTFIa2sHRKOgh6EFC%2Fc35NeTUUidBsXaN%2BPX8nCtaww135b9RB40US7c1YAOtBmZensDbsixPXIMW32tTQXoMjKQ%2BDJcjz3AfVR%2BExAGkDw37afUyk5en3C2w9BKhQZJoGLVphw5J6a%2BGThU3VbMNbzX7Q6OewvSHkxYvYnGYFP8iPUSBHWZUMEggs4ZCsDmq4k70olwE2kFxseVfdDIlS6r00%2FKRwzQIZ660hIZiY%2Bj2I3%2B3nonarcUAIsuwUN6lhujC1D7dM6QKDRacBIA2PvgWkLZ3R4A3amnwQpjzINFbKTIgAfR2BoXyhdeP379f9DGukWAAqCqO7plySHqX1AaMOemxNUGOqUBLsqKaH6EiJ%2F%2FNGuF64VstHpMI%2FdI52Qq3uN%2BVwCpF0bOyNgASAx07OWjm0ztoPG9zwteplN7n9lBSmM5vpyVQQL%2BE9CROLKGrpQ05R378N%2BUpw00S1nA12zQGCi0XDKENWPc1YKHo0SEgi8apwIopYOosij8SuE1bP6DGMZi4hKeg9u9l483BZIXNi%2Bnl9eQEPPM6GYHX0UBDXc4OmJWjK7Y3lxH&X-Amz-Signature=8a387869c204eda0adc254844eefb1dc6144b09534e319a5a81087b24d27f333&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663E5UCHDO%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgByujCyVb0gX4oiHt33dfW%2F8s8vLnJFXnpmVgSUP3TAiEAi5zD7cptqzMmvRvGKhk9XKT696Yf%2B56vanvgVYalqCYqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLrC5twrHKcFWUIanircA%2FSYZJHohVlugli03cSVNrAIA%2BzUxPHoclbnrpxJ%2B9vhTjP6%2BebHMd6SbTtY4K8s6UWGnoM3eT9BBz%2BUNcMXYV%2BRyGhhOXd6z4vxYKlnZoNRvv%2BbDALdfnjpuz0i0v%2FRVkE%2FGjLEwhVM35gBFYLKHwZNowAUtAru3K04UPjOUEiwY17KuFC1G96vMY3msMdY3LRiUEmWGeDDS3Tao2sy90UQnnCxuDvOgXKbS6e4O4D0OqvW%2B5gQpoVmWOejc%2BM3u1ejO12pi3SCQZHX7AOAWfLvt1SDbhxnK7gQBTFIa2sHRKOgh6EFC%2Fc35NeTUUidBsXaN%2BPX8nCtaww135b9RB40US7c1YAOtBmZensDbsixPXIMW32tTQXoMjKQ%2BDJcjz3AfVR%2BExAGkDw37afUyk5en3C2w9BKhQZJoGLVphw5J6a%2BGThU3VbMNbzX7Q6OewvSHkxYvYnGYFP8iPUSBHWZUMEggs4ZCsDmq4k70olwE2kFxseVfdDIlS6r00%2FKRwzQIZ660hIZiY%2Bj2I3%2B3nonarcUAIsuwUN6lhujC1D7dM6QKDRacBIA2PvgWkLZ3R4A3amnwQpjzINFbKTIgAfR2BoXyhdeP379f9DGukWAAqCqO7plySHqX1AaMOemxNUGOqUBLsqKaH6EiJ%2F%2FNGuF64VstHpMI%2FdI52Qq3uN%2BVwCpF0bOyNgASAx07OWjm0ztoPG9zwteplN7n9lBSmM5vpyVQQL%2BE9CROLKGrpQ05R378N%2BUpw00S1nA12zQGCi0XDKENWPc1YKHo0SEgi8apwIopYOosij8SuE1bP6DGMZi4hKeg9u9l483BZIXNi%2Bnl9eQEPPM6GYHX0UBDXc4OmJWjK7Y3lxH&X-Amz-Signature=861b7a30d0308725c1ba92d47d41db23d94d186f596564c61601d13c044f2cbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663E5UCHDO%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgByujCyVb0gX4oiHt33dfW%2F8s8vLnJFXnpmVgSUP3TAiEAi5zD7cptqzMmvRvGKhk9XKT696Yf%2B56vanvgVYalqCYqiAQIjP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLrC5twrHKcFWUIanircA%2FSYZJHohVlugli03cSVNrAIA%2BzUxPHoclbnrpxJ%2B9vhTjP6%2BebHMd6SbTtY4K8s6UWGnoM3eT9BBz%2BUNcMXYV%2BRyGhhOXd6z4vxYKlnZoNRvv%2BbDALdfnjpuz0i0v%2FRVkE%2FGjLEwhVM35gBFYLKHwZNowAUtAru3K04UPjOUEiwY17KuFC1G96vMY3msMdY3LRiUEmWGeDDS3Tao2sy90UQnnCxuDvOgXKbS6e4O4D0OqvW%2B5gQpoVmWOejc%2BM3u1ejO12pi3SCQZHX7AOAWfLvt1SDbhxnK7gQBTFIa2sHRKOgh6EFC%2Fc35NeTUUidBsXaN%2BPX8nCtaww135b9RB40US7c1YAOtBmZensDbsixPXIMW32tTQXoMjKQ%2BDJcjz3AfVR%2BExAGkDw37afUyk5en3C2w9BKhQZJoGLVphw5J6a%2BGThU3VbMNbzX7Q6OewvSHkxYvYnGYFP8iPUSBHWZUMEggs4ZCsDmq4k70olwE2kFxseVfdDIlS6r00%2FKRwzQIZ660hIZiY%2Bj2I3%2B3nonarcUAIsuwUN6lhujC1D7dM6QKDRacBIA2PvgWkLZ3R4A3amnwQpjzINFbKTIgAfR2BoXyhdeP379f9DGukWAAqCqO7plySHqX1AaMOemxNUGOqUBLsqKaH6EiJ%2F%2FNGuF64VstHpMI%2FdI52Qq3uN%2BVwCpF0bOyNgASAx07OWjm0ztoPG9zwteplN7n9lBSmM5vpyVQQL%2BE9CROLKGrpQ05R378N%2BUpw00S1nA12zQGCi0XDKENWPc1YKHo0SEgi8apwIopYOosij8SuE1bP6DGMZi4hKeg9u9l483BZIXNi%2Bnl9eQEPPM6GYHX0UBDXc4OmJWjK7Y3lxH&X-Amz-Signature=8501833aecfb1b08728f2c294b22247c143fe3654fcb066f41c25aa33abb11f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663ZFCELQH%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMCcP2VPpI7sXeh14%2BU0bAFdBg5N1rFaYBOJmSeEOlXAiEAxgT217I28VlQY0haHLFXXMf6UkCpfQrk31K0LFW7ER4qiAQIjf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPe5i2LXE8%2Fz01ImmCrcA65gFgfiEpQ6hI6bKa29adZQNmXaAes9EBaKXA4XnxhP4QOn6BayXXihwaQ08ixRWJVsU3n71yUt7rodfF1irW7GcMDzZqrDlHzMx2V6qjRA5twmWbxTOez12kMdyegPQam9ktuj06yHJL7WnhZnRdY%2BILQjjKAjkbaQm5Gs%2FpXxGWz90kaHNRJHdGmVulRlJ5SJ942%2BYpNjKeSwUGlPJ8asC8KxPvv0ylKI7mSOwqM3dMnAA1iQXzxOADpmOb0DMxlOi7RfDzjnSKVJ0mJi3ryUYBUNQqBMvHzQ%2BZxvEnh63aPN759Vslu0OpgP1iKvj6cRfpY8zoDwoAH4JcjNWvxB6RrdieraSz0fEfg7GYIN2B1dR%2B5OiSudzW4SsSnoCkb93eGjA%2Bv9QKFuhr6%2BrOZ68MSMfoimZINAy%2FEYmgWFW0MPhkbddDNwMF%2FebBTMPj0cAhPl0Xha13xjoaJ%2Bz%2F53w5%2BALN7BlsMdCwoojvIngBZnOpPPjCbGbV4D2KOa5XJOHDFgSnGlINJbM8abXOsC4GavcqSiVR9XNHwk9Wg6dQDng6o6F0v6FVkrptlUEn879pQon7fW6v69Mpnnypcb5Sp%2Bd0v1dmlweQNkzPDXs2FBb1gQcZBprLAhMMS9xNUGOqUBsi8%2Fi6ySMnjhcvd6Am3CK1WH3bkvEbXGkcZ1EO%2FLDlcjHMKg754tknbZ7XytutPOPNvrndGvMGFdeMVNPwv0QHRzk%2FRIXXumReuLVgF7iT0uE1WJbWcFFDBV0xCfIlHBBHHVcf6YXCzEQHfC54yV7wNGCxBQ6OnPGSs2UvSZQdy8%2FMppxbCZU5UJSULzLQTDE3qIIo2a2splIWdauk7ZJg%2F%2FyaY6&X-Amz-Signature=d27feb61c84f4b76f57c1760615d04410f6007747619369be9b2c2d142f3ae77&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZHMMXMJM%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC%2FKe06AOUuoXva44prlKLp6Uc944LxLxgax679fmwSPwIhAOs%2FhfoU0ddqwFT1F55QDImW5rTAhkqhPvQZ2pZ3kKHxKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwuuNDXrOfZt9C232sq3APY9IvEPqmmCtzIcO1GOaHknO4%2Fv6i32x%2BiDZYfIwS0w%2FmiOfxJ4a%2BkIk4jyFKpRcOyFHZ6jGKB2D3bccfkyL8pR1pwYc%2B7laNCtOP9Zz%2FGbbDGZVVAT2yo%2FGOrsN4OZ9ADXfwhQK4wEllmZByMnSWwZacOIlH8CTQD4t1JJXmM%2FRnqzu78IzyE6MjCot1KWQGiai5r%2F46Q6Pr45A2aZa5mpBuw%2FIBkx1JSOwwnqQ7%2BYEGkf55ZYoKeqoFWXZzLN2ahD%2Bp7KhDmhqV2Wmqau8uwYIkDr7%2FEd8BZFjnLHFlgWmBSg26qhWf7ikyWrCRvfF42V9OC9XVOy7gbqcGCCp5rWm%2FDEGQPLxE9RQnCuoiNjZum%2B6oRZYRB3ahc8894zItlKyUx%2BULIHV19rLrzp1rPvk%2By6fcV6JDOIwk1FaCxRDTbz5XZc934R1iz90kCiFLITXOHRG2igJNWYkMm4fpwjlU7iG%2FT5YW2ik8xLWyb%2B3O3MGNrGpNQcsidj%2BzN7sBBxsPqItgm3gSvhnvJlZIAFoWrwGX2rwENvRVjYjZuQ4mvb1%2BX9gvhwyprNY7P8Jugjh%2FPHL1JnfgrzEgP71LvkAo0PtcMeZmO28C5VrzepxyA62FPqpbeOf80NjCrpsTVBjqkAYWDf9%2F3QnNBWUrgbpZbvor4O%2F292GV%2BIAJL%2B44zoW99lyze1Fxw9XC%2F6AN%2BlmUymE75neXnNTZwcKpU60UkU5c%2Fkz8d3hYxu7P2%2FGFKsUBtbyqYaEazpwnE0TZFh5yiyRk3odNEckg4pZhHQGdQvzI9QCysic%2BYcXObjuzcv6BQdLBq8FheZeEDh8YIgdOeYNJnkCWq5p8KePZBqdANqaIXKiHg&X-Amz-Signature=adab2a92cee9da8c87b307bba33c03003361bbb0ce0138cc992af559e922c4d8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZHMMXMJM%2F20260921%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260921T145114Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC%2FKe06AOUuoXva44prlKLp6Uc944LxLxgax679fmwSPwIhAOs%2FhfoU0ddqwFT1F55QDImW5rTAhkqhPvQZ2pZ3kKHxKogECIz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwuuNDXrOfZt9C232sq3APY9IvEPqmmCtzIcO1GOaHknO4%2Fv6i32x%2BiDZYfIwS0w%2FmiOfxJ4a%2BkIk4jyFKpRcOyFHZ6jGKB2D3bccfkyL8pR1pwYc%2B7laNCtOP9Zz%2FGbbDGZVVAT2yo%2FGOrsN4OZ9ADXfwhQK4wEllmZByMnSWwZacOIlH8CTQD4t1JJXmM%2FRnqzu78IzyE6MjCot1KWQGiai5r%2F46Q6Pr45A2aZa5mpBuw%2FIBkx1JSOwwnqQ7%2BYEGkf55ZYoKeqoFWXZzLN2ahD%2Bp7KhDmhqV2Wmqau8uwYIkDr7%2FEd8BZFjnLHFlgWmBSg26qhWf7ikyWrCRvfF42V9OC9XVOy7gbqcGCCp5rWm%2FDEGQPLxE9RQnCuoiNjZum%2B6oRZYRB3ahc8894zItlKyUx%2BULIHV19rLrzp1rPvk%2By6fcV6JDOIwk1FaCxRDTbz5XZc934R1iz90kCiFLITXOHRG2igJNWYkMm4fpwjlU7iG%2FT5YW2ik8xLWyb%2B3O3MGNrGpNQcsidj%2BzN7sBBxsPqItgm3gSvhnvJlZIAFoWrwGX2rwENvRVjYjZuQ4mvb1%2BX9gvhwyprNY7P8Jugjh%2FPHL1JnfgrzEgP71LvkAo0PtcMeZmO28C5VrzepxyA62FPqpbeOf80NjCrpsTVBjqkAYWDf9%2F3QnNBWUrgbpZbvor4O%2F292GV%2BIAJL%2B44zoW99lyze1Fxw9XC%2F6AN%2BlmUymE75neXnNTZwcKpU60UkU5c%2Fkz8d3hYxu7P2%2FGFKsUBtbyqYaEazpwnE0TZFh5yiyRk3odNEckg4pZhHQGdQvzI9QCysic%2BYcXObjuzcv6BQdLBq8FheZeEDh8YIgdOeYNJnkCWq5p8KePZBqdANqaIXKiHg&X-Amz-Signature=214e95d29d67d21c268a24a42f8a4f73313e98c4881821cd1ba2124aecec57ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
