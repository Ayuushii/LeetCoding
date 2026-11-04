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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWXZOJS7%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfmfYpp477H5GOPlw2w3S%2FG4RHtPWoiq2bg7j2P0YIzAiEAoGNTrBaCGjNBFDF%2BuYiovee1KcethxSpixMCdv5WsAgqiAQIsP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBZtIQJBGfpEP3Ob2SrcA5akUaxJsYR6bhDov4jZIJLyAJI6MP%2FWgak4JEg98o8Py2o%2BEPB62zr2HPj%2FuLzRf3d5kEShtTm7oKnQkbyvLK1lYUzHTmvJ9gPcuQpnMgowAOOotpJBkP1VY3eDPkIxFan0SAA2P9wq1m58AivH8guVuwc3CVgGIcq5UuSa%2B1kNdszzFlarvxJSKQ%2F9njDrVjrHLBkQzZR8ok0haG9mypODRoXE89IvpIfD1DOLy6qcW0zYBUmwOMagE3LBXgEJK2xk5Q331Owjj0FCYF0XQh2%2F1uJDHmxSVM9AM2X%2BGwISXDk7eSgKGd25RbHJjAKXRrDM2T6AB%2FpzPPQQAbh04f8GkrKTuUrdlhIhhv%2BHxkRulE2O10BueMPmbA4wfaQCmIQ4o5xUOnttokUhoCLJmTmJoPSPN7hZM%2BfAd8O7CTcen15q3hRo4IQHPPl4FadlZnz8WUkWjyadTqv9fDs0tS5lL7YAKyXMkLHgPuC7UB3PgMH4JzjCDc5QHXGUEwWpyp3tI%2FBbKp0MZkgb3Rlj%2BwgQdyJzhLiY98hi7U1Yy29vMv76ME9FUqsIpV%2FCgsAkFamnb9aLMsh6qMy%2FHHQDvMC%2BC0VC8VGUaO7IDnon8LvwNBOf59qM5nQlbvvHMJGJrdcGOqUBLzbw4iam6AuRDFFjXsZ99wXivNQSGmTWKLyesAu7NA9%2BtNB0%2Ft5S%2BVl47OiBtEDhe56m1ETj7YE5zO6G6cZf%2FUwh1YW%2FsegRb9F9BzvcEELRalO33EOzBbVWBraTfntthdh%2BenW9dwlUP04KBvjBW1qQJdkRImmEP1Fv56be4gDVfqfLSHp%2FXffs%2FvC1Vd8xv3GZAZ5%2BdjXWPcVQFmnJ5LlaNOMw&X-Amz-Signature=9a330a5e648d9b6560ee6eaf7dbb83a803fde9497d85413f81555b15e6608bb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWXZOJS7%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfmfYpp477H5GOPlw2w3S%2FG4RHtPWoiq2bg7j2P0YIzAiEAoGNTrBaCGjNBFDF%2BuYiovee1KcethxSpixMCdv5WsAgqiAQIsP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBZtIQJBGfpEP3Ob2SrcA5akUaxJsYR6bhDov4jZIJLyAJI6MP%2FWgak4JEg98o8Py2o%2BEPB62zr2HPj%2FuLzRf3d5kEShtTm7oKnQkbyvLK1lYUzHTmvJ9gPcuQpnMgowAOOotpJBkP1VY3eDPkIxFan0SAA2P9wq1m58AivH8guVuwc3CVgGIcq5UuSa%2B1kNdszzFlarvxJSKQ%2F9njDrVjrHLBkQzZR8ok0haG9mypODRoXE89IvpIfD1DOLy6qcW0zYBUmwOMagE3LBXgEJK2xk5Q331Owjj0FCYF0XQh2%2F1uJDHmxSVM9AM2X%2BGwISXDk7eSgKGd25RbHJjAKXRrDM2T6AB%2FpzPPQQAbh04f8GkrKTuUrdlhIhhv%2BHxkRulE2O10BueMPmbA4wfaQCmIQ4o5xUOnttokUhoCLJmTmJoPSPN7hZM%2BfAd8O7CTcen15q3hRo4IQHPPl4FadlZnz8WUkWjyadTqv9fDs0tS5lL7YAKyXMkLHgPuC7UB3PgMH4JzjCDc5QHXGUEwWpyp3tI%2FBbKp0MZkgb3Rlj%2BwgQdyJzhLiY98hi7U1Yy29vMv76ME9FUqsIpV%2FCgsAkFamnb9aLMsh6qMy%2FHHQDvMC%2BC0VC8VGUaO7IDnon8LvwNBOf59qM5nQlbvvHMJGJrdcGOqUBLzbw4iam6AuRDFFjXsZ99wXivNQSGmTWKLyesAu7NA9%2BtNB0%2Ft5S%2BVl47OiBtEDhe56m1ETj7YE5zO6G6cZf%2FUwh1YW%2FsegRb9F9BzvcEELRalO33EOzBbVWBraTfntthdh%2BenW9dwlUP04KBvjBW1qQJdkRImmEP1Fv56be4gDVfqfLSHp%2FXffs%2FvC1Vd8xv3GZAZ5%2BdjXWPcVQFmnJ5LlaNOMw&X-Amz-Signature=dfb29c4a8ea8a0a719b55e7174f548eabc28d65048a8f97a814b10163d10a80c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VWXZOJS7%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIGfmfYpp477H5GOPlw2w3S%2FG4RHtPWoiq2bg7j2P0YIzAiEAoGNTrBaCGjNBFDF%2BuYiovee1KcethxSpixMCdv5WsAgqiAQIsP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBZtIQJBGfpEP3Ob2SrcA5akUaxJsYR6bhDov4jZIJLyAJI6MP%2FWgak4JEg98o8Py2o%2BEPB62zr2HPj%2FuLzRf3d5kEShtTm7oKnQkbyvLK1lYUzHTmvJ9gPcuQpnMgowAOOotpJBkP1VY3eDPkIxFan0SAA2P9wq1m58AivH8guVuwc3CVgGIcq5UuSa%2B1kNdszzFlarvxJSKQ%2F9njDrVjrHLBkQzZR8ok0haG9mypODRoXE89IvpIfD1DOLy6qcW0zYBUmwOMagE3LBXgEJK2xk5Q331Owjj0FCYF0XQh2%2F1uJDHmxSVM9AM2X%2BGwISXDk7eSgKGd25RbHJjAKXRrDM2T6AB%2FpzPPQQAbh04f8GkrKTuUrdlhIhhv%2BHxkRulE2O10BueMPmbA4wfaQCmIQ4o5xUOnttokUhoCLJmTmJoPSPN7hZM%2BfAd8O7CTcen15q3hRo4IQHPPl4FadlZnz8WUkWjyadTqv9fDs0tS5lL7YAKyXMkLHgPuC7UB3PgMH4JzjCDc5QHXGUEwWpyp3tI%2FBbKp0MZkgb3Rlj%2BwgQdyJzhLiY98hi7U1Yy29vMv76ME9FUqsIpV%2FCgsAkFamnb9aLMsh6qMy%2FHHQDvMC%2BC0VC8VGUaO7IDnon8LvwNBOf59qM5nQlbvvHMJGJrdcGOqUBLzbw4iam6AuRDFFjXsZ99wXivNQSGmTWKLyesAu7NA9%2BtNB0%2Ft5S%2BVl47OiBtEDhe56m1ETj7YE5zO6G6cZf%2FUwh1YW%2FsegRb9F9BzvcEELRalO33EOzBbVWBraTfntthdh%2BenW9dwlUP04KBvjBW1qQJdkRImmEP1Fv56be4gDVfqfLSHp%2FXffs%2FvC1Vd8xv3GZAZ5%2BdjXWPcVQFmnJ5LlaNOMw&X-Amz-Signature=ed21d15a2ccc3897921bf94052880a8269867e4680cbeb2d218284313a6a690b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QTVDIE7R%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAgtXhEfst1iymy5wKsB3xUAXugxqDpEjl99Z8Pa4OJwIhAJth8KGoNu3VVEHqRH2D6D1O6DjzHxIt827dYLCPJLXOKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwv%2BNhkmIFtr11UcXUq3AMptOTDtP%2BrwFO24yH4zuUH%2BDcUc%2BXgm8vAPfUHMRJk8lbh%2BZJ59MT2zHR7U48OcizpZInXa39WCEHVtLFrhP%2FocPdEIzyN0JBUE4Vne55%2BVkrzR0HPRD7F2E4CZZcdODBKfqj5QIrMPj20pc6JcpKt4STR79TED00SaWAy5nZ5py2RuNn%2FsJpQmi8q7Su8vySF%2BAoUBINKmkXrefUcRX86386HSqsr8wILnaqU%2FDicz5oSo8WvKSdtn9883xE2uGQmPwLt2vOBKSvObKAnHgspxRSjSNrdDGt4dskeNOHRJW%2FckzZmSluJ4nYnAJTN9Pawaa8fqyiZPHn9eLBTZoe9vweYQA5HcMRM1jaUQ2JGD2lHL70qC1FryD%2B%2FLM5nThfIa96oZqBwRxpUbEx%2B3pCWqfZxiBaRmGTALuBraRqaysf%2FBHPMHC7Z33fyZtYeCJrkd6dUhsRHpIjeWntJ4osL4yS81I4VjVKeoUrJzozFv78SDiOjk1iHb2or1D2AahUVnwjMks0zZLIVY0KYneI1K9kThMkbRFGCrfV9xTf3VtLAGFGunS4cIzGVZ0MCb0zV5r79TKhV9iZgUEI%2FmhI5QUlHtzZgxzicpxhBD0sKourcYxi1O34Cqhx3qTCTia3XBjqkAV%2BgphQErfErU6eFwAwgXdjFVqGrcEse5qsvKzp8z421CvzFGXdbTx5k9qNcp5uAGj9poZmY2pwayWdG4w13xhss86x8Wv%2BPKYzb5L57QFCtIxrLJ%2BH9auaS1xTdDI4s6fouqu2yUJDtqrrz7ptorJjtwbOnaZqh1dAFL2icgsAawKw1hoRjd1BLquYPj2Kf9HRqhtnOtIJaVJK7mjPHQ%2FPh8wvM&X-Amz-Signature=f65f1f6193fe642c8d84689b4f7f63a5bb246efb9d9929846aadd977ce1982f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QTVDIE7R%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAgtXhEfst1iymy5wKsB3xUAXugxqDpEjl99Z8Pa4OJwIhAJth8KGoNu3VVEHqRH2D6D1O6DjzHxIt827dYLCPJLXOKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwv%2BNhkmIFtr11UcXUq3AMptOTDtP%2BrwFO24yH4zuUH%2BDcUc%2BXgm8vAPfUHMRJk8lbh%2BZJ59MT2zHR7U48OcizpZInXa39WCEHVtLFrhP%2FocPdEIzyN0JBUE4Vne55%2BVkrzR0HPRD7F2E4CZZcdODBKfqj5QIrMPj20pc6JcpKt4STR79TED00SaWAy5nZ5py2RuNn%2FsJpQmi8q7Su8vySF%2BAoUBINKmkXrefUcRX86386HSqsr8wILnaqU%2FDicz5oSo8WvKSdtn9883xE2uGQmPwLt2vOBKSvObKAnHgspxRSjSNrdDGt4dskeNOHRJW%2FckzZmSluJ4nYnAJTN9Pawaa8fqyiZPHn9eLBTZoe9vweYQA5HcMRM1jaUQ2JGD2lHL70qC1FryD%2B%2FLM5nThfIa96oZqBwRxpUbEx%2B3pCWqfZxiBaRmGTALuBraRqaysf%2FBHPMHC7Z33fyZtYeCJrkd6dUhsRHpIjeWntJ4osL4yS81I4VjVKeoUrJzozFv78SDiOjk1iHb2or1D2AahUVnwjMks0zZLIVY0KYneI1K9kThMkbRFGCrfV9xTf3VtLAGFGunS4cIzGVZ0MCb0zV5r79TKhV9iZgUEI%2FmhI5QUlHtzZgxzicpxhBD0sKourcYxi1O34Cqhx3qTCTia3XBjqkAV%2BgphQErfErU6eFwAwgXdjFVqGrcEse5qsvKzp8z421CvzFGXdbTx5k9qNcp5uAGj9poZmY2pwayWdG4w13xhss86x8Wv%2BPKYzb5L57QFCtIxrLJ%2BH9auaS1xTdDI4s6fouqu2yUJDtqrrz7ptorJjtwbOnaZqh1dAFL2icgsAawKw1hoRjd1BLquYPj2Kf9HRqhtnOtIJaVJK7mjPHQ%2FPh8wvM&X-Amz-Signature=97bfb26b49db6f3b2e6c34fd1b77da59a00c68ee27e4b617d66aa2e9f84c0fb1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QTVDIE7R%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAgtXhEfst1iymy5wKsB3xUAXugxqDpEjl99Z8Pa4OJwIhAJth8KGoNu3VVEHqRH2D6D1O6DjzHxIt827dYLCPJLXOKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwv%2BNhkmIFtr11UcXUq3AMptOTDtP%2BrwFO24yH4zuUH%2BDcUc%2BXgm8vAPfUHMRJk8lbh%2BZJ59MT2zHR7U48OcizpZInXa39WCEHVtLFrhP%2FocPdEIzyN0JBUE4Vne55%2BVkrzR0HPRD7F2E4CZZcdODBKfqj5QIrMPj20pc6JcpKt4STR79TED00SaWAy5nZ5py2RuNn%2FsJpQmi8q7Su8vySF%2BAoUBINKmkXrefUcRX86386HSqsr8wILnaqU%2FDicz5oSo8WvKSdtn9883xE2uGQmPwLt2vOBKSvObKAnHgspxRSjSNrdDGt4dskeNOHRJW%2FckzZmSluJ4nYnAJTN9Pawaa8fqyiZPHn9eLBTZoe9vweYQA5HcMRM1jaUQ2JGD2lHL70qC1FryD%2B%2FLM5nThfIa96oZqBwRxpUbEx%2B3pCWqfZxiBaRmGTALuBraRqaysf%2FBHPMHC7Z33fyZtYeCJrkd6dUhsRHpIjeWntJ4osL4yS81I4VjVKeoUrJzozFv78SDiOjk1iHb2or1D2AahUVnwjMks0zZLIVY0KYneI1K9kThMkbRFGCrfV9xTf3VtLAGFGunS4cIzGVZ0MCb0zV5r79TKhV9iZgUEI%2FmhI5QUlHtzZgxzicpxhBD0sKourcYxi1O34Cqhx3qTCTia3XBjqkAV%2BgphQErfErU6eFwAwgXdjFVqGrcEse5qsvKzp8z421CvzFGXdbTx5k9qNcp5uAGj9poZmY2pwayWdG4w13xhss86x8Wv%2BPKYzb5L57QFCtIxrLJ%2BH9auaS1xTdDI4s6fouqu2yUJDtqrrz7ptorJjtwbOnaZqh1dAFL2icgsAawKw1hoRjd1BLquYPj2Kf9HRqhtnOtIJaVJK7mjPHQ%2FPh8wvM&X-Amz-Signature=583a6768ad464d95706d71355a6e0a38361b9e587ca189fff56394154fcb1768&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QTVDIE7R%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155725Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCAgtXhEfst1iymy5wKsB3xUAXugxqDpEjl99Z8Pa4OJwIhAJth8KGoNu3VVEHqRH2D6D1O6DjzHxIt827dYLCPJLXOKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igwv%2BNhkmIFtr11UcXUq3AMptOTDtP%2BrwFO24yH4zuUH%2BDcUc%2BXgm8vAPfUHMRJk8lbh%2BZJ59MT2zHR7U48OcizpZInXa39WCEHVtLFrhP%2FocPdEIzyN0JBUE4Vne55%2BVkrzR0HPRD7F2E4CZZcdODBKfqj5QIrMPj20pc6JcpKt4STR79TED00SaWAy5nZ5py2RuNn%2FsJpQmi8q7Su8vySF%2BAoUBINKmkXrefUcRX86386HSqsr8wILnaqU%2FDicz5oSo8WvKSdtn9883xE2uGQmPwLt2vOBKSvObKAnHgspxRSjSNrdDGt4dskeNOHRJW%2FckzZmSluJ4nYnAJTN9Pawaa8fqyiZPHn9eLBTZoe9vweYQA5HcMRM1jaUQ2JGD2lHL70qC1FryD%2B%2FLM5nThfIa96oZqBwRxpUbEx%2B3pCWqfZxiBaRmGTALuBraRqaysf%2FBHPMHC7Z33fyZtYeCJrkd6dUhsRHpIjeWntJ4osL4yS81I4VjVKeoUrJzozFv78SDiOjk1iHb2or1D2AahUVnwjMks0zZLIVY0KYneI1K9kThMkbRFGCrfV9xTf3VtLAGFGunS4cIzGVZ0MCb0zV5r79TKhV9iZgUEI%2FmhI5QUlHtzZgxzicpxhBD0sKourcYxi1O34Cqhx3qTCTia3XBjqkAV%2BgphQErfErU6eFwAwgXdjFVqGrcEse5qsvKzp8z421CvzFGXdbTx5k9qNcp5uAGj9poZmY2pwayWdG4w13xhss86x8Wv%2BPKYzb5L57QFCtIxrLJ%2BH9auaS1xTdDI4s6fouqu2yUJDtqrrz7ptorJjtwbOnaZqh1dAFL2icgsAawKw1hoRjd1BLquYPj2Kf9HRqhtnOtIJaVJK7mjPHQ%2FPh8wvM&X-Amz-Signature=99652a79aa1f32726369f9353dab86c6a4aaff12662812526ae1efc776e3df05&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W73P2VSM%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155726Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCIPLmLRDg154Sk1SajzXKKVYoBikaMKeWSXeUc5yOu1QIhAPZgD88hbdjDt2g5MfulxUlSsRUlouzIOiWtbdrUNMX5KogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwjVHR7zchRVEdvwbMq3APxMRzaoKJ%2FODniogIYzRONDjizpejXwraF3fvA%2Fon49bw0BCLQhiGBu9i9qGaLTZRYQluS6BizJPUHm4%2FHdvWmbpeXZzhIXAAUfufsXHINFg4tm1KYhR4X0ItbDSf6SM04RnYDzH%2FWeKu5JBmVjXPrlwfXMEc9NPp2P7wEedWJTaQOaIxYpABwjoZni2MZ9xqTn3dQ4sfMb%2FAdu32JntDCJtjCRs8XRte7qBsMTCNX%2FQxfW4EtBCDVI5b7%2B6ey%2Fl07nIxYtXMouIsvpRF%2F5zoEbIZUUsvZUFj7KIHKjKbSJd87%2FfXKkGj8%2F2hjuMPVWLU%2FFH7ijbJeSZmEcYeJJCf2X7FnHgO4Kyaky%2FySTZwemi6w27PTnWtuyZpYI9RGDLRUDzkKO%2FNqsyGa5h%2B%2F62KAkJCJuN8nvY0FvQ5x7GXPrmnyc0LOaXSjpSkD9eMSYm0O7VaYGyxWQwobSPiseti5Zyo3BI1wx%2B6cw%2BhipUgrv36rz34NbuW1%2BEtlS03YvNhURS4momE3ngqBP5v5F%2BRp5JSONMq0XgMENfxJ%2BtXHFvhXf1o7qNwRjuq0uY4ebxVQdR%2Ba3LW5nIHFyHvGI%2FixlfNKoi9wkbLJwm86RLgeqht7r44D3Zs5R2HuQzC2ia3XBjqkAaGxzqS1tcqx5meDoj3wbiMmroWqnN0e5g9xR6R30qpi%2BL7oUgCxGIfe1yXvPkm0xSV%2FSP6c14Sjwff05HjFtaM7j7ibp7cG5QI2SDqZhmAfViJ%2F%2FsV%2BVkZPECNGPkkP7pYga1%2BTCfqxwwOnFwS5AkG5B6X2qdntVtHnL8FY5i6VoqZGRWUNrYyyejVLZxIpKAGsa6PVpM11qLfQE4rd7RAyVr5L&X-Amz-Signature=54903759d806f3da9400bcde6a07ad2d8cc1b0d70ff1140e497afb5ba3f78353&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QAVLQT26%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155726Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4vENxdSO7W9pb5tvCdy8FlPoZ65zaytctUeTCQvwwjgIhAPFBa0zkUOYOsindgr0hZktJpeDTqREg9yL2fGDAlhZIKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7AZ066jTpUdUwuX8q3ANrM8kMkprxV7MRTdMdzAM5eull2ZhkFz%2B5MiCceCPSa2RVdv%2Bpl7UJK2UvoExJlMy6HfOsSL25oRtHFtgWiHEfZjDJsHYEUIOiXopJ5rZFc%2BAkpzRwakqbTLAdcQaNQoA8qA436cco4faZ0ovvXKUakjyef1YWVAgRoVv4x%2BUvukNQ8nfJGsQF1mwFzOsk9xNYGronPCETjYf58jzrLxe2JSh85IxchBbQEeuC6HjSogN1pBWf3NJZyT23q5rG2Bt3D3iHHIbEoLCmJxFoolEk3ucmtbjsfkJoBq9bwyr6e8SBBHpR58lNVxJx2NZzy48YKPzkoJpfAcx3uCS2nwq0qqCQGj4bVZkdGFZ5q96ofpeZpAXBGgYTLFQW3DyEvBeRYw3OJvpkT5mAdbNw5oq7mhCHopkmkCaCZI1RkbxDRR3Lo7zMruamd0nf310KCR4zchdnfr03bJeaDT0MA8rmly5K98eF8qm21C0sOx5HjeHQc9sup1upwtqjG%2BRyR344MbUpm%2Fhw3%2FsR8J5if8HBEqQQcXdH7S%2Fe9J42rw5TsS7SonDFI2N3JzqyAMA1TAGzNqi0%2Bkg0p8WUk0eybBYMqp2CPIK6evfo1AChKlzmKPQmZzfMzf4dojvHzzC1h63XBjqkATmQ3QzfMEFSu5yBta41C2aMGCANHHFtX3OaggkPJgprHQo2iqZiLnA%2FEwR8lle%2FfG8kRyP9oMcRqQqAhlQl%2BQ%2FQ%2Fs0mbcu0pzeohJ7UyW1HtOv9JpF1%2B%2Bie%2FPE2bCRqsBCX7S9EYValiavo4tP5z7ZoBmMO83ZqYT56J7HafCu3MpZRx78bE2ezQ3XTA7jqySeyNcpE1ZN3GxzFgRqRozCxdBg9&X-Amz-Signature=042b787c9d7b42ec896d00184089ae3376bc175472b4e9171ac17c23447bc3c1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QAVLQT26%2F20261104%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261104T155726Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC4vENxdSO7W9pb5tvCdy8FlPoZ65zaytctUeTCQvwwjgIhAPFBa0zkUOYOsindgr0hZktJpeDTqREg9yL2fGDAlhZIKogECK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw7AZ066jTpUdUwuX8q3ANrM8kMkprxV7MRTdMdzAM5eull2ZhkFz%2B5MiCceCPSa2RVdv%2Bpl7UJK2UvoExJlMy6HfOsSL25oRtHFtgWiHEfZjDJsHYEUIOiXopJ5rZFc%2BAkpzRwakqbTLAdcQaNQoA8qA436cco4faZ0ovvXKUakjyef1YWVAgRoVv4x%2BUvukNQ8nfJGsQF1mwFzOsk9xNYGronPCETjYf58jzrLxe2JSh85IxchBbQEeuC6HjSogN1pBWf3NJZyT23q5rG2Bt3D3iHHIbEoLCmJxFoolEk3ucmtbjsfkJoBq9bwyr6e8SBBHpR58lNVxJx2NZzy48YKPzkoJpfAcx3uCS2nwq0qqCQGj4bVZkdGFZ5q96ofpeZpAXBGgYTLFQW3DyEvBeRYw3OJvpkT5mAdbNw5oq7mhCHopkmkCaCZI1RkbxDRR3Lo7zMruamd0nf310KCR4zchdnfr03bJeaDT0MA8rmly5K98eF8qm21C0sOx5HjeHQc9sup1upwtqjG%2BRyR344MbUpm%2Fhw3%2FsR8J5if8HBEqQQcXdH7S%2Fe9J42rw5TsS7SonDFI2N3JzqyAMA1TAGzNqi0%2Bkg0p8WUk0eybBYMqp2CPIK6evfo1AChKlzmKPQmZzfMzf4dojvHzzC1h63XBjqkATmQ3QzfMEFSu5yBta41C2aMGCANHHFtX3OaggkPJgprHQo2iqZiLnA%2FEwR8lle%2FfG8kRyP9oMcRqQqAhlQl%2BQ%2FQ%2Fs0mbcu0pzeohJ7UyW1HtOv9JpF1%2B%2Bie%2FPE2bCRqsBCX7S9EYValiavo4tP5z7ZoBmMO83ZqYT56J7HafCu3MpZRx78bE2ezQ3XTA7jqySeyNcpE1ZN3GxzFgRqRozCxdBg9&X-Amz-Signature=3c63e7d8f932767ad0f5e85dfa05b69571c6546c7ae8cf218a078471896501d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
