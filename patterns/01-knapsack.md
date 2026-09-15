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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYM4PXKS%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJGMEQCIDX6PDDK0PAtFTs1gYWZ6%2BX61jqj0TsGeVix7o7FmkptAiBsswxJDx6Y9DWtKF0osojkyxCsJqR%2F%2BAftrNrlJq0QxiqIBAj9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMc%2Byi54HS6SQcCMOFKtwD8Hn186cPFl6WF%2B2tYLn3DleDyodYzP5HO%2BVEnj1IIjqm5ZnEWX4ydWgCn2xIEBtu4Idj2m4LRdvf7aV8kMPjbYxqXmd8POZ5q8gQMvOJ4ZjQKVgeeMJa0kZKip6RnsoqAE8vsJEnjHsStRT2JfwDaUWLStGMXE2%2F9dlzLPjfIuJz6VGZTCYGBmodjpJyTBpCqtyuhVo%2FvnD6Qss7vwfg928lY8CmvUTd7WUzotWC%2Fvg27q6ArqYdwh%2BBQSVV1%2BHdvfi99e%2B5TmSvaPHAm5kMajKUM0oBzM2%2FHF6Xp3hsl2h92EZFwi1pXRBMYgpbXjPlSr9j1hARdQIAM0763gRp7akhPKOEAhLOwy%2FuOV%2FaUwdSBm1mBR9CmbvA6qmmnz%2BKxGqS8h2d5d2Uka%2FguXnkroEHnz32xJ0iNB4VaPtlr%2FscZl0VS414SUDCOlAbO9wJs6WDqASm4wDWwfs4r%2Ba%2Bx4j1P6%2Fds90H4abkthkmmZm7AI2%2FLij27itAPFjyCKjpryj0RGqN9vbzZrv1JQxA6gQAGLD4qCyPvMFe4sVdYmSwgtctz9YvGv3OJF7g3C2DI%2F9Cb1yGb3aFuvYDEZlGSVoTJZVl2SqQuhnCuBtV2WaS3RENK9%2Fohrtcdlww%2BNuk1QY6pgHXDvZYO1sQQAoNeauvIPGr7QaC4xQSMvF%2BHkFTJtejYpCRAk7ixI8hC26lOYe%2Bg7aHF%2F9BbnGRMmRUc2er4EJyqoqd6NoUEVgxNF8UrD1xmI4B%2BQq%2FNOGtAB28CmOEWYcjm7jBSCQxfN9HrLvcatm4kNoDmz2KtbuRUVOGqhuB0NaJQDp1IxDxW7ucn1e8oHl%2FotLMIpcKmSYjAMPUURR5UiA3GYNY&X-Amz-Signature=058e1e8204d684ee07b6064595aa4dcc4aa1e5597943702869acd31d71f975e2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYM4PXKS%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJGMEQCIDX6PDDK0PAtFTs1gYWZ6%2BX61jqj0TsGeVix7o7FmkptAiBsswxJDx6Y9DWtKF0osojkyxCsJqR%2F%2BAftrNrlJq0QxiqIBAj9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMc%2Byi54HS6SQcCMOFKtwD8Hn186cPFl6WF%2B2tYLn3DleDyodYzP5HO%2BVEnj1IIjqm5ZnEWX4ydWgCn2xIEBtu4Idj2m4LRdvf7aV8kMPjbYxqXmd8POZ5q8gQMvOJ4ZjQKVgeeMJa0kZKip6RnsoqAE8vsJEnjHsStRT2JfwDaUWLStGMXE2%2F9dlzLPjfIuJz6VGZTCYGBmodjpJyTBpCqtyuhVo%2FvnD6Qss7vwfg928lY8CmvUTd7WUzotWC%2Fvg27q6ArqYdwh%2BBQSVV1%2BHdvfi99e%2B5TmSvaPHAm5kMajKUM0oBzM2%2FHF6Xp3hsl2h92EZFwi1pXRBMYgpbXjPlSr9j1hARdQIAM0763gRp7akhPKOEAhLOwy%2FuOV%2FaUwdSBm1mBR9CmbvA6qmmnz%2BKxGqS8h2d5d2Uka%2FguXnkroEHnz32xJ0iNB4VaPtlr%2FscZl0VS414SUDCOlAbO9wJs6WDqASm4wDWwfs4r%2Ba%2Bx4j1P6%2Fds90H4abkthkmmZm7AI2%2FLij27itAPFjyCKjpryj0RGqN9vbzZrv1JQxA6gQAGLD4qCyPvMFe4sVdYmSwgtctz9YvGv3OJF7g3C2DI%2F9Cb1yGb3aFuvYDEZlGSVoTJZVl2SqQuhnCuBtV2WaS3RENK9%2Fohrtcdlww%2BNuk1QY6pgHXDvZYO1sQQAoNeauvIPGr7QaC4xQSMvF%2BHkFTJtejYpCRAk7ixI8hC26lOYe%2Bg7aHF%2F9BbnGRMmRUc2er4EJyqoqd6NoUEVgxNF8UrD1xmI4B%2BQq%2FNOGtAB28CmOEWYcjm7jBSCQxfN9HrLvcatm4kNoDmz2KtbuRUVOGqhuB0NaJQDp1IxDxW7ucn1e8oHl%2FotLMIpcKmSYjAMPUURR5UiA3GYNY&X-Amz-Signature=fcb1e80a95a8a977ada7c6873aec6948ece42c1318071017d0a193f67027b48a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYM4PXKS%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJGMEQCIDX6PDDK0PAtFTs1gYWZ6%2BX61jqj0TsGeVix7o7FmkptAiBsswxJDx6Y9DWtKF0osojkyxCsJqR%2F%2BAftrNrlJq0QxiqIBAj9%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMc%2Byi54HS6SQcCMOFKtwD8Hn186cPFl6WF%2B2tYLn3DleDyodYzP5HO%2BVEnj1IIjqm5ZnEWX4ydWgCn2xIEBtu4Idj2m4LRdvf7aV8kMPjbYxqXmd8POZ5q8gQMvOJ4ZjQKVgeeMJa0kZKip6RnsoqAE8vsJEnjHsStRT2JfwDaUWLStGMXE2%2F9dlzLPjfIuJz6VGZTCYGBmodjpJyTBpCqtyuhVo%2FvnD6Qss7vwfg928lY8CmvUTd7WUzotWC%2Fvg27q6ArqYdwh%2BBQSVV1%2BHdvfi99e%2B5TmSvaPHAm5kMajKUM0oBzM2%2FHF6Xp3hsl2h92EZFwi1pXRBMYgpbXjPlSr9j1hARdQIAM0763gRp7akhPKOEAhLOwy%2FuOV%2FaUwdSBm1mBR9CmbvA6qmmnz%2BKxGqS8h2d5d2Uka%2FguXnkroEHnz32xJ0iNB4VaPtlr%2FscZl0VS414SUDCOlAbO9wJs6WDqASm4wDWwfs4r%2Ba%2Bx4j1P6%2Fds90H4abkthkmmZm7AI2%2FLij27itAPFjyCKjpryj0RGqN9vbzZrv1JQxA6gQAGLD4qCyPvMFe4sVdYmSwgtctz9YvGv3OJF7g3C2DI%2F9Cb1yGb3aFuvYDEZlGSVoTJZVl2SqQuhnCuBtV2WaS3RENK9%2Fohrtcdlww%2BNuk1QY6pgHXDvZYO1sQQAoNeauvIPGr7QaC4xQSMvF%2BHkFTJtejYpCRAk7ixI8hC26lOYe%2Bg7aHF%2F9BbnGRMmRUc2er4EJyqoqd6NoUEVgxNF8UrD1xmI4B%2BQq%2FNOGtAB28CmOEWYcjm7jBSCQxfN9HrLvcatm4kNoDmz2KtbuRUVOGqhuB0NaJQDp1IxDxW7ucn1e8oHl%2FotLMIpcKmSYjAMPUURR5UiA3GYNY&X-Amz-Signature=08493149d07a49ec368bad05bb7c519d6fe7cf0fda9c7b6c84dd595702e10bd1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DW33JDQ%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDtOJEQZJ379lMyTAPaZgjyCXBbeXzidi8gXA3e628qYwIhAOQ2sK%2BQLvNEBfzDA83RBfxhHH8iJMNJTiWg0KbFxTUbKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzUV344I5FogmYUODoq3APGxpSFkQs7vQnCNDHIZQEHlB4t0owWfS32n2RdMBh0Co0ZFf0XwryHuW%2Fim5RURGMZh1C197FYWUlVcrip1QuLXM8vMbN3shQxN%2Bu3x%2Bj3O8yU7rQKSaQ2kQ5x%2FsfyPxv0F6MfzhbyZwYDGXOosUEViaYv0yqxYZfk2im7VmPnHKUMFsb4nMwD3lY2PJwnI6LMq8feholFpIq%2B1NwMvYhBb1inlvcNbQvrU0ecJkN4mXabFeNP3qGmRvaKRtoRmFkDH8G8YyVOd3NfbeD1oUbZ0XMoWJx2djnM2zfmNlN%2FMbccv2XaYuM39fGShZiG9dxi0gK91F7Q1YDFrFpiy2BfObe9sCUdLh9OLvAkDuh2gdtIO98OsvP554kKCF3VgbbTaXiiipqBhl%2BXtZSC491rY6MVl9s%2Bj%2Fk8k%2BdV2udVFv087N92LPP9TqeyofSdmtHrj6D72dKn8ajd%2BGCs7ugPyviSqBq6E%2FGS4fgfq5nST5n5xIg6y7hV3qm4YNYeyf5KxlY674AhNC10QwWkweOeEpgU1cuBquLvEH7rE%2B6oQCmH%2FRwi%2BcFTULOl3sRJcBdpnXV3guaAxpGwnbIHlw3IuJK%2FCwMBh4gNUy497byx%2Bzw5FRSaSgaXZVimJDD326TVBjqkAZ88tM2Zz2ut2cbu0DjTmRPoQiLxV2FvJAnc8ILvghikDUAlJkjMAt7jGa3y0LvGQzLQ%2Fx7SmzJsijR%2FJ0IjxpQdqJOsyn6texE1VNobvTXJYRD5888Q7005oqSQdnAJMd97OnC2gW3%2FoYSbQ8FeaFRRhWrNGxvYxsF0epojKcHRXgYLqpePH8y7m%2F2UKMaZWNdkD7y6gOiCE9F3sZRrRMI9C0Ww&X-Amz-Signature=7034cf5e818123ce4515c2566b614b09be05c69eabf359f8df028a94bcc81928&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DW33JDQ%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDtOJEQZJ379lMyTAPaZgjyCXBbeXzidi8gXA3e628qYwIhAOQ2sK%2BQLvNEBfzDA83RBfxhHH8iJMNJTiWg0KbFxTUbKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzUV344I5FogmYUODoq3APGxpSFkQs7vQnCNDHIZQEHlB4t0owWfS32n2RdMBh0Co0ZFf0XwryHuW%2Fim5RURGMZh1C197FYWUlVcrip1QuLXM8vMbN3shQxN%2Bu3x%2Bj3O8yU7rQKSaQ2kQ5x%2FsfyPxv0F6MfzhbyZwYDGXOosUEViaYv0yqxYZfk2im7VmPnHKUMFsb4nMwD3lY2PJwnI6LMq8feholFpIq%2B1NwMvYhBb1inlvcNbQvrU0ecJkN4mXabFeNP3qGmRvaKRtoRmFkDH8G8YyVOd3NfbeD1oUbZ0XMoWJx2djnM2zfmNlN%2FMbccv2XaYuM39fGShZiG9dxi0gK91F7Q1YDFrFpiy2BfObe9sCUdLh9OLvAkDuh2gdtIO98OsvP554kKCF3VgbbTaXiiipqBhl%2BXtZSC491rY6MVl9s%2Bj%2Fk8k%2BdV2udVFv087N92LPP9TqeyofSdmtHrj6D72dKn8ajd%2BGCs7ugPyviSqBq6E%2FGS4fgfq5nST5n5xIg6y7hV3qm4YNYeyf5KxlY674AhNC10QwWkweOeEpgU1cuBquLvEH7rE%2B6oQCmH%2FRwi%2BcFTULOl3sRJcBdpnXV3guaAxpGwnbIHlw3IuJK%2FCwMBh4gNUy497byx%2Bzw5FRSaSgaXZVimJDD326TVBjqkAZ88tM2Zz2ut2cbu0DjTmRPoQiLxV2FvJAnc8ILvghikDUAlJkjMAt7jGa3y0LvGQzLQ%2Fx7SmzJsijR%2FJ0IjxpQdqJOsyn6texE1VNobvTXJYRD5888Q7005oqSQdnAJMd97OnC2gW3%2FoYSbQ8FeaFRRhWrNGxvYxsF0epojKcHRXgYLqpePH8y7m%2F2UKMaZWNdkD7y6gOiCE9F3sZRrRMI9C0Ww&X-Amz-Signature=6af63c1fed17619769895d6751a245ab4854468bb12ae4b9f0a5a2472122f72c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DW33JDQ%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDtOJEQZJ379lMyTAPaZgjyCXBbeXzidi8gXA3e628qYwIhAOQ2sK%2BQLvNEBfzDA83RBfxhHH8iJMNJTiWg0KbFxTUbKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzUV344I5FogmYUODoq3APGxpSFkQs7vQnCNDHIZQEHlB4t0owWfS32n2RdMBh0Co0ZFf0XwryHuW%2Fim5RURGMZh1C197FYWUlVcrip1QuLXM8vMbN3shQxN%2Bu3x%2Bj3O8yU7rQKSaQ2kQ5x%2FsfyPxv0F6MfzhbyZwYDGXOosUEViaYv0yqxYZfk2im7VmPnHKUMFsb4nMwD3lY2PJwnI6LMq8feholFpIq%2B1NwMvYhBb1inlvcNbQvrU0ecJkN4mXabFeNP3qGmRvaKRtoRmFkDH8G8YyVOd3NfbeD1oUbZ0XMoWJx2djnM2zfmNlN%2FMbccv2XaYuM39fGShZiG9dxi0gK91F7Q1YDFrFpiy2BfObe9sCUdLh9OLvAkDuh2gdtIO98OsvP554kKCF3VgbbTaXiiipqBhl%2BXtZSC491rY6MVl9s%2Bj%2Fk8k%2BdV2udVFv087N92LPP9TqeyofSdmtHrj6D72dKn8ajd%2BGCs7ugPyviSqBq6E%2FGS4fgfq5nST5n5xIg6y7hV3qm4YNYeyf5KxlY674AhNC10QwWkweOeEpgU1cuBquLvEH7rE%2B6oQCmH%2FRwi%2BcFTULOl3sRJcBdpnXV3guaAxpGwnbIHlw3IuJK%2FCwMBh4gNUy497byx%2Bzw5FRSaSgaXZVimJDD326TVBjqkAZ88tM2Zz2ut2cbu0DjTmRPoQiLxV2FvJAnc8ILvghikDUAlJkjMAt7jGa3y0LvGQzLQ%2Fx7SmzJsijR%2FJ0IjxpQdqJOsyn6texE1VNobvTXJYRD5888Q7005oqSQdnAJMd97OnC2gW3%2FoYSbQ8FeaFRRhWrNGxvYxsF0epojKcHRXgYLqpePH8y7m%2F2UKMaZWNdkD7y6gOiCE9F3sZRrRMI9C0Ww&X-Amz-Signature=903b7c831ea2a8666dfd72aa11ace9514a6d55457198ac52fe7c605bfaeb4948&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666DW33JDQ%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130839Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJIMEYCIQDtOJEQZJ379lMyTAPaZgjyCXBbeXzidi8gXA3e628qYwIhAOQ2sK%2BQLvNEBfzDA83RBfxhHH8iJMNJTiWg0KbFxTUbKogECP3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzUV344I5FogmYUODoq3APGxpSFkQs7vQnCNDHIZQEHlB4t0owWfS32n2RdMBh0Co0ZFf0XwryHuW%2Fim5RURGMZh1C197FYWUlVcrip1QuLXM8vMbN3shQxN%2Bu3x%2Bj3O8yU7rQKSaQ2kQ5x%2FsfyPxv0F6MfzhbyZwYDGXOosUEViaYv0yqxYZfk2im7VmPnHKUMFsb4nMwD3lY2PJwnI6LMq8feholFpIq%2B1NwMvYhBb1inlvcNbQvrU0ecJkN4mXabFeNP3qGmRvaKRtoRmFkDH8G8YyVOd3NfbeD1oUbZ0XMoWJx2djnM2zfmNlN%2FMbccv2XaYuM39fGShZiG9dxi0gK91F7Q1YDFrFpiy2BfObe9sCUdLh9OLvAkDuh2gdtIO98OsvP554kKCF3VgbbTaXiiipqBhl%2BXtZSC491rY6MVl9s%2Bj%2Fk8k%2BdV2udVFv087N92LPP9TqeyofSdmtHrj6D72dKn8ajd%2BGCs7ugPyviSqBq6E%2FGS4fgfq5nST5n5xIg6y7hV3qm4YNYeyf5KxlY674AhNC10QwWkweOeEpgU1cuBquLvEH7rE%2B6oQCmH%2FRwi%2BcFTULOl3sRJcBdpnXV3guaAxpGwnbIHlw3IuJK%2FCwMBh4gNUy497byx%2Bzw5FRSaSgaXZVimJDD326TVBjqkAZ88tM2Zz2ut2cbu0DjTmRPoQiLxV2FvJAnc8ILvghikDUAlJkjMAt7jGa3y0LvGQzLQ%2Fx7SmzJsijR%2FJ0IjxpQdqJOsyn6texE1VNobvTXJYRD5888Q7005oqSQdnAJMd97OnC2gW3%2FoYSbQ8FeaFRRhWrNGxvYxsF0epojKcHRXgYLqpePH8y7m%2F2UKMaZWNdkD7y6gOiCE9F3sZRrRMI9C0Ww&X-Amz-Signature=8879faedd9dd9287865b11b1053635c7b844cb00776b5ce5f9b6bb66f6028098&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QXVF2XQG%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIQDfUgL9lcmxnx1IxM7%2FRnvGAXPW58QuMY3HVzeY6KEMPgIgRIW%2Frr%2B4dtuoOdJhURs%2FifZhgcvFO5T%2B7jgH3WEHjBQqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIcQfaMvGtllP880wCrcA3Hins1%2Ffb%2FgRC%2Fh56DOsfCc0EkOiJrgFy1JLd4%2FUBY4pSY2qQQG%2B3bI%2BQeCK5h%2BEUHU6zrPSy2YuZYtWfh5V3BEN00%2BEjvWAd%2Fk9KmUUMiejskrLrZ%2FiBcSjF8TPJsSxJNIfryiZqq5dbWiz%2FsZK%2BJIZdjUEirIVcTVMVoGfjvYrvAaxfzHoyszv6yL4FqHGyUreOxXHytpjR93KDVA%2FfyYqHF0Pyx5u69e432emu6KARnugJBwqLk0Z4z7hmqtLbs0SIZ8TPGWJeYvfcNejFBV0aIQ%2B7f3PMwKjiJrLRYcpfQDObtXGl1puSvtuqo5Ne66sKMSjIvT5Dn%2F4p5WZgVhEMsTtNFYLBK6eTcTrk3VYe5LqPV8jreeEKeNQsXL6X%2B1bNWR2jyIsCeMyKEXbo58VC%2BKhvtd7wCVCcr%2BaWKvsWVOdLNEC%2FTD0ZAz5fiJxS4Oifgy7DvsHCOhMhJLJniFoRx%2BzbMK3ralu9gycB1AJ9wPl8lUKi9xsXnok%2BB%2BiZL4LfHiap48uXAR4ZnlYCCed%2FOnKI1GYzdaoTypT8kiHve8PjU941AeYKQOgb%2FHgdqllcXRNQJrw2DyvoTdSs2HRJXwxcXSEy90t2BTrHdio5YTf45kchw%2BR3l0MNrbpNUGOqUBOrpYAsR2EkQ2Augu%2Bh4PKY3j50t%2BBvBSdgbzoBrsnARlDnUa%2F5QsnrIb%2BjLty7bJM84yYP4nVeuHwklUIlmpHQq0ATSp6lTG7V%2FML8yTlkh6l3FbZLdsKA2%2F3W1UuzsmqweJZZ7Z2cLzvMfEmq3n5TCX8gFGuKBVDbGSpXwDXUHjAHQ0seMhMTCfnBnuHVIe9brZBBD65pH1HgAL6O%2F2Q%2Boazqg3&X-Amz-Signature=350f71ff2a93e4f79b5d8d276f9e1d82e74bab42e2995353ad050674e22c585b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDEQTSSV%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIEC1kCtQM8pjvYBvBNVUovF%2BiQxHGkZ%2F5Xq9do1O%2BIvIAiEA4968ctQl%2Bou6zA72%2BxXVSR%2B7z4I12CDI1ASetxpWZYYqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJDQD4I3aZmENIMSOSrcA0CPPqdGQJp0wYJyLPdA%2FCFPKMCPgzFtQaFALVbjdvw4wsyZn0xs0iw2lsYI4mXamQhS8sUDDcpu9Fi%2FBjxcPKbO5xnkLE85HxW5k%2Fof9F0lHCRBkSceAmBnnSTlz3gFzCa2KpQ0wppeqaodUyCrzrkv1531XbFYH7kbeWX2l3flod5WtOI%2BEMN2kgLFArc6Z6emlbMHhdkoKfhFy8pGZzdDZW5AgJkiyqG8fl9zZMgjRGkKHMCYi5sdSBhdk%2BHDc4fR%2FNs7gkjxGqHYx3YRoMgBympwR7JR%2FD7qMQIU2RhAim%2BtDtW0VqbOQKivFLFU%2FleVPuIe5xeqs6sg%2FlcobfQXG1Vo86OvavCvqvZECSGRBQTnhYzoGuBkO0ZaIQozYJ2S%2F3rK20xAahB%2BdfvkqfJPAFWxVLuZXmWvdQSMT8y5K%2BCBpExT304j4%2BL5Sffknw4Gzwxg6b6%2BMtuObcaKoRIMb4Zgw7uRJJowoqD6dHAmb%2FzR2TUsGgymUqIWcnj4LBNA%2BLZ94MCuUHo1%2FhukyI%2FhS2%2FaYiPvebM8mFMJxWqSNm%2FamWNgZKCSo7zAv3MgCw19f%2BW1SFD5ZQTQzQlsrmj%2FutsT2QDN0nehtIg4SsI5Ym3TXthc9l%2F1L9umML7bpNUGOqUBAGw6aWDIOKmdJ8q6l4F3VI%2BX5D%2FvgZf3LcBdOJgi4H0A7TLgtnaRTHjLajZpuVqgM%2BwW6lNTi47FoTkMp7udsZVLByo7FLzTDsBagnwDqpfTcQmg23EFNwxt7vf%2B1TkEU6fkMc2S%2F1MaelIf%2BAuHzm6pqq1LURUI735wbd6%2BhsZOQ81TxuJ0vXWgjpGNpj2PxtP%2BprA8pQJeywf80CFIw7O94E0C&X-Amz-Signature=301db45a80275f4c4097c72a066c7a057816c2134cf2045e57ea1a68a85bec06&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TDEQTSSV%2F20260915%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260915T130840Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDQaCXVzLXdlc3QtMiJHMEUCIEC1kCtQM8pjvYBvBNVUovF%2BiQxHGkZ%2F5Xq9do1O%2BIvIAiEA4968ctQl%2Bou6zA72%2BxXVSR%2B7z4I12CDI1ASetxpWZYYqiAQI%2Ff%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJDQD4I3aZmENIMSOSrcA0CPPqdGQJp0wYJyLPdA%2FCFPKMCPgzFtQaFALVbjdvw4wsyZn0xs0iw2lsYI4mXamQhS8sUDDcpu9Fi%2FBjxcPKbO5xnkLE85HxW5k%2Fof9F0lHCRBkSceAmBnnSTlz3gFzCa2KpQ0wppeqaodUyCrzrkv1531XbFYH7kbeWX2l3flod5WtOI%2BEMN2kgLFArc6Z6emlbMHhdkoKfhFy8pGZzdDZW5AgJkiyqG8fl9zZMgjRGkKHMCYi5sdSBhdk%2BHDc4fR%2FNs7gkjxGqHYx3YRoMgBympwR7JR%2FD7qMQIU2RhAim%2BtDtW0VqbOQKivFLFU%2FleVPuIe5xeqs6sg%2FlcobfQXG1Vo86OvavCvqvZECSGRBQTnhYzoGuBkO0ZaIQozYJ2S%2F3rK20xAahB%2BdfvkqfJPAFWxVLuZXmWvdQSMT8y5K%2BCBpExT304j4%2BL5Sffknw4Gzwxg6b6%2BMtuObcaKoRIMb4Zgw7uRJJowoqD6dHAmb%2FzR2TUsGgymUqIWcnj4LBNA%2BLZ94MCuUHo1%2FhukyI%2FhS2%2FaYiPvebM8mFMJxWqSNm%2FamWNgZKCSo7zAv3MgCw19f%2BW1SFD5ZQTQzQlsrmj%2FutsT2QDN0nehtIg4SsI5Ym3TXthc9l%2F1L9umML7bpNUGOqUBAGw6aWDIOKmdJ8q6l4F3VI%2BX5D%2FvgZf3LcBdOJgi4H0A7TLgtnaRTHjLajZpuVqgM%2BwW6lNTi47FoTkMp7udsZVLByo7FLzTDsBagnwDqpfTcQmg23EFNwxt7vf%2B1TkEU6fkMc2S%2F1MaelIf%2BAuHzm6pqq1LURUI735wbd6%2BhsZOQ81TxuJ0vXWgjpGNpj2PxtP%2BprA8pQJeywf80CFIw7O94E0C&X-Amz-Signature=60db65aa056a871817d4b18ecb7a9911bccb3aa7459773855c66094c1c0ebeb6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
