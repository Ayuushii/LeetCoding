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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSDG7XIW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHb7YCjcFOyDh3ZN0sVvb7D5wXiAQPjq4PVJ4QDNa8O5AiAvFpc1sKwM0VDxeqWHvr0TOEdUA%2FEz%2F4XCOSzdYriffyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFkD7NiB%2FoG32Vt6MKtwDicOj%2FEbMfjYF6FsifGAqf7vgJByODLykiixyFGu1Aykm8kZjJRzIc01xr97G0yOAyOEQWcFgit6AmBIbGIjnuokB1qZ%2F9ap79lxni2yxtUbhbfnECI3cj5rC7b7B%2Bd6GFjzp2Gzi7DfKxaZniN6uMZ8IMYsQAME07rd5aTcsi3Kr4%2BFWiMCBF%2BU41k6JR8tm%2BlH1OBcDuVria%2BluNLFuYZIHt4iK2ry%2BK53MQ8aNkC5g6Cy9L26aPcGuTc2P67pjLQf37uP7sDTvDfcNqLNOhpT9gj0OhuWQrQbkaS2QtFjUkpkxOsEcz%2F9UhbmIeKpY8aiyisa2f9a8CEpB8P7wD1oCnGrsMCbjy1fr599ddnzh7jRcH0AAoy5FgH88H8K405LQIC%2B3OfKFz%2Fut0lLHUwXMLOmuIdu10Eu%2B42Tx0e%2FqhbnouKzXgSh13zkB%2BcaMcSkITvUmbfpBulLfjU2DzBrAI0c0S7UIMDrLWYKnrc41h3MegRohtWF9Ya%2BM%2FWXO47rOARD4e5TRw%2FxOpilcPPf%2Ft9vnAxXftKIt0c%2F9EAv%2FVh8Gff%2Bu%2F3DaOo1aywOuRxp1sklwQjph7ljpCPx7%2FCysP%2FpaZ85OgUzg1Wlx70x5FmdvW%2FlSqeuYyIQwt6bHzwY6pgGf0Suc3O%2BGleV%2BoOEbuD7skRoajYq8qmNRrP%2BEdFbaFV2Vd5%2F6Et1eMh%2BNUD1DfOj1g%2FRZe%2BoAtVo3ELgwHUsCt0d4dNy1fhvSgv%2FXl%2B%2BpjQWbvOi78SfzJrkHRNdlTOzpNZ4yC8ETrA%2B7Bhmkulo4WBhmj7L8j56JQVuHogNJvg0lqPAfyfDBxNUTTitIkTvVa%2BNDgtUCwUqZGQbyRJpF2g1JLK9Y&X-Amz-Signature=ddec1dc60791c956b8c443d5d7f31b9bbb40fa912129c4a9f15c9c588b9effc1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSDG7XIW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHb7YCjcFOyDh3ZN0sVvb7D5wXiAQPjq4PVJ4QDNa8O5AiAvFpc1sKwM0VDxeqWHvr0TOEdUA%2FEz%2F4XCOSzdYriffyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFkD7NiB%2FoG32Vt6MKtwDicOj%2FEbMfjYF6FsifGAqf7vgJByODLykiixyFGu1Aykm8kZjJRzIc01xr97G0yOAyOEQWcFgit6AmBIbGIjnuokB1qZ%2F9ap79lxni2yxtUbhbfnECI3cj5rC7b7B%2Bd6GFjzp2Gzi7DfKxaZniN6uMZ8IMYsQAME07rd5aTcsi3Kr4%2BFWiMCBF%2BU41k6JR8tm%2BlH1OBcDuVria%2BluNLFuYZIHt4iK2ry%2BK53MQ8aNkC5g6Cy9L26aPcGuTc2P67pjLQf37uP7sDTvDfcNqLNOhpT9gj0OhuWQrQbkaS2QtFjUkpkxOsEcz%2F9UhbmIeKpY8aiyisa2f9a8CEpB8P7wD1oCnGrsMCbjy1fr599ddnzh7jRcH0AAoy5FgH88H8K405LQIC%2B3OfKFz%2Fut0lLHUwXMLOmuIdu10Eu%2B42Tx0e%2FqhbnouKzXgSh13zkB%2BcaMcSkITvUmbfpBulLfjU2DzBrAI0c0S7UIMDrLWYKnrc41h3MegRohtWF9Ya%2BM%2FWXO47rOARD4e5TRw%2FxOpilcPPf%2Ft9vnAxXftKIt0c%2F9EAv%2FVh8Gff%2Bu%2F3DaOo1aywOuRxp1sklwQjph7ljpCPx7%2FCysP%2FpaZ85OgUzg1Wlx70x5FmdvW%2FlSqeuYyIQwt6bHzwY6pgGf0Suc3O%2BGleV%2BoOEbuD7skRoajYq8qmNRrP%2BEdFbaFV2Vd5%2F6Et1eMh%2BNUD1DfOj1g%2FRZe%2BoAtVo3ELgwHUsCt0d4dNy1fhvSgv%2FXl%2B%2BpjQWbvOi78SfzJrkHRNdlTOzpNZ4yC8ETrA%2B7Bhmkulo4WBhmj7L8j56JQVuHogNJvg0lqPAfyfDBxNUTTitIkTvVa%2BNDgtUCwUqZGQbyRJpF2g1JLK9Y&X-Amz-Signature=fe1ecb81b61707502f70d8a25a3423e7daca87fe61da0cf16d047ffaaa9404a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SSDG7XIW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHb7YCjcFOyDh3ZN0sVvb7D5wXiAQPjq4PVJ4QDNa8O5AiAvFpc1sKwM0VDxeqWHvr0TOEdUA%2FEz%2F4XCOSzdYriffyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMFkD7NiB%2FoG32Vt6MKtwDicOj%2FEbMfjYF6FsifGAqf7vgJByODLykiixyFGu1Aykm8kZjJRzIc01xr97G0yOAyOEQWcFgit6AmBIbGIjnuokB1qZ%2F9ap79lxni2yxtUbhbfnECI3cj5rC7b7B%2Bd6GFjzp2Gzi7DfKxaZniN6uMZ8IMYsQAME07rd5aTcsi3Kr4%2BFWiMCBF%2BU41k6JR8tm%2BlH1OBcDuVria%2BluNLFuYZIHt4iK2ry%2BK53MQ8aNkC5g6Cy9L26aPcGuTc2P67pjLQf37uP7sDTvDfcNqLNOhpT9gj0OhuWQrQbkaS2QtFjUkpkxOsEcz%2F9UhbmIeKpY8aiyisa2f9a8CEpB8P7wD1oCnGrsMCbjy1fr599ddnzh7jRcH0AAoy5FgH88H8K405LQIC%2B3OfKFz%2Fut0lLHUwXMLOmuIdu10Eu%2B42Tx0e%2FqhbnouKzXgSh13zkB%2BcaMcSkITvUmbfpBulLfjU2DzBrAI0c0S7UIMDrLWYKnrc41h3MegRohtWF9Ya%2BM%2FWXO47rOARD4e5TRw%2FxOpilcPPf%2Ft9vnAxXftKIt0c%2F9EAv%2FVh8Gff%2Bu%2F3DaOo1aywOuRxp1sklwQjph7ljpCPx7%2FCysP%2FpaZ85OgUzg1Wlx70x5FmdvW%2FlSqeuYyIQwt6bHzwY6pgGf0Suc3O%2BGleV%2BoOEbuD7skRoajYq8qmNRrP%2BEdFbaFV2Vd5%2F6Et1eMh%2BNUD1DfOj1g%2FRZe%2BoAtVo3ELgwHUsCt0d4dNy1fhvSgv%2FXl%2B%2BpjQWbvOi78SfzJrkHRNdlTOzpNZ4yC8ETrA%2B7Bhmkulo4WBhmj7L8j56JQVuHogNJvg0lqPAfyfDBxNUTTitIkTvVa%2BNDgtUCwUqZGQbyRJpF2g1JLK9Y&X-Amz-Signature=9ca499afeb99f43b324a077c98d6a32d7fc4fb6003d0991bb363e3de0fd222e4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6RUMULW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHHSerIbZt1oGqMj6D32CfDElytN2zPuFOnhg9qoSS5WAiBLn1%2FCfXICEknmbXFJqwEk3dISvARC9f%2B1BJhth30GHyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJbzTt6feGHNUX%2B1KKtwDxEp%2BrEcOKtJkbpQaS6Iu7%2FwzFhYELp9Sswz81KVU6KxkXrG8kyDHD9OoV%2BMzHE%2Fi1Lp3snWGiJBLK5CxGU6wXPXhG0jvtIOxLhoAWoGZuaAfu8z4CO2mVW%2F%2FbpTkPNEJQQqZyXmP%2FZdfwclaiCkBRxynI%2Fhmdlbqrqdy2d1VTUEjF5%2F7XxtG%2FJsnwWgurWRYZNW84rmkFuSglE2eT8ceta3hWgd2cUoBmI4GsxIVOprUvCo8W7sOQ7vseUawgkmpMpAS6%2FJ%2BrxPZuZ2VuHArtPPF7%2BNRu4U7vLLb9g6G%2Fcc0I2JkJVNVYHcuMF5rmEJiKJdMGMjc3UR6k04Zwlz02b%2BtjX7ScG1omzs8ju%2FhST0B%2FFXUAcAOr8JDhl%2B6e4TrjqL2EJlJqVrF9Tjls50QVT6VBXSUYzuR8mW7YCEvuOE1VmESd7nQq%2BgE12Zd%2BPTaAfTwdp8Nutlc7jQRflrBB%2FqKzW%2BLzNSdIX8PEL8rXlR5lQVx7sz%2FS5TxcWIx1WLmVRPqR3UcgLgHOta1ntV2Jqeq8wO6aDWsAbCrsUUzrxC3DlQqFTM5a%2Bnx46Aqoy1zged2Aq607cxOKPpj9is8TJ9Sn7SXIHSGzwN9mFTQdNCZZPLHhaXw7DmFHCsw%2BajHzwY6pgEBmrZHLnWz7ocVhhJAdD31kQBr9dcZtSFjJ2OBChvqSaJT9x3IPcIICMLSdkRGyiacXkUrDy9WlSCMJbMRU3ubfG33SZFVvxbVCPiiNODrr4Xhprco7LxayEoZJuC1JC5B1lv0ftasO6qsgVS9UQ28NfqfZWchAqevE%2BkHHOpWxzCHnGWgXWIrA4V2devUgLmvF%2Foo%2FVIxQMvxdmDJrTxv3J9TOr43&X-Amz-Signature=e3af816d2d52534894e026166b06bbbb423ab18ee77a66fe6f75e685807c119f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6RUMULW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHHSerIbZt1oGqMj6D32CfDElytN2zPuFOnhg9qoSS5WAiBLn1%2FCfXICEknmbXFJqwEk3dISvARC9f%2B1BJhth30GHyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJbzTt6feGHNUX%2B1KKtwDxEp%2BrEcOKtJkbpQaS6Iu7%2FwzFhYELp9Sswz81KVU6KxkXrG8kyDHD9OoV%2BMzHE%2Fi1Lp3snWGiJBLK5CxGU6wXPXhG0jvtIOxLhoAWoGZuaAfu8z4CO2mVW%2F%2FbpTkPNEJQQqZyXmP%2FZdfwclaiCkBRxynI%2Fhmdlbqrqdy2d1VTUEjF5%2F7XxtG%2FJsnwWgurWRYZNW84rmkFuSglE2eT8ceta3hWgd2cUoBmI4GsxIVOprUvCo8W7sOQ7vseUawgkmpMpAS6%2FJ%2BrxPZuZ2VuHArtPPF7%2BNRu4U7vLLb9g6G%2Fcc0I2JkJVNVYHcuMF5rmEJiKJdMGMjc3UR6k04Zwlz02b%2BtjX7ScG1omzs8ju%2FhST0B%2FFXUAcAOr8JDhl%2B6e4TrjqL2EJlJqVrF9Tjls50QVT6VBXSUYzuR8mW7YCEvuOE1VmESd7nQq%2BgE12Zd%2BPTaAfTwdp8Nutlc7jQRflrBB%2FqKzW%2BLzNSdIX8PEL8rXlR5lQVx7sz%2FS5TxcWIx1WLmVRPqR3UcgLgHOta1ntV2Jqeq8wO6aDWsAbCrsUUzrxC3DlQqFTM5a%2Bnx46Aqoy1zged2Aq607cxOKPpj9is8TJ9Sn7SXIHSGzwN9mFTQdNCZZPLHhaXw7DmFHCsw%2BajHzwY6pgEBmrZHLnWz7ocVhhJAdD31kQBr9dcZtSFjJ2OBChvqSaJT9x3IPcIICMLSdkRGyiacXkUrDy9WlSCMJbMRU3ubfG33SZFVvxbVCPiiNODrr4Xhprco7LxayEoZJuC1JC5B1lv0ftasO6qsgVS9UQ28NfqfZWchAqevE%2BkHHOpWxzCHnGWgXWIrA4V2devUgLmvF%2Foo%2FVIxQMvxdmDJrTxv3J9TOr43&X-Amz-Signature=bcafb7acc4a1c4ba3940e1a5632fd56b08506aa53b1b2fae22fa38245ddafbee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6RUMULW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHHSerIbZt1oGqMj6D32CfDElytN2zPuFOnhg9qoSS5WAiBLn1%2FCfXICEknmbXFJqwEk3dISvARC9f%2B1BJhth30GHyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJbzTt6feGHNUX%2B1KKtwDxEp%2BrEcOKtJkbpQaS6Iu7%2FwzFhYELp9Sswz81KVU6KxkXrG8kyDHD9OoV%2BMzHE%2Fi1Lp3snWGiJBLK5CxGU6wXPXhG0jvtIOxLhoAWoGZuaAfu8z4CO2mVW%2F%2FbpTkPNEJQQqZyXmP%2FZdfwclaiCkBRxynI%2Fhmdlbqrqdy2d1VTUEjF5%2F7XxtG%2FJsnwWgurWRYZNW84rmkFuSglE2eT8ceta3hWgd2cUoBmI4GsxIVOprUvCo8W7sOQ7vseUawgkmpMpAS6%2FJ%2BrxPZuZ2VuHArtPPF7%2BNRu4U7vLLb9g6G%2Fcc0I2JkJVNVYHcuMF5rmEJiKJdMGMjc3UR6k04Zwlz02b%2BtjX7ScG1omzs8ju%2FhST0B%2FFXUAcAOr8JDhl%2B6e4TrjqL2EJlJqVrF9Tjls50QVT6VBXSUYzuR8mW7YCEvuOE1VmESd7nQq%2BgE12Zd%2BPTaAfTwdp8Nutlc7jQRflrBB%2FqKzW%2BLzNSdIX8PEL8rXlR5lQVx7sz%2FS5TxcWIx1WLmVRPqR3UcgLgHOta1ntV2Jqeq8wO6aDWsAbCrsUUzrxC3DlQqFTM5a%2Bnx46Aqoy1zged2Aq607cxOKPpj9is8TJ9Sn7SXIHSGzwN9mFTQdNCZZPLHhaXw7DmFHCsw%2BajHzwY6pgEBmrZHLnWz7ocVhhJAdD31kQBr9dcZtSFjJ2OBChvqSaJT9x3IPcIICMLSdkRGyiacXkUrDy9WlSCMJbMRU3ubfG33SZFVvxbVCPiiNODrr4Xhprco7LxayEoZJuC1JC5B1lv0ftasO6qsgVS9UQ28NfqfZWchAqevE%2BkHHOpWxzCHnGWgXWIrA4V2devUgLmvF%2Foo%2FVIxQMvxdmDJrTxv3J9TOr43&X-Amz-Signature=0e85de44d787528f228e7457eb5c2fb179a2697b26d4c57b809df6252c292c52&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R6RUMULW%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIHHSerIbZt1oGqMj6D32CfDElytN2zPuFOnhg9qoSS5WAiBLn1%2FCfXICEknmbXFJqwEk3dISvARC9f%2B1BJhth30GHyqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMJbzTt6feGHNUX%2B1KKtwDxEp%2BrEcOKtJkbpQaS6Iu7%2FwzFhYELp9Sswz81KVU6KxkXrG8kyDHD9OoV%2BMzHE%2Fi1Lp3snWGiJBLK5CxGU6wXPXhG0jvtIOxLhoAWoGZuaAfu8z4CO2mVW%2F%2FbpTkPNEJQQqZyXmP%2FZdfwclaiCkBRxynI%2Fhmdlbqrqdy2d1VTUEjF5%2F7XxtG%2FJsnwWgurWRYZNW84rmkFuSglE2eT8ceta3hWgd2cUoBmI4GsxIVOprUvCo8W7sOQ7vseUawgkmpMpAS6%2FJ%2BrxPZuZ2VuHArtPPF7%2BNRu4U7vLLb9g6G%2Fcc0I2JkJVNVYHcuMF5rmEJiKJdMGMjc3UR6k04Zwlz02b%2BtjX7ScG1omzs8ju%2FhST0B%2FFXUAcAOr8JDhl%2B6e4TrjqL2EJlJqVrF9Tjls50QVT6VBXSUYzuR8mW7YCEvuOE1VmESd7nQq%2BgE12Zd%2BPTaAfTwdp8Nutlc7jQRflrBB%2FqKzW%2BLzNSdIX8PEL8rXlR5lQVx7sz%2FS5TxcWIx1WLmVRPqR3UcgLgHOta1ntV2Jqeq8wO6aDWsAbCrsUUzrxC3DlQqFTM5a%2Bnx46Aqoy1zged2Aq607cxOKPpj9is8TJ9Sn7SXIHSGzwN9mFTQdNCZZPLHhaXw7DmFHCsw%2BajHzwY6pgEBmrZHLnWz7ocVhhJAdD31kQBr9dcZtSFjJ2OBChvqSaJT9x3IPcIICMLSdkRGyiacXkUrDy9WlSCMJbMRU3ubfG33SZFVvxbVCPiiNODrr4Xhprco7LxayEoZJuC1JC5B1lv0ftasO6qsgVS9UQ28NfqfZWchAqevE%2BkHHOpWxzCHnGWgXWIrA4V2devUgLmvF%2Foo%2FVIxQMvxdmDJrTxv3J9TOr43&X-Amz-Signature=8a8b9e58c12c1892ddfb6895189babd6c9c1a053261ece54187cda29a1d8f462&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W6RQVDWA%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJHMEUCIQD0hztb%2BZuds2RkPUcUUwUYbNF7vjZ12bOKoOhaMzKVggIgJIs8%2FV%2FxMPIxwiDMGIb25%2BVbu4CboopBKJeSdes%2FmqQqiAQI8%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOtJbm5syem%2B16gXmircA8Y6ZFFpXD3%2BSyPpTpaxwuJOhHKKLSMtZCYTQ%2BLBpeevYxmOagszjsBorR32iIF5FmEMoJje5kulcZnK3LJrbqYzGrIlAe6AHnJFDag18MjDh4RoCbsWeiXMMooGPrwSbsjbraiBBpUbJ5umKDzblyxafse10Stbv7qx3Shi22N9LRKjcaVjHrYMZw9xGJaskIq8Z%2BYUszXnwXHzbWmwMoGfl2rEONrBNY7Ej%2BxSkdSqPfTHZGJcqm7wjUI2xHU3qVfTgFVTwT5Avbw42hEZxBZQugJLPmQb29iynEQH7V2zaczS3IqbxZNiM1Mg3eKD8cazmYqs3sa3EtPajzOnte6Y6vxjU%2FddyubZj0NC5gum%2BZT%2FmYSuB4efoz506sy8Mgo4V%2Fki6kueg%2FPyqgxYWWnZvIfrMX3XNTavoxSTtF%2B3vpuofVqThMFo9b%2FwcKcSyyersjx5VyBjZTvMWlOewqpD14A3aWhHu4pZcDPJR6BWbBL4IFOHy%2FZePyXTxmSbsMQeoyzpVQWVKxVP3MUDkXJDOpg0OI7RRGM8%2BC7C%2BRnF6yt%2BNzcWJKNdGcO%2FusgpDZv%2Fwrzuhr%2Fg3EFMiK0WIGpETjyHlD53Lvh4ICk%2BlrM9nz4zXCXIY90BX5hPMMeox88GOqUBpJSs1lokdM80L6cukjCfb%2B8JOiua5CB4RhretZSjaFuhA1WzXkY5f%2F4s5gWsD1kROis2tcyxAr222kY9XWwSQMHXPYAebQ8gePFLL9TpEJCwHSzJ8Q%2B05X3PPL7LgKBxKC9sXdRS4Ayk%2FWIIh0vwB5xiNynTyrH%2BvifBvPOhSEaMY0A10aW3e1as34UMhH54mJAtA%2FeGs%2Fqvkjgkq%2BS90aMlO9bv&X-Amz-Signature=ae4d5b227f6a1fefb17e986413b62b2332cab7be45a65a35af71921cc480fb44&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QDPNEBSH%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIAlB3XHICVB8g91XOCTtGahvdHuptlnLwqQTkUZKpOGFAiArgCLYP8YnQhAJc7oBRDivQTxJM%2BPo7P2H0DZ8kQZ8HSqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMk9G4LuugsTs7tjCWKtwDtF0%2FyE%2B3F0mPRX0ow2fclyOnlNJGWYkz8o7%2FW2pKwVu4U%2BxmRAoWB3uyGc%2Fb9rzpZJfcV2JpVqWMAU9tqeW%2BkPfnROLeZw9dvgp3Pi7jtXSAJlEz3Bc9JxtohNcVCVS%2F%2FKlTE%2FSGPpePFuzujT1G9Oz5LQY6VAsszEPSy6V3qdsLB%2B5%2BGqu3aZoQU92jVV54qiTuumZku%2BT6vXkIgtTQJFMlIgJssJXTdvh8lHbC3X3WuNjCiQy0hffhIWPsJl3QenEZ2CS8xGZhaAmBC7Ih3Pw7zfM3JnIb%2FFI8dhjuux%2F%2Fez6CipQqacK%2FHndN%2Br2Vz8jYQR5vCzKlsDAzA3V4XciqEethrhRl0yIiDebusxDuoFZeWJ7DZuK81LmXX1TjwF0vLf6jhbBe%2FeZhf0ZpfnT74J%2BEXSiQvoUi0cFDKAGhJ%2Fk%2BtaMPGxGBM5YLfYQR3etH4F5DvFnNDpR8BAacPRgoJOY3PSpb6Fq8BsPhCjyr2D8Xa8cdiyGGwnDVbH9V96Ww7Bqy5DWdznaQ8AZzTbg1K1QASfxdok%2FHFOnAWBKXDskhEw3PlX75hv9OdpHIDpcsU0DXePezXUFVrD90yrACveKIXCn0q69YxP74opf%2BpoxqENLZQtwrzm8wmKfHzwY6pgGWezgwhYvsZc9CjYpbTBeSVY5SNXuQhoc%2BtWjBXl1aUgl2f%2FUGN6FniNFxZ%2F7IrXXMSqRbFEYgqYI701PaRlPs0%2Ff2z3AKcxM9PJQPpDa0dz8CJfAslddUSDSsqSReEY8c8qLpfS4yrKz2Plao%2FT8IWwjj0ik4cARJjuIL0rWViv1xuvLa12zTu8uck43%2FAZcHjFZcmE2ABHEFOWD9F2S5%2BsZB7eKk&X-Amz-Signature=a661074ae14c56d72ec90f89c7fe059acefcdfa306bc687fe091442b90dd36d2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QDPNEBSH%2F20260429%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260429T100444Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECoaCXVzLXdlc3QtMiJGMEQCIAlB3XHICVB8g91XOCTtGahvdHuptlnLwqQTkUZKpOGFAiArgCLYP8YnQhAJc7oBRDivQTxJM%2BPo7P2H0DZ8kQZ8HSqIBAjz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMk9G4LuugsTs7tjCWKtwDtF0%2FyE%2B3F0mPRX0ow2fclyOnlNJGWYkz8o7%2FW2pKwVu4U%2BxmRAoWB3uyGc%2Fb9rzpZJfcV2JpVqWMAU9tqeW%2BkPfnROLeZw9dvgp3Pi7jtXSAJlEz3Bc9JxtohNcVCVS%2F%2FKlTE%2FSGPpePFuzujT1G9Oz5LQY6VAsszEPSy6V3qdsLB%2B5%2BGqu3aZoQU92jVV54qiTuumZku%2BT6vXkIgtTQJFMlIgJssJXTdvh8lHbC3X3WuNjCiQy0hffhIWPsJl3QenEZ2CS8xGZhaAmBC7Ih3Pw7zfM3JnIb%2FFI8dhjuux%2F%2Fez6CipQqacK%2FHndN%2Br2Vz8jYQR5vCzKlsDAzA3V4XciqEethrhRl0yIiDebusxDuoFZeWJ7DZuK81LmXX1TjwF0vLf6jhbBe%2FeZhf0ZpfnT74J%2BEXSiQvoUi0cFDKAGhJ%2Fk%2BtaMPGxGBM5YLfYQR3etH4F5DvFnNDpR8BAacPRgoJOY3PSpb6Fq8BsPhCjyr2D8Xa8cdiyGGwnDVbH9V96Ww7Bqy5DWdznaQ8AZzTbg1K1QASfxdok%2FHFOnAWBKXDskhEw3PlX75hv9OdpHIDpcsU0DXePezXUFVrD90yrACveKIXCn0q69YxP74opf%2BpoxqENLZQtwrzm8wmKfHzwY6pgGWezgwhYvsZc9CjYpbTBeSVY5SNXuQhoc%2BtWjBXl1aUgl2f%2FUGN6FniNFxZ%2F7IrXXMSqRbFEYgqYI701PaRlPs0%2Ff2z3AKcxM9PJQPpDa0dz8CJfAslddUSDSsqSReEY8c8qLpfS4yrKz2Plao%2FT8IWwjj0ik4cARJjuIL0rWViv1xuvLa12zTu8uck43%2FAZcHjFZcmE2ABHEFOWD9F2S5%2BsZB7eKk&X-Amz-Signature=e26692653d619559da1a4ca7094ea817cb5f609b5ffeef62df3b6c830b3466be&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
