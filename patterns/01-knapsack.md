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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVKOO33V%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0bV0tyUYC0y%2BQ032H9%2BKiarXeEOEQlE9R3DOoVPxg6AIhAKqILRWRaORjNpF4Fq4mThbMk9shVI4q%2B5xh6UUO4w6EKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwAjv6oWZvmu5yULq4q3AN1UrhRg36vSLCi3ktzq1mafyistK9rTc7NTDMYNIjRMNG2pAQcslfuVl1ks5rXHUzDV85wS52ns0WEx%2Fw%2BtZzJ32dbgY56xP6iuaCWxexAkzC%2BRzSE44sguH5M%2FL8qviFAcSt6GRQpimaaA4PMDnpqzl5itBXKGIuzmcsJ2TOjxj44s4fP%2FNFkrjw%2Fs%2FzYmNkEX7RsT%2FbIzm5xdZjpg3EpP7B67xPiRP7G5gHUbvThnstnSiyxcm%2FaELsSOAss%2FCUU78D%2FYADy3pdxrR6vuFvI5VXxLdBeuYXsTpI6MJwyaBPtrQYlrKJVqyTtGenwmr3M4XsyB5BqnmnTQQOJbBJNN%2FioOQRm6gpwHy8LLtgxJ1zsqAV08sw3gHe8EQJg2w3mIlFIl5tKT%2FbPh2Abzs6fh2tSwXfCfTzSG%2Fp5g9QBMbut4c2bNeYHt6bALCj5OUa6LoXgPKBWe8jTgKA3G7qc5Q8PMn18b7F2mIDVyFt7MUWiajWucCmgCIQPL5xmecY8cT4MeJbUD578Okqd5ekapL7YRMtQUASTof6SN1X6NXF3yjHJGbEMRHRjyBdkg%2BoeTMzfQZQ%2FJQaUE2h5W1ZC3o8WBiJsGOFjqfn9W%2FI5KCEYJe032Loms1C70DCn%2F6LXBjqkAXCGg5U%2FUhTYDA8bL0WK6SiXSGdbCW%2F2fXio6sKRRBtFzGlLIfKGH2545jm6ZYevjiCnB5v6%2BgBWysbXZkkya4r0rYY21icIj8JjZ9YrdlT%2F2T%2FyCXEgqVTnEobd0t8esUjMLyoRFVrf29FWzeZ7LDOgZODqX4NSLH%2Bad1mdPkJHIOfm%2BlhSJrVs0KwVAl1%2FkgwZivbtF90N5C19JXsL03hw23Y8&X-Amz-Signature=c4f3ebcf82e1c93c21007f1be23f4992fdf0ff0dbd29c67f742152fee872b03e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVKOO33V%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0bV0tyUYC0y%2BQ032H9%2BKiarXeEOEQlE9R3DOoVPxg6AIhAKqILRWRaORjNpF4Fq4mThbMk9shVI4q%2B5xh6UUO4w6EKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwAjv6oWZvmu5yULq4q3AN1UrhRg36vSLCi3ktzq1mafyistK9rTc7NTDMYNIjRMNG2pAQcslfuVl1ks5rXHUzDV85wS52ns0WEx%2Fw%2BtZzJ32dbgY56xP6iuaCWxexAkzC%2BRzSE44sguH5M%2FL8qviFAcSt6GRQpimaaA4PMDnpqzl5itBXKGIuzmcsJ2TOjxj44s4fP%2FNFkrjw%2Fs%2FzYmNkEX7RsT%2FbIzm5xdZjpg3EpP7B67xPiRP7G5gHUbvThnstnSiyxcm%2FaELsSOAss%2FCUU78D%2FYADy3pdxrR6vuFvI5VXxLdBeuYXsTpI6MJwyaBPtrQYlrKJVqyTtGenwmr3M4XsyB5BqnmnTQQOJbBJNN%2FioOQRm6gpwHy8LLtgxJ1zsqAV08sw3gHe8EQJg2w3mIlFIl5tKT%2FbPh2Abzs6fh2tSwXfCfTzSG%2Fp5g9QBMbut4c2bNeYHt6bALCj5OUa6LoXgPKBWe8jTgKA3G7qc5Q8PMn18b7F2mIDVyFt7MUWiajWucCmgCIQPL5xmecY8cT4MeJbUD578Okqd5ekapL7YRMtQUASTof6SN1X6NXF3yjHJGbEMRHRjyBdkg%2BoeTMzfQZQ%2FJQaUE2h5W1ZC3o8WBiJsGOFjqfn9W%2FI5KCEYJe032Loms1C70DCn%2F6LXBjqkAXCGg5U%2FUhTYDA8bL0WK6SiXSGdbCW%2F2fXio6sKRRBtFzGlLIfKGH2545jm6ZYevjiCnB5v6%2BgBWysbXZkkya4r0rYY21icIj8JjZ9YrdlT%2F2T%2FyCXEgqVTnEobd0t8esUjMLyoRFVrf29FWzeZ7LDOgZODqX4NSLH%2Bad1mdPkJHIOfm%2BlhSJrVs0KwVAl1%2FkgwZivbtF90N5C19JXsL03hw23Y8&X-Amz-Signature=02edefbe6acb90a71037dc2a442ba1d793ba24d7f2f7cb40fdbe2eb21ab614b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YVKOO33V%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD0bV0tyUYC0y%2BQ032H9%2BKiarXeEOEQlE9R3DOoVPxg6AIhAKqILRWRaORjNpF4Fq4mThbMk9shVI4q%2B5xh6UUO4w6EKogECIL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwAjv6oWZvmu5yULq4q3AN1UrhRg36vSLCi3ktzq1mafyistK9rTc7NTDMYNIjRMNG2pAQcslfuVl1ks5rXHUzDV85wS52ns0WEx%2Fw%2BtZzJ32dbgY56xP6iuaCWxexAkzC%2BRzSE44sguH5M%2FL8qviFAcSt6GRQpimaaA4PMDnpqzl5itBXKGIuzmcsJ2TOjxj44s4fP%2FNFkrjw%2Fs%2FzYmNkEX7RsT%2FbIzm5xdZjpg3EpP7B67xPiRP7G5gHUbvThnstnSiyxcm%2FaELsSOAss%2FCUU78D%2FYADy3pdxrR6vuFvI5VXxLdBeuYXsTpI6MJwyaBPtrQYlrKJVqyTtGenwmr3M4XsyB5BqnmnTQQOJbBJNN%2FioOQRm6gpwHy8LLtgxJ1zsqAV08sw3gHe8EQJg2w3mIlFIl5tKT%2FbPh2Abzs6fh2tSwXfCfTzSG%2Fp5g9QBMbut4c2bNeYHt6bALCj5OUa6LoXgPKBWe8jTgKA3G7qc5Q8PMn18b7F2mIDVyFt7MUWiajWucCmgCIQPL5xmecY8cT4MeJbUD578Okqd5ekapL7YRMtQUASTof6SN1X6NXF3yjHJGbEMRHRjyBdkg%2BoeTMzfQZQ%2FJQaUE2h5W1ZC3o8WBiJsGOFjqfn9W%2FI5KCEYJe032Loms1C70DCn%2F6LXBjqkAXCGg5U%2FUhTYDA8bL0WK6SiXSGdbCW%2F2fXio6sKRRBtFzGlLIfKGH2545jm6ZYevjiCnB5v6%2BgBWysbXZkkya4r0rYY21icIj8JjZ9YrdlT%2F2T%2FyCXEgqVTnEobd0t8esUjMLyoRFVrf29FWzeZ7LDOgZODqX4NSLH%2Bad1mdPkJHIOfm%2BlhSJrVs0KwVAl1%2FkgwZivbtF90N5C19JXsL03hw23Y8&X-Amz-Signature=70eb2c1807a564e5129b9a1203c383844712d59e7205a204b8c61c10146727ec&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XXEXVU2%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMFAMoqiECwAj0Km%2BQUMBRCgzIm81mOuh4kdK1rBBt8AiEA9wWFb857zwn%2BsrO2uVRFNkRu3ZVGf2HVkr5uYl%2BO5cYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLhMf9zpL3XFFUZvNCrcA8y8%2FWx3uSCHi4Erwj6x018AFssr9sDgdi8GvEMwkwUKyZ34CxBpckJgP%2Bci8QUppKT53MjBlRwBElhohv1%2F7SEQj5Rq%2BnLTKzd3F7q%2B7J0ikNsty416I6en7Md9JFY0aktDxpp65UaVhRGBasrhKlO0aoEpmCg0QyWnCtEI%2Fg7NzdmMCKNpQYtYU9DDaWisUkMye7YsTdhan7v%2Bq9BIn0OGIHUtywO63nRlOpgedFn3ekmLqm1%2FrGfx4FA4%2Bg2yAQ9RAzmCSA5RBPbXQV90gG94Ob08WPAl1T5uI4mvm%2BtQ1w0%2B8FvCXWLgRYgfzhiwO9RbxJQo3uHBFT5OxhMippEL4dDtzwdAw2ks0jVPi3Mxj8e25%2BoY5%2Bn4z8Cl4w4%2BUiZltV3gzx1q0syaXau8xq0rjrVx25ALUskNZ4DLstog%2B9gybM6L3x2lo4sHkAN3Q4rveYf7iyqgvLbG21wkVTKVFMQqJCkvQujscu407FT7zKuw40uT4bi%2FIOkbDQmN4jK2r7qfy9hpTtJ2jjtNoO%2FsjXp4Yw6ndMDjqMYdIHCvPjeIBTy1dKOtrJGkkDDLSCakDC%2F7nKcanCl0pSOFba78o0FioP1ARyJwueIDiy3h2ybSQyZ%2BqBk8daRtMIr%2BotcGOqUB918aK93f0%2FnSMGLypKCcEvZCu6zFP7jY9kt2%2FoTt%2BNgu8ePOVkB4f9s3ifFRNutJza0R5asUSvCEZLGRFmcnlfBTaSVyPzcHs%2BU7yDl4dJbDfJILYtu5WcnlaicsQRjnJLVSP%2FLKg79D8ZNS3cxcLN5zf7ktGqAZYE6hUwfw7PsQgNv4LX1a7x4C4n84rNGY3N7%2FSgj0Ec0nGWr75FUE2b0OtTFV&X-Amz-Signature=131b6aff59b2345de38dd630e547bfa1e8504e1e065e3d0d5c54a7b37bbd1f59&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XXEXVU2%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMFAMoqiECwAj0Km%2BQUMBRCgzIm81mOuh4kdK1rBBt8AiEA9wWFb857zwn%2BsrO2uVRFNkRu3ZVGf2HVkr5uYl%2BO5cYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLhMf9zpL3XFFUZvNCrcA8y8%2FWx3uSCHi4Erwj6x018AFssr9sDgdi8GvEMwkwUKyZ34CxBpckJgP%2Bci8QUppKT53MjBlRwBElhohv1%2F7SEQj5Rq%2BnLTKzd3F7q%2B7J0ikNsty416I6en7Md9JFY0aktDxpp65UaVhRGBasrhKlO0aoEpmCg0QyWnCtEI%2Fg7NzdmMCKNpQYtYU9DDaWisUkMye7YsTdhan7v%2Bq9BIn0OGIHUtywO63nRlOpgedFn3ekmLqm1%2FrGfx4FA4%2Bg2yAQ9RAzmCSA5RBPbXQV90gG94Ob08WPAl1T5uI4mvm%2BtQ1w0%2B8FvCXWLgRYgfzhiwO9RbxJQo3uHBFT5OxhMippEL4dDtzwdAw2ks0jVPi3Mxj8e25%2BoY5%2Bn4z8Cl4w4%2BUiZltV3gzx1q0syaXau8xq0rjrVx25ALUskNZ4DLstog%2B9gybM6L3x2lo4sHkAN3Q4rveYf7iyqgvLbG21wkVTKVFMQqJCkvQujscu407FT7zKuw40uT4bi%2FIOkbDQmN4jK2r7qfy9hpTtJ2jjtNoO%2FsjXp4Yw6ndMDjqMYdIHCvPjeIBTy1dKOtrJGkkDDLSCakDC%2F7nKcanCl0pSOFba78o0FioP1ARyJwueIDiy3h2ybSQyZ%2BqBk8daRtMIr%2BotcGOqUB918aK93f0%2FnSMGLypKCcEvZCu6zFP7jY9kt2%2FoTt%2BNgu8ePOVkB4f9s3ifFRNutJza0R5asUSvCEZLGRFmcnlfBTaSVyPzcHs%2BU7yDl4dJbDfJILYtu5WcnlaicsQRjnJLVSP%2FLKg79D8ZNS3cxcLN5zf7ktGqAZYE6hUwfw7PsQgNv4LX1a7x4C4n84rNGY3N7%2FSgj0Ec0nGWr75FUE2b0OtTFV&X-Amz-Signature=f02982022c8be8db106e638e654512b664ee5f35b33f8fbe6ff1718a99d31458&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XXEXVU2%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMFAMoqiECwAj0Km%2BQUMBRCgzIm81mOuh4kdK1rBBt8AiEA9wWFb857zwn%2BsrO2uVRFNkRu3ZVGf2HVkr5uYl%2BO5cYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLhMf9zpL3XFFUZvNCrcA8y8%2FWx3uSCHi4Erwj6x018AFssr9sDgdi8GvEMwkwUKyZ34CxBpckJgP%2Bci8QUppKT53MjBlRwBElhohv1%2F7SEQj5Rq%2BnLTKzd3F7q%2B7J0ikNsty416I6en7Md9JFY0aktDxpp65UaVhRGBasrhKlO0aoEpmCg0QyWnCtEI%2Fg7NzdmMCKNpQYtYU9DDaWisUkMye7YsTdhan7v%2Bq9BIn0OGIHUtywO63nRlOpgedFn3ekmLqm1%2FrGfx4FA4%2Bg2yAQ9RAzmCSA5RBPbXQV90gG94Ob08WPAl1T5uI4mvm%2BtQ1w0%2B8FvCXWLgRYgfzhiwO9RbxJQo3uHBFT5OxhMippEL4dDtzwdAw2ks0jVPi3Mxj8e25%2BoY5%2Bn4z8Cl4w4%2BUiZltV3gzx1q0syaXau8xq0rjrVx25ALUskNZ4DLstog%2B9gybM6L3x2lo4sHkAN3Q4rveYf7iyqgvLbG21wkVTKVFMQqJCkvQujscu407FT7zKuw40uT4bi%2FIOkbDQmN4jK2r7qfy9hpTtJ2jjtNoO%2FsjXp4Yw6ndMDjqMYdIHCvPjeIBTy1dKOtrJGkkDDLSCakDC%2F7nKcanCl0pSOFba78o0FioP1ARyJwueIDiy3h2ybSQyZ%2BqBk8daRtMIr%2BotcGOqUB918aK93f0%2FnSMGLypKCcEvZCu6zFP7jY9kt2%2FoTt%2BNgu8ePOVkB4f9s3ifFRNutJza0R5asUSvCEZLGRFmcnlfBTaSVyPzcHs%2BU7yDl4dJbDfJILYtu5WcnlaicsQRjnJLVSP%2FLKg79D8ZNS3cxcLN5zf7ktGqAZYE6hUwfw7PsQgNv4LX1a7x4C4n84rNGY3N7%2FSgj0Ec0nGWr75FUE2b0OtTFV&X-Amz-Signature=b938e95ad6152b575d4591e0d397bf280af27225c092d877d598731920744213&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666XXEXVU2%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFMFAMoqiECwAj0Km%2BQUMBRCgzIm81mOuh4kdK1rBBt8AiEA9wWFb857zwn%2BsrO2uVRFNkRu3ZVGf2HVkr5uYl%2BO5cYqiAQIgv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLhMf9zpL3XFFUZvNCrcA8y8%2FWx3uSCHi4Erwj6x018AFssr9sDgdi8GvEMwkwUKyZ34CxBpckJgP%2Bci8QUppKT53MjBlRwBElhohv1%2F7SEQj5Rq%2BnLTKzd3F7q%2B7J0ikNsty416I6en7Md9JFY0aktDxpp65UaVhRGBasrhKlO0aoEpmCg0QyWnCtEI%2Fg7NzdmMCKNpQYtYU9DDaWisUkMye7YsTdhan7v%2Bq9BIn0OGIHUtywO63nRlOpgedFn3ekmLqm1%2FrGfx4FA4%2Bg2yAQ9RAzmCSA5RBPbXQV90gG94Ob08WPAl1T5uI4mvm%2BtQ1w0%2B8FvCXWLgRYgfzhiwO9RbxJQo3uHBFT5OxhMippEL4dDtzwdAw2ks0jVPi3Mxj8e25%2BoY5%2Bn4z8Cl4w4%2BUiZltV3gzx1q0syaXau8xq0rjrVx25ALUskNZ4DLstog%2B9gybM6L3x2lo4sHkAN3Q4rveYf7iyqgvLbG21wkVTKVFMQqJCkvQujscu407FT7zKuw40uT4bi%2FIOkbDQmN4jK2r7qfy9hpTtJ2jjtNoO%2FsjXp4Yw6ndMDjqMYdIHCvPjeIBTy1dKOtrJGkkDDLSCakDC%2F7nKcanCl0pSOFba78o0FioP1ARyJwueIDiy3h2ybSQyZ%2BqBk8daRtMIr%2BotcGOqUB918aK93f0%2FnSMGLypKCcEvZCu6zFP7jY9kt2%2FoTt%2BNgu8ePOVkB4f9s3ifFRNutJza0R5asUSvCEZLGRFmcnlfBTaSVyPzcHs%2BU7yDl4dJbDfJILYtu5WcnlaicsQRjnJLVSP%2FLKg79D8ZNS3cxcLN5zf7ktGqAZYE6hUwfw7PsQgNv4LX1a7x4C4n84rNGY3N7%2FSgj0Ec0nGWr75FUE2b0OtTFV&X-Amz-Signature=833eea77bcc21cda6e396774d2994c01e4ff4b85b3ef7ef11bc6992530e7d0a0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663QZLIBI4%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICG9nm9aNFfRDDRwE0iX1GdwaUKmEFpUOZBi7F4N7QIsAiBI1DeJvNoqqYD6Aed2o7VcloldPdq0jh7nGnA4Bj55QSqIBAiC%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM2PbuMeFLWsHybUZqKtwD9XDQXCTBSVeIux0eWhgS6adbBSihsCcgySmhOWWV22%2FuHd7vBYhhGIsGEcKSYgYNIZPXpw31icC7kpmHfTKV1Qwav4A7x%2FRVP%2BQpf0Zq29FxQ%2FwMjsobjSGnBNt0QNM%2BevdME4O9QLIn3kU1Onrzo6dxEiS6Rz64hZuh09DnPEDsA0lz5gQpkG2vZcXJ2pZsMSZgzSTtfc4ldusjVv226pqJo7kYf5J5ab8Dql0FNJXV35EadwpFbjijscm3VoMrpkZnTc%2B0wn25lhfrnvaOgtpTra4sQxrD9EkMQcb3ams1ogxmJ%2Bqw5MXvheMuWrPUqefc5RkWPsbSUWq1YzhjvDzoA4mgbsQEY%2FJNxowFCa3M6LSdJPt0sEraeJX4CSp%2BK3CSlcsBona%2ByPzJsHEXs0wD95v4rBvlQmUpApN1e%2FP4h9nt4NYemYJlY72HW1t5V91rvEyhyL2iVFaO2IgZ4DGFplhsg5FOhu%2FzR0QewYwCJfJyEpuBE%2BpiA9ptr5ghugjQAm6rPrTS2TarSceyw4w3Zus0kVA2%2F0wTw7VHcbu4x9%2FJQyWcdMOjLHmIi0DcEZk5AN7Z6kbQHyCtifYjAeUlktRCY359Gvw1CjIE763mtmYOkmsE6QhyfY8wiv%2Bi1wY6pgGvqElZQGf9KmimVBH7KIFv35eOgpw1EfCIzsuk2LvyAYR8h8alMUuGA5Ist1%2Fa0Er%2FUjGw34F%2FUzifyAGfIKNGv712bOQ%2FSVIaoewdg9W5XI7%2FccOrCsZ4MkPNfL%2BiBRiJmGQMyZsnLCwJuW6DuxPy0Aursh0jFsf0rwuLVyIs3UbHsrjrIJqpZbH5Yhx6W1gCqOU8h2E9ZF44xHUgODztUGDMQ8aZ&X-Amz-Signature=7a228a761a627e61b45b9074565f9354e60a6a120ac1aac2bf205e4692c18f07&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZV6NL6AQ%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB4Q2BTemtKL2Mk8vTGB9Thg4et3lZJEx4rgrusD6J7bAiBVE2U4ZG7aaY91WGBd8q7PxVMinuNjnAO2O%2Fo4Roc3syqIBAiC%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdKTxVlqiHbpDTjvIKtwDhc8s4tat7IQDNLOB27FuIxfPtbTPI0vDaZes3uLr%2FeqUUHLGSjtgvSTag0YbTPXupJCJf60BLK9DGFs1n9Pbnwzo2Mei1sYQ5As%2BtZ9kfXP3Q9hO6guHO5kBhE14%2FEox%2BAQ2TqGBJh%2Bri4aSK9wnWa2EmRrT009Cz5AVqX4DlmweK8VcWLv6mKAddJJrVv4ZP1Kvkgju%2BTDD6ZYtfYPvMXRnh87jytB%2BDw8Fz9nzdcG%2F5isaD7KZqKalCEzTi8CPZT5QbfLILdgEk9Xrl2gaoVWggS1jBgHNHkEPfJl2s0KdJpxHCIulzSkKsisB0Es3JQbcastvaoTf7QWFqkDQqzn6GhoFX%2B8aoKwtHVa2f9CzZut6KrVQJ%2FmxEMqKID%2FrQow4E0BGqss51U72AyE%2BnOWzDSZb2HFAD407FZatSvo7EC8WYitT6%2FVps3tkCVj8quRyZv2IUHtiKuXVoDG%2F3XmgIamjC%2BhsYNgfoyc3e8KqXVUzw5%2FnIKAZIW5q938LDNPdJoAtRE5vzdClSnbD0XPdpCEnD%2FPHQPMXBzkncZbC4d5X7qLjJxuTw5o7jb4gwPnu6ms7JUU7tE5WGLOSp2edXF5JL%2FuNkdGVAgXAwuD%2FaiDYUFwRV8ipY%2B0w3%2F6i1wY6pgFQwquaIsAittdWSHGyiOAtYPVj9nDUZP9NdB%2F9p6Ayf0CTCXwNM1J9eVkF%2B8QpobZN7H%2Fabu6yroKp%2FTHJrtbH3sL%2FE44RQ8koHLg3eAfem5Q2KxT%2BTse3oE9LRe2kxNOiCt%2FVOPAY%2BR1LAgTYI0Ixr2RDDxoyl5G%2FMs6TEz89UhtHX6rkxixJvO86%2BWUi7BgqvbGqOs6UdX%2Bp7O4Tnp7keOGLLjMs&X-Amz-Signature=1f060bb2ce120492f6914cbbe1f91aac06185792e3acbf391df3458f1fb0f73b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZV6NL6AQ%2F20261102%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261102T174953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELn%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIB4Q2BTemtKL2Mk8vTGB9Thg4et3lZJEx4rgrusD6J7bAiBVE2U4ZG7aaY91WGBd8q7PxVMinuNjnAO2O%2Fo4Roc3syqIBAiC%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMdKTxVlqiHbpDTjvIKtwDhc8s4tat7IQDNLOB27FuIxfPtbTPI0vDaZes3uLr%2FeqUUHLGSjtgvSTag0YbTPXupJCJf60BLK9DGFs1n9Pbnwzo2Mei1sYQ5As%2BtZ9kfXP3Q9hO6guHO5kBhE14%2FEox%2BAQ2TqGBJh%2Bri4aSK9wnWa2EmRrT009Cz5AVqX4DlmweK8VcWLv6mKAddJJrVv4ZP1Kvkgju%2BTDD6ZYtfYPvMXRnh87jytB%2BDw8Fz9nzdcG%2F5isaD7KZqKalCEzTi8CPZT5QbfLILdgEk9Xrl2gaoVWggS1jBgHNHkEPfJl2s0KdJpxHCIulzSkKsisB0Es3JQbcastvaoTf7QWFqkDQqzn6GhoFX%2B8aoKwtHVa2f9CzZut6KrVQJ%2FmxEMqKID%2FrQow4E0BGqss51U72AyE%2BnOWzDSZb2HFAD407FZatSvo7EC8WYitT6%2FVps3tkCVj8quRyZv2IUHtiKuXVoDG%2F3XmgIamjC%2BhsYNgfoyc3e8KqXVUzw5%2FnIKAZIW5q938LDNPdJoAtRE5vzdClSnbD0XPdpCEnD%2FPHQPMXBzkncZbC4d5X7qLjJxuTw5o7jb4gwPnu6ms7JUU7tE5WGLOSp2edXF5JL%2FuNkdGVAgXAwuD%2FaiDYUFwRV8ipY%2B0w3%2F6i1wY6pgFQwquaIsAittdWSHGyiOAtYPVj9nDUZP9NdB%2F9p6Ayf0CTCXwNM1J9eVkF%2B8QpobZN7H%2Fabu6yroKp%2FTHJrtbH3sL%2FE44RQ8koHLg3eAfem5Q2KxT%2BTse3oE9LRe2kxNOiCt%2FVOPAY%2BR1LAgTYI0Ixr2RDDxoyl5G%2FMs6TEz89UhtHX6rkxixJvO86%2BWUi7BgqvbGqOs6UdX%2Bp7O4Tnp7keOGLLjMs&X-Amz-Signature=eb57bc2bd11a6b66292a40e3a4f6d2ccea9eea43d9cfae5b2158938100866422&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
