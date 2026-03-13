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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2TX6IZX%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICIitz1JhP71vOuPU5a7UuQ8Fc0jpMH7m%2BEYHbnqeR%2F%2FAiEAltF6HqJtG5MeINEM8KniWyw4SNR9wKYaacP%2F1DJ5ihoqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJyt7EyZi2IkQqxbVCrcAzFosIWwFT75H8%2FQtjek8dOXftFRducJofeltrlnSTIR%2FFmbEFHUtGDvpJGSmxbp%2BFnCkGvoWzjMS8pbbWQY9%2FUN0cTp7djk0n4unTlKFzQEPSixBQL8GKK58O83mPbw8XftouZARCllge1yLp%2Bi1r1w6P%2BwK3xykezEVeMBym59v%2FZ3kqiAwrWK4YhQ0av5bqzztIcNKnmdir0TH7xyDoqhuG7a4cVYEdKF7wLGy2tz%2BMLfVoBVcpswNH7XehqrbRz6k28iS8F4CLYoY10cp4RXL%2BAq2w%2BD1MKEEiaD1%2B51xvUATVgqeD56hOcV6yJZduPOncqtQ4VznmNjc1nzH2JNrQs7jnCJFqlJx8gJMdU9DKt8129ENFcX9RCQjk6GhtzE6yxrjLBGP5MD2vYFVYRaDgfU%2BDY7V5%2FRmlPP3xUos8l29cq1yjFnBxLHMun%2FJ0T1lpCAJ8ODJElFQSnWQGYBKaTYuCYvCHzNOmqS4Zd24IbVUEnpeOlkEyEsIMH%2FbmldX1%2FqzxU1kSyS3zmbL9rfrIMocuiXsq2MAdN%2FG3ngeO29BcmFii558tn%2Bf2yBkJ6ZH8lrG4SZfrOY2Y7hWCxb%2FYjiCP5IXxF1CDjx4r0s3pNdBdx%2BfxdNfsSIMJj6zs0GOqUBfpENST%2FxevfpozISfMciSxdvnRnwzY8vmekA8kSCreYXxh8FpMxDJg1c%2BmRvEdtOsU8iLmlMTQpk9fHHsid39B0IfQFeUbCnX5e9FjNodIR2TueVX9mU2A8lE5eJoKOalsuVegnB74H0gaylIymznMwqoJig%2F%2FUJyyv6T9c6v1b1RACtmI%2BVsrp0sxJG9T7VrV6m3Q0fEnb1tyZbDs1fIQSyjKhB&X-Amz-Signature=0758be91fc305167abee011f9db2271b218c9427300c0d19c49983065958a492&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2TX6IZX%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICIitz1JhP71vOuPU5a7UuQ8Fc0jpMH7m%2BEYHbnqeR%2F%2FAiEAltF6HqJtG5MeINEM8KniWyw4SNR9wKYaacP%2F1DJ5ihoqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJyt7EyZi2IkQqxbVCrcAzFosIWwFT75H8%2FQtjek8dOXftFRducJofeltrlnSTIR%2FFmbEFHUtGDvpJGSmxbp%2BFnCkGvoWzjMS8pbbWQY9%2FUN0cTp7djk0n4unTlKFzQEPSixBQL8GKK58O83mPbw8XftouZARCllge1yLp%2Bi1r1w6P%2BwK3xykezEVeMBym59v%2FZ3kqiAwrWK4YhQ0av5bqzztIcNKnmdir0TH7xyDoqhuG7a4cVYEdKF7wLGy2tz%2BMLfVoBVcpswNH7XehqrbRz6k28iS8F4CLYoY10cp4RXL%2BAq2w%2BD1MKEEiaD1%2B51xvUATVgqeD56hOcV6yJZduPOncqtQ4VznmNjc1nzH2JNrQs7jnCJFqlJx8gJMdU9DKt8129ENFcX9RCQjk6GhtzE6yxrjLBGP5MD2vYFVYRaDgfU%2BDY7V5%2FRmlPP3xUos8l29cq1yjFnBxLHMun%2FJ0T1lpCAJ8ODJElFQSnWQGYBKaTYuCYvCHzNOmqS4Zd24IbVUEnpeOlkEyEsIMH%2FbmldX1%2FqzxU1kSyS3zmbL9rfrIMocuiXsq2MAdN%2FG3ngeO29BcmFii558tn%2Bf2yBkJ6ZH8lrG4SZfrOY2Y7hWCxb%2FYjiCP5IXxF1CDjx4r0s3pNdBdx%2BfxdNfsSIMJj6zs0GOqUBfpENST%2FxevfpozISfMciSxdvnRnwzY8vmekA8kSCreYXxh8FpMxDJg1c%2BmRvEdtOsU8iLmlMTQpk9fHHsid39B0IfQFeUbCnX5e9FjNodIR2TueVX9mU2A8lE5eJoKOalsuVegnB74H0gaylIymznMwqoJig%2F%2FUJyyv6T9c6v1b1RACtmI%2BVsrp0sxJG9T7VrV6m3Q0fEnb1tyZbDs1fIQSyjKhB&X-Amz-Signature=d4974b464df40c7a600182d972059ef7f38d6532bc644f80e965078eb8cfa0a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2TX6IZX%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICIitz1JhP71vOuPU5a7UuQ8Fc0jpMH7m%2BEYHbnqeR%2F%2FAiEAltF6HqJtG5MeINEM8KniWyw4SNR9wKYaacP%2F1DJ5ihoqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJyt7EyZi2IkQqxbVCrcAzFosIWwFT75H8%2FQtjek8dOXftFRducJofeltrlnSTIR%2FFmbEFHUtGDvpJGSmxbp%2BFnCkGvoWzjMS8pbbWQY9%2FUN0cTp7djk0n4unTlKFzQEPSixBQL8GKK58O83mPbw8XftouZARCllge1yLp%2Bi1r1w6P%2BwK3xykezEVeMBym59v%2FZ3kqiAwrWK4YhQ0av5bqzztIcNKnmdir0TH7xyDoqhuG7a4cVYEdKF7wLGy2tz%2BMLfVoBVcpswNH7XehqrbRz6k28iS8F4CLYoY10cp4RXL%2BAq2w%2BD1MKEEiaD1%2B51xvUATVgqeD56hOcV6yJZduPOncqtQ4VznmNjc1nzH2JNrQs7jnCJFqlJx8gJMdU9DKt8129ENFcX9RCQjk6GhtzE6yxrjLBGP5MD2vYFVYRaDgfU%2BDY7V5%2FRmlPP3xUos8l29cq1yjFnBxLHMun%2FJ0T1lpCAJ8ODJElFQSnWQGYBKaTYuCYvCHzNOmqS4Zd24IbVUEnpeOlkEyEsIMH%2FbmldX1%2FqzxU1kSyS3zmbL9rfrIMocuiXsq2MAdN%2FG3ngeO29BcmFii558tn%2Bf2yBkJ6ZH8lrG4SZfrOY2Y7hWCxb%2FYjiCP5IXxF1CDjx4r0s3pNdBdx%2BfxdNfsSIMJj6zs0GOqUBfpENST%2FxevfpozISfMciSxdvnRnwzY8vmekA8kSCreYXxh8FpMxDJg1c%2BmRvEdtOsU8iLmlMTQpk9fHHsid39B0IfQFeUbCnX5e9FjNodIR2TueVX9mU2A8lE5eJoKOalsuVegnB74H0gaylIymznMwqoJig%2F%2FUJyyv6T9c6v1b1RACtmI%2BVsrp0sxJG9T7VrV6m3Q0fEnb1tyZbDs1fIQSyjKhB&X-Amz-Signature=6a6045b56e8d2795b51e1a5cac012fecbf947a3ed9924883ee67d47196bd7267&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QRPV7MUB%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD0O5dECAS3J2fy8KvdbSmluF%2B0JAO%2Bc1vSUhULcx3FjAIgLsZqVNmxCvnacwrvHDJ13wZiVzLG2Z4LHhLsp2ZkzqgqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGyMz9SQpIfwWD8LMCrcA7Iv37aOnUOnLsZsaZRszUI0yxsWPtWnFC39oBgPRPbJpXrJ%2FWSS1e9TUBwt%2BvxFaFqhR7ROvdJmisItFKM1c9QMTumMoXpI%2FE4Zcdyn2lwcfFxIHziUydsft%2BVUsaFc44glmdjY63y2EpDCu0AUp1LokvetYW4ikqo09pvMpzxcAFlizZLTXW6NOo717b118K9cjRTOTyEphinUBe5iLYwU1%2FLqFU5fXLn%2Fr4n1TRhrTQlMpH8jVJ6NM9iKsT2T15eFXArBUjYdahDM4ZK3t09QnOGi%2BO4xzIAUNHBVaFgPgzgUMcrMyMR%2FecVeAEqbb%2FpLfyI38ujsxyfLFLT34i3dF3QkRSnUH22zR8KwRh1aZiQU0hwd3Jr3S%2BOn9Wkb%2FRRXsDPjvfcEX70RW6VRgctHyvRySDl6F0ahEg5HTZVDyYnkAD%2FvzPTDpKnJ8dMZm3nAKAGTXW9LiPgkYaO8E4Ce%2Bv8FUKsKZgRz6VVhsgruK9frgsG42hUw3A0gr4%2BTFbZBG9MrtmtX4ta%2F4THHzTDfnUPDOuij7Pt7p84gKSYC%2FgmhYcwL4HUkqqYzNfFytlOfBe%2FHg%2Fi8XEe7VQm9t0RQtMXtnMiKy6hU%2BOQl5qLJKmIRXn4negmNE3aXMMz5zs0GOqUBvW7tql3LMWstcC0XiBhWFjNh%2FeRCziMti%2BM6AjvjeWQmRLjd06p1iMHBlDNzFOH0Zf%2FlEpYYupQhLaXz%2FcSBpY2bskksOCd%2BAIVi6GIpH3lbhDeFP5nbFHrMEmn1x14o7ypwKq1QswkWh8kwJc3e58NgxFtE7%2BFoChDukNJZ2yQzH6rCwFFGQ%2FOU%2BfeXBpa0kKvbPl9Gj%2B4ZqejcV0M6BG4euDFH&X-Amz-Signature=d2aa2c64f12f4f212bcec04d81fce513ecc682ac0da195f4a5e05d8994903d97&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QRPV7MUB%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD0O5dECAS3J2fy8KvdbSmluF%2B0JAO%2Bc1vSUhULcx3FjAIgLsZqVNmxCvnacwrvHDJ13wZiVzLG2Z4LHhLsp2ZkzqgqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGyMz9SQpIfwWD8LMCrcA7Iv37aOnUOnLsZsaZRszUI0yxsWPtWnFC39oBgPRPbJpXrJ%2FWSS1e9TUBwt%2BvxFaFqhR7ROvdJmisItFKM1c9QMTumMoXpI%2FE4Zcdyn2lwcfFxIHziUydsft%2BVUsaFc44glmdjY63y2EpDCu0AUp1LokvetYW4ikqo09pvMpzxcAFlizZLTXW6NOo717b118K9cjRTOTyEphinUBe5iLYwU1%2FLqFU5fXLn%2Fr4n1TRhrTQlMpH8jVJ6NM9iKsT2T15eFXArBUjYdahDM4ZK3t09QnOGi%2BO4xzIAUNHBVaFgPgzgUMcrMyMR%2FecVeAEqbb%2FpLfyI38ujsxyfLFLT34i3dF3QkRSnUH22zR8KwRh1aZiQU0hwd3Jr3S%2BOn9Wkb%2FRRXsDPjvfcEX70RW6VRgctHyvRySDl6F0ahEg5HTZVDyYnkAD%2FvzPTDpKnJ8dMZm3nAKAGTXW9LiPgkYaO8E4Ce%2Bv8FUKsKZgRz6VVhsgruK9frgsG42hUw3A0gr4%2BTFbZBG9MrtmtX4ta%2F4THHzTDfnUPDOuij7Pt7p84gKSYC%2FgmhYcwL4HUkqqYzNfFytlOfBe%2FHg%2Fi8XEe7VQm9t0RQtMXtnMiKy6hU%2BOQl5qLJKmIRXn4negmNE3aXMMz5zs0GOqUBvW7tql3LMWstcC0XiBhWFjNh%2FeRCziMti%2BM6AjvjeWQmRLjd06p1iMHBlDNzFOH0Zf%2FlEpYYupQhLaXz%2FcSBpY2bskksOCd%2BAIVi6GIpH3lbhDeFP5nbFHrMEmn1x14o7ypwKq1QswkWh8kwJc3e58NgxFtE7%2BFoChDukNJZ2yQzH6rCwFFGQ%2FOU%2BfeXBpa0kKvbPl9Gj%2B4ZqejcV0M6BG4euDFH&X-Amz-Signature=08d9690603749ddd116bbfedb359a48e1c43e83bcf4dafc4a12e02c937e55482&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QRPV7MUB%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD0O5dECAS3J2fy8KvdbSmluF%2B0JAO%2Bc1vSUhULcx3FjAIgLsZqVNmxCvnacwrvHDJ13wZiVzLG2Z4LHhLsp2ZkzqgqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGyMz9SQpIfwWD8LMCrcA7Iv37aOnUOnLsZsaZRszUI0yxsWPtWnFC39oBgPRPbJpXrJ%2FWSS1e9TUBwt%2BvxFaFqhR7ROvdJmisItFKM1c9QMTumMoXpI%2FE4Zcdyn2lwcfFxIHziUydsft%2BVUsaFc44glmdjY63y2EpDCu0AUp1LokvetYW4ikqo09pvMpzxcAFlizZLTXW6NOo717b118K9cjRTOTyEphinUBe5iLYwU1%2FLqFU5fXLn%2Fr4n1TRhrTQlMpH8jVJ6NM9iKsT2T15eFXArBUjYdahDM4ZK3t09QnOGi%2BO4xzIAUNHBVaFgPgzgUMcrMyMR%2FecVeAEqbb%2FpLfyI38ujsxyfLFLT34i3dF3QkRSnUH22zR8KwRh1aZiQU0hwd3Jr3S%2BOn9Wkb%2FRRXsDPjvfcEX70RW6VRgctHyvRySDl6F0ahEg5HTZVDyYnkAD%2FvzPTDpKnJ8dMZm3nAKAGTXW9LiPgkYaO8E4Ce%2Bv8FUKsKZgRz6VVhsgruK9frgsG42hUw3A0gr4%2BTFbZBG9MrtmtX4ta%2F4THHzTDfnUPDOuij7Pt7p84gKSYC%2FgmhYcwL4HUkqqYzNfFytlOfBe%2FHg%2Fi8XEe7VQm9t0RQtMXtnMiKy6hU%2BOQl5qLJKmIRXn4negmNE3aXMMz5zs0GOqUBvW7tql3LMWstcC0XiBhWFjNh%2FeRCziMti%2BM6AjvjeWQmRLjd06p1iMHBlDNzFOH0Zf%2FlEpYYupQhLaXz%2FcSBpY2bskksOCd%2BAIVi6GIpH3lbhDeFP5nbFHrMEmn1x14o7ypwKq1QswkWh8kwJc3e58NgxFtE7%2BFoChDukNJZ2yQzH6rCwFFGQ%2FOU%2BfeXBpa0kKvbPl9Gj%2B4ZqejcV0M6BG4euDFH&X-Amz-Signature=0d2325fc3f4a0fd8a02ac03d8f443554f441e96578db7a4d241722fbacf41773&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QRPV7MUB%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQD0O5dECAS3J2fy8KvdbSmluF%2B0JAO%2Bc1vSUhULcx3FjAIgLsZqVNmxCvnacwrvHDJ13wZiVzLG2Z4LHhLsp2ZkzqgqiAQIif%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDGyMz9SQpIfwWD8LMCrcA7Iv37aOnUOnLsZsaZRszUI0yxsWPtWnFC39oBgPRPbJpXrJ%2FWSS1e9TUBwt%2BvxFaFqhR7ROvdJmisItFKM1c9QMTumMoXpI%2FE4Zcdyn2lwcfFxIHziUydsft%2BVUsaFc44glmdjY63y2EpDCu0AUp1LokvetYW4ikqo09pvMpzxcAFlizZLTXW6NOo717b118K9cjRTOTyEphinUBe5iLYwU1%2FLqFU5fXLn%2Fr4n1TRhrTQlMpH8jVJ6NM9iKsT2T15eFXArBUjYdahDM4ZK3t09QnOGi%2BO4xzIAUNHBVaFgPgzgUMcrMyMR%2FecVeAEqbb%2FpLfyI38ujsxyfLFLT34i3dF3QkRSnUH22zR8KwRh1aZiQU0hwd3Jr3S%2BOn9Wkb%2FRRXsDPjvfcEX70RW6VRgctHyvRySDl6F0ahEg5HTZVDyYnkAD%2FvzPTDpKnJ8dMZm3nAKAGTXW9LiPgkYaO8E4Ce%2Bv8FUKsKZgRz6VVhsgruK9frgsG42hUw3A0gr4%2BTFbZBG9MrtmtX4ta%2F4THHzTDfnUPDOuij7Pt7p84gKSYC%2FgmhYcwL4HUkqqYzNfFytlOfBe%2FHg%2Fi8XEe7VQm9t0RQtMXtnMiKy6hU%2BOQl5qLJKmIRXn4negmNE3aXMMz5zs0GOqUBvW7tql3LMWstcC0XiBhWFjNh%2FeRCziMti%2BM6AjvjeWQmRLjd06p1iMHBlDNzFOH0Zf%2FlEpYYupQhLaXz%2FcSBpY2bskksOCd%2BAIVi6GIpH3lbhDeFP5nbFHrMEmn1x14o7ypwKq1QswkWh8kwJc3e58NgxFtE7%2BFoChDukNJZ2yQzH6rCwFFGQ%2FOU%2BfeXBpa0kKvbPl9Gj%2B4ZqejcV0M6BG4euDFH&X-Amz-Signature=da5ef4280a248647c01718019aa945ddec607b389a33bc7ddfd66e1f762f0d51&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RUSPDFSF%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDYNcs0kdNR7UHnsHxJG5G9rIMJ6AOMXG07fzS4gRi5gwIgP2aUmcZvXRQG9aK6hmKUgfko28eVxP8MJ6saeQE1RA4qiAQIiP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPGdpJNY%2B8CXtOoBXyrcA71RabTSGQ%2F8U%2BY3NVlXoZC6pmyY34M9Kk78J%2Fh6hHCSymC3ufhsnlNAAyx1vjmfIFHM1C9JFbgEbbLJ4PHwsxPMkHV36fQWxkW7868%2Fmj6m1stLGQWpdLD8oA4NQzvyinfRsmTWyjeZXqRm7%2Fh8Qdu1bGg9RRkdeCEAiXoyGRY52lgCgNcxP078Gxqc6Hfh3fhvpJ%2BNdfbq8jOSO49GIAFKjF1Xrr96BVFPVDQfiNofFvCW8ew8xyiE4H49EIohEM7j%2BFk3E%2Fp9%2BSOj%2FXLkKtwptR6VGBr%2FYHbRa0DlSFUyDU9UqraDvbAZsvDJNYad5bRoGNC79s59GKToWaYbJTT%2FhHg5gp2tSGza3pVT2ymMO0cVecSHw2ZKL1B9fgF6PlP%2F2uDUUBgUEn3415L6YW2Bpm%2BpVmwQT9Acjw3uDSRPNKznQG50e%2B5yPaVxIJIcXUriUJ97IkHZQo%2FbM8MVS1GISvwzaGttubUaQXm5D0yyjDFIF%2F0Yc6RWohX2LdHfUmM7BWuPtRc7k1XyCJFPz2r1c4YFeLCX8D4t9dVLik8ynXecvckkeAYadfXYtLCbUBSAXSmZ1uH4Z8%2FnqCl7IspXyLEUi8JLG85M9pBN9%2FuMYIeVj9f%2Fe1Pqkjd4MNX5zs0GOqUBJIZkptciIlTqaQU8RNNvkCqvSmwTxhFIbdOnLZRWeCU9AhOeRkQCEc3abrz08zSbtfOKra1ibx01c6TfZCuSlKbGT%2FPiZVnc2ChiEBDmiO8ZfLQ6%2FL5Ojo6YADtCNAwlwH0YDYRTRwAQp5b0oqY5vGRRxm7KjsyOYxApwa0Ii2kSW%2BXE%2FaizvBlEpNpk3%2BteTErvg9xtPOz%2BskhjLzucAPojlv%2FZ&X-Amz-Signature=d84402af0758f708c24175eb6926c82e2b4c45b08fde3a545d88a38bc8632bab&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ST52OJ2%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUuO0Vrv6j%2B623l%2BlKX3I91cqKaSINWBAiwMEs0%2FQjAQIhAK89a6E%2B6fhHmZLEVV6IYsEahzb05uU4MJd2geaybC4zKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyfQCVJoe5aP6AhHcwq3AO0VrgGVQJ362RA7wvS7ur3W1XEHw7hncdr8cRET7j9BmSSp%2FoWOBjkONmJgmAhvA3YByVJgPAZz0YgGVdUuBhqkTugKSswpwwmongNzPIMqBLyNtrPn8hAFAoNZuCqkmEzGEhSLPuri%2BfdkDHCm5bH%2FYMquRg1%2FiBQucSwEsRSmYJAYM8nq361rGjC56i%2BHCkNt2p0m2XPvPf7ZsBFyiuy3wBwZ7rvwGRCaXkuAFtxQXYnuA8OOfcqchZJzggmhVJbjzpfI8LB21P4S46v4bbPE0R0e2XsrQtakdM4taFFck3Jb3z%2FzORHEXFuJNxqfQCZBy0u99saCykbG4qk%2FagAsaqus%2FFqdW62IUb1mkDC2OigB1NM4rdnSIoYJjEvuBayDdc8Kwf2WlTB8HjcOb%2FSoaCPWSG1pD1lA5wT24Xuq1fj00gqLR%2FskJAJrSzUsQFf%2BUKqy0GjpnX%2Bizm7hzfn4bEsmzR2%2B0LwKg7xwpwexcpMHR1pn4Q5U9GkE9luQKXIBYVqo6UuK8DbM04oAz08KbkhgTSKx3VTdQ52d76kDy2xoP2IyawMyHNbGwX96achu588LIg6UN%2FY%2BmtcHO%2BSShH4HdPhX7CBcTxZRZmgmKahZ1GTwBN4FN%2BScDCd%2B87NBjqkAXiZ8Egj%2BcRenSzDDgFeSNyjGDqNAh%2FzRqVQYhgk2p0Qky14mooPrwrYOZGUqQW94s3Yj7TxUfJ24BmYfGEhI%2BKWqgV9dQGIjLP1FDM%2FaIcKLK9nOznlLbNauVFf%2FlYwe4Rp345edOYEqLY9nzmK1TmwaggXmKsN6E2ynyRpH08U6XlITvyJH4XTMLm8C4wc4GZ6JxYJIBTrSaL9953aPnvhhhv9&X-Amz-Signature=cf20b02219d9be356f24f66949561d5fb917ed9e7218b2a315eb774acdd66986&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ST52OJ2%2F20260313%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260313T083847Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDUuO0Vrv6j%2B623l%2BlKX3I91cqKaSINWBAiwMEs0%2FQjAQIhAK89a6E%2B6fhHmZLEVV6IYsEahzb05uU4MJd2geaybC4zKogECIn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyfQCVJoe5aP6AhHcwq3AO0VrgGVQJ362RA7wvS7ur3W1XEHw7hncdr8cRET7j9BmSSp%2FoWOBjkONmJgmAhvA3YByVJgPAZz0YgGVdUuBhqkTugKSswpwwmongNzPIMqBLyNtrPn8hAFAoNZuCqkmEzGEhSLPuri%2BfdkDHCm5bH%2FYMquRg1%2FiBQucSwEsRSmYJAYM8nq361rGjC56i%2BHCkNt2p0m2XPvPf7ZsBFyiuy3wBwZ7rvwGRCaXkuAFtxQXYnuA8OOfcqchZJzggmhVJbjzpfI8LB21P4S46v4bbPE0R0e2XsrQtakdM4taFFck3Jb3z%2FzORHEXFuJNxqfQCZBy0u99saCykbG4qk%2FagAsaqus%2FFqdW62IUb1mkDC2OigB1NM4rdnSIoYJjEvuBayDdc8Kwf2WlTB8HjcOb%2FSoaCPWSG1pD1lA5wT24Xuq1fj00gqLR%2FskJAJrSzUsQFf%2BUKqy0GjpnX%2Bizm7hzfn4bEsmzR2%2B0LwKg7xwpwexcpMHR1pn4Q5U9GkE9luQKXIBYVqo6UuK8DbM04oAz08KbkhgTSKx3VTdQ52d76kDy2xoP2IyawMyHNbGwX96achu588LIg6UN%2FY%2BmtcHO%2BSShH4HdPhX7CBcTxZRZmgmKahZ1GTwBN4FN%2BScDCd%2B87NBjqkAXiZ8Egj%2BcRenSzDDgFeSNyjGDqNAh%2FzRqVQYhgk2p0Qky14mooPrwrYOZGUqQW94s3Yj7TxUfJ24BmYfGEhI%2BKWqgV9dQGIjLP1FDM%2FaIcKLK9nOznlLbNauVFf%2FlYwe4Rp345edOYEqLY9nzmK1TmwaggXmKsN6E2ynyRpH08U6XlITvyJH4XTMLm8C4wc4GZ6JxYJIBTrSaL9953aPnvhhhv9&X-Amz-Signature=4b2ea5f3e22854c60a027cf96b8cc265594b291a3bd4971efe77cb94aa06eea7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
