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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432Z4USR%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHqiQCHUjdAXIhmSu19AZyKaJ2ZsWMaFHOp72yOlnKHaAiANDOaWHFqkGfWZQC7RzHwEdURNisxAKZKA7uBmH0y4LCqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2B7%2FXRQu9YaCXQolbKtwDjFWK4ZdkttchSj%2Bx%2BCqGbApNnyTrN4H0xVKMNfAmJWMRAPRdpHbIJMLYdBA%2BrnpXLqz97eVrxRSiMVnMD3Ljyrt2pJyGwYLH48Rf7E24Ry%2F4W%2B0cS%2FK19Y%2B%2Fduut3%2FoRd3%2BSK9EKfPvsj9nmVxOQz9emlJ80jpVUVri%2FQEGdbNJeV%2B48Z8qiv%2FYNYzcsS9v0JPEEb5AkHzVLpojynonuCdkEEYcTNZlh1AnFqFcgLaT%2FvO%2BFQLmrHqHMcO%2Br%2B6Xd6dd%2FRVqGI0juFps3YF7dgCrTVInGW3GrrfAe0zM04y7TdL2j3DfZeXC3MUrIMkLl9fveBT%2BLRdj37xLVZi7XKrkr3ePyZEt6V4aN6iThi%2FSP4%2BPl%2BG5x4YsuqfDBm9qmmXb5K37kHtMwxb9Q5gEbHR1QnLSWHWHaGItuWnOMnn5v9nezfhV9CNVySdnwR%2BcpkZKOmFtnRyriQKb4lPBad1JcbaQo1F4quX7kL5ogMoybaNIc0Lv5KfQLymCPl6imQhCIhcP3Zc1Q8sQWsDY9WqktvNFq%2B0oqcwWNvv6qwyj90gX7169KCmJUPoFh6Jn09qb6aXqBqKWt8zjpS2uJYFnolGQQ%2BsuHKCTdaARGCFyOINsmoApKsPIYiqYw1KDUzQY6pgESK9QIDRxgKZW2XRK0FmNsYne2D%2F4S05foxomxaRWg2uXO3%2BeIsUos8piP4ziJ1OYnHq8lkffZkNL0Ux9d4wBlIiRY3lVHexGp84g58DkaSFe5kzrp4CP%2FzOnP4xba0PZYD0akXXV%2BCXKwozjlaNWuxBbjKamQtxd7xrTnLaBgxt6lMhoA7ePuzzMiPh%2FVxx4ZJs6CZJbuQENFKXFbOPOP8E2FM%2BiN&X-Amz-Signature=e13aa4dff26eba7061e67acd0578a7cf59a48d9a837797d0b1e525212a707680&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432Z4USR%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHqiQCHUjdAXIhmSu19AZyKaJ2ZsWMaFHOp72yOlnKHaAiANDOaWHFqkGfWZQC7RzHwEdURNisxAKZKA7uBmH0y4LCqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2B7%2FXRQu9YaCXQolbKtwDjFWK4ZdkttchSj%2Bx%2BCqGbApNnyTrN4H0xVKMNfAmJWMRAPRdpHbIJMLYdBA%2BrnpXLqz97eVrxRSiMVnMD3Ljyrt2pJyGwYLH48Rf7E24Ry%2F4W%2B0cS%2FK19Y%2B%2Fduut3%2FoRd3%2BSK9EKfPvsj9nmVxOQz9emlJ80jpVUVri%2FQEGdbNJeV%2B48Z8qiv%2FYNYzcsS9v0JPEEb5AkHzVLpojynonuCdkEEYcTNZlh1AnFqFcgLaT%2FvO%2BFQLmrHqHMcO%2Br%2B6Xd6dd%2FRVqGI0juFps3YF7dgCrTVInGW3GrrfAe0zM04y7TdL2j3DfZeXC3MUrIMkLl9fveBT%2BLRdj37xLVZi7XKrkr3ePyZEt6V4aN6iThi%2FSP4%2BPl%2BG5x4YsuqfDBm9qmmXb5K37kHtMwxb9Q5gEbHR1QnLSWHWHaGItuWnOMnn5v9nezfhV9CNVySdnwR%2BcpkZKOmFtnRyriQKb4lPBad1JcbaQo1F4quX7kL5ogMoybaNIc0Lv5KfQLymCPl6imQhCIhcP3Zc1Q8sQWsDY9WqktvNFq%2B0oqcwWNvv6qwyj90gX7169KCmJUPoFh6Jn09qb6aXqBqKWt8zjpS2uJYFnolGQQ%2BsuHKCTdaARGCFyOINsmoApKsPIYiqYw1KDUzQY6pgESK9QIDRxgKZW2XRK0FmNsYne2D%2F4S05foxomxaRWg2uXO3%2BeIsUos8piP4ziJ1OYnHq8lkffZkNL0Ux9d4wBlIiRY3lVHexGp84g58DkaSFe5kzrp4CP%2FzOnP4xba0PZYD0akXXV%2BCXKwozjlaNWuxBbjKamQtxd7xrTnLaBgxt6lMhoA7ePuzzMiPh%2FVxx4ZJs6CZJbuQENFKXFbOPOP8E2FM%2BiN&X-Amz-Signature=84c63c7ec95c81bf0ba918ad266004b74d4180af3dff98cde9ce116014d57392&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466432Z4USR%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIHqiQCHUjdAXIhmSu19AZyKaJ2ZsWMaFHOp72yOlnKHaAiANDOaWHFqkGfWZQC7RzHwEdURNisxAKZKA7uBmH0y4LCqIBAih%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM%2B7%2FXRQu9YaCXQolbKtwDjFWK4ZdkttchSj%2Bx%2BCqGbApNnyTrN4H0xVKMNfAmJWMRAPRdpHbIJMLYdBA%2BrnpXLqz97eVrxRSiMVnMD3Ljyrt2pJyGwYLH48Rf7E24Ry%2F4W%2B0cS%2FK19Y%2B%2Fduut3%2FoRd3%2BSK9EKfPvsj9nmVxOQz9emlJ80jpVUVri%2FQEGdbNJeV%2B48Z8qiv%2FYNYzcsS9v0JPEEb5AkHzVLpojynonuCdkEEYcTNZlh1AnFqFcgLaT%2FvO%2BFQLmrHqHMcO%2Br%2B6Xd6dd%2FRVqGI0juFps3YF7dgCrTVInGW3GrrfAe0zM04y7TdL2j3DfZeXC3MUrIMkLl9fveBT%2BLRdj37xLVZi7XKrkr3ePyZEt6V4aN6iThi%2FSP4%2BPl%2BG5x4YsuqfDBm9qmmXb5K37kHtMwxb9Q5gEbHR1QnLSWHWHaGItuWnOMnn5v9nezfhV9CNVySdnwR%2BcpkZKOmFtnRyriQKb4lPBad1JcbaQo1F4quX7kL5ogMoybaNIc0Lv5KfQLymCPl6imQhCIhcP3Zc1Q8sQWsDY9WqktvNFq%2B0oqcwWNvv6qwyj90gX7169KCmJUPoFh6Jn09qb6aXqBqKWt8zjpS2uJYFnolGQQ%2BsuHKCTdaARGCFyOINsmoApKsPIYiqYw1KDUzQY6pgESK9QIDRxgKZW2XRK0FmNsYne2D%2F4S05foxomxaRWg2uXO3%2BeIsUos8piP4ziJ1OYnHq8lkffZkNL0Ux9d4wBlIiRY3lVHexGp84g58DkaSFe5kzrp4CP%2FzOnP4xba0PZYD0akXXV%2BCXKwozjlaNWuxBbjKamQtxd7xrTnLaBgxt6lMhoA7ePuzzMiPh%2FVxx4ZJs6CZJbuQENFKXFbOPOP8E2FM%2BiN&X-Amz-Signature=760e66aaeaf4b6452d69880c7427e648a9a655eaacd2ff7727810cbac6edd432&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CVOAAHU%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCHGYua%2B15DAQKgbHFaxFlSWTO965JZJ7okmGig1vxf0wIgDDtFig%2Fm4UtjxouULGCSLV%2BP6WK%2B4f%2BzfVA9nSqS4%2FwqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFxx3njC%2Bsja2QqdGircA17ramAWEqkxs66P2yNKX5aw9Bk5R4WyCP7qg74xIbgoWtNUN%2BBcgOqw%2BbBkfAnyfm9E2GiDHyoWLHx7Xtz5B%2F%2FDSZzgGUAQ8dsjzNS8mpj8BV2Q4FH8KErEIAQCnir%2Bx1wIknfwWQ4W9ZHN7IpmI1h0%2Fa6DyNi9mePyJU13FoCMZ66i9MpWWVUeJyZWQB8TIJ8JQPRU5LoEf4iHiTXjzxeYTJzY5eH%2FFMy3JpRnCaBkD%2FhUH3%2BwSdjWRqMbdM7n9dj8MtQWtqvoc30zueLdM0VstYFmAGeyWXlFcqRufjqe5%2FBcmKMJPD%2Bqx8VvhLuv6TCjoTY4KPeHpi26K1Ra7ONJfE%2Fk1aZuthO36SzLJSlIesk7KO47iw9x99NHxttNtcgGUQ88arQSpCX9RSAdztA8dyWpV3L%2FbqSeAjyuCSiPbXezukPVdPxddozuUw5Csrq3fzG5kC6k5noAQuS2i7SRPbiU3fLc2LbMN2zaEX36v93U6iZJF80kaDb7nHs0dClMVphRMtoW%2FLEZMWJMDfuhLjHHm3TfqxQcaHaXOPG6iLNa%2F2hpIUV66k7C%2B67uRDVCFstqDXEXBpd3GjU2GKnLEHp2Z8Lz%2BhrLGVkmWE1P5q3svfAqWmoMLmxLMPKg1M0GOqUBaCwsXjS47EqWnptU7a4WZHXUTfC89nKqhPELf%2FJWUAh%2FokE5u6DwXUJWtrpnu1T6ZaZt8o%2FVZXxNfWYg4Ucq4JlxhmamLDuhqogx07ltg5%2FjzXU1H6TI5wXuggTHx6GGqoFw0SzILIirqlIaOerf2V3ZrZtZaH7rlin2nrlp386o%2BMUUEARtSkdN%2Bt6YTn1J0xQarp2Fw6JvMIFofbfNvyImKPEf&X-Amz-Signature=f6a5967b3b5d4649e11135179b757665e065b528be9c6f6c800f7f6c580e9368&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CVOAAHU%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCHGYua%2B15DAQKgbHFaxFlSWTO965JZJ7okmGig1vxf0wIgDDtFig%2Fm4UtjxouULGCSLV%2BP6WK%2B4f%2BzfVA9nSqS4%2FwqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFxx3njC%2Bsja2QqdGircA17ramAWEqkxs66P2yNKX5aw9Bk5R4WyCP7qg74xIbgoWtNUN%2BBcgOqw%2BbBkfAnyfm9E2GiDHyoWLHx7Xtz5B%2F%2FDSZzgGUAQ8dsjzNS8mpj8BV2Q4FH8KErEIAQCnir%2Bx1wIknfwWQ4W9ZHN7IpmI1h0%2Fa6DyNi9mePyJU13FoCMZ66i9MpWWVUeJyZWQB8TIJ8JQPRU5LoEf4iHiTXjzxeYTJzY5eH%2FFMy3JpRnCaBkD%2FhUH3%2BwSdjWRqMbdM7n9dj8MtQWtqvoc30zueLdM0VstYFmAGeyWXlFcqRufjqe5%2FBcmKMJPD%2Bqx8VvhLuv6TCjoTY4KPeHpi26K1Ra7ONJfE%2Fk1aZuthO36SzLJSlIesk7KO47iw9x99NHxttNtcgGUQ88arQSpCX9RSAdztA8dyWpV3L%2FbqSeAjyuCSiPbXezukPVdPxddozuUw5Csrq3fzG5kC6k5noAQuS2i7SRPbiU3fLc2LbMN2zaEX36v93U6iZJF80kaDb7nHs0dClMVphRMtoW%2FLEZMWJMDfuhLjHHm3TfqxQcaHaXOPG6iLNa%2F2hpIUV66k7C%2B67uRDVCFstqDXEXBpd3GjU2GKnLEHp2Z8Lz%2BhrLGVkmWE1P5q3svfAqWmoMLmxLMPKg1M0GOqUBaCwsXjS47EqWnptU7a4WZHXUTfC89nKqhPELf%2FJWUAh%2FokE5u6DwXUJWtrpnu1T6ZaZt8o%2FVZXxNfWYg4Ucq4JlxhmamLDuhqogx07ltg5%2FjzXU1H6TI5wXuggTHx6GGqoFw0SzILIirqlIaOerf2V3ZrZtZaH7rlin2nrlp386o%2BMUUEARtSkdN%2Bt6YTn1J0xQarp2Fw6JvMIFofbfNvyImKPEf&X-Amz-Signature=5e8004e418aa6cff8005caf757a0f98185fcdb0bffed2037ab6a45a8954b45fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CVOAAHU%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCHGYua%2B15DAQKgbHFaxFlSWTO965JZJ7okmGig1vxf0wIgDDtFig%2Fm4UtjxouULGCSLV%2BP6WK%2B4f%2BzfVA9nSqS4%2FwqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFxx3njC%2Bsja2QqdGircA17ramAWEqkxs66P2yNKX5aw9Bk5R4WyCP7qg74xIbgoWtNUN%2BBcgOqw%2BbBkfAnyfm9E2GiDHyoWLHx7Xtz5B%2F%2FDSZzgGUAQ8dsjzNS8mpj8BV2Q4FH8KErEIAQCnir%2Bx1wIknfwWQ4W9ZHN7IpmI1h0%2Fa6DyNi9mePyJU13FoCMZ66i9MpWWVUeJyZWQB8TIJ8JQPRU5LoEf4iHiTXjzxeYTJzY5eH%2FFMy3JpRnCaBkD%2FhUH3%2BwSdjWRqMbdM7n9dj8MtQWtqvoc30zueLdM0VstYFmAGeyWXlFcqRufjqe5%2FBcmKMJPD%2Bqx8VvhLuv6TCjoTY4KPeHpi26K1Ra7ONJfE%2Fk1aZuthO36SzLJSlIesk7KO47iw9x99NHxttNtcgGUQ88arQSpCX9RSAdztA8dyWpV3L%2FbqSeAjyuCSiPbXezukPVdPxddozuUw5Csrq3fzG5kC6k5noAQuS2i7SRPbiU3fLc2LbMN2zaEX36v93U6iZJF80kaDb7nHs0dClMVphRMtoW%2FLEZMWJMDfuhLjHHm3TfqxQcaHaXOPG6iLNa%2F2hpIUV66k7C%2B67uRDVCFstqDXEXBpd3GjU2GKnLEHp2Z8Lz%2BhrLGVkmWE1P5q3svfAqWmoMLmxLMPKg1M0GOqUBaCwsXjS47EqWnptU7a4WZHXUTfC89nKqhPELf%2FJWUAh%2FokE5u6DwXUJWtrpnu1T6ZaZt8o%2FVZXxNfWYg4Ucq4JlxhmamLDuhqogx07ltg5%2FjzXU1H6TI5wXuggTHx6GGqoFw0SzILIirqlIaOerf2V3ZrZtZaH7rlin2nrlp386o%2BMUUEARtSkdN%2Bt6YTn1J0xQarp2Fw6JvMIFofbfNvyImKPEf&X-Amz-Signature=f08d1309e2ba3a03392c238bfd1e9c6156f43f50e2eaa93a78c3b897bfba972f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663CVOAAHU%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083459Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCHGYua%2B15DAQKgbHFaxFlSWTO965JZJ7okmGig1vxf0wIgDDtFig%2Fm4UtjxouULGCSLV%2BP6WK%2B4f%2BzfVA9nSqS4%2FwqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFxx3njC%2Bsja2QqdGircA17ramAWEqkxs66P2yNKX5aw9Bk5R4WyCP7qg74xIbgoWtNUN%2BBcgOqw%2BbBkfAnyfm9E2GiDHyoWLHx7Xtz5B%2F%2FDSZzgGUAQ8dsjzNS8mpj8BV2Q4FH8KErEIAQCnir%2Bx1wIknfwWQ4W9ZHN7IpmI1h0%2Fa6DyNi9mePyJU13FoCMZ66i9MpWWVUeJyZWQB8TIJ8JQPRU5LoEf4iHiTXjzxeYTJzY5eH%2FFMy3JpRnCaBkD%2FhUH3%2BwSdjWRqMbdM7n9dj8MtQWtqvoc30zueLdM0VstYFmAGeyWXlFcqRufjqe5%2FBcmKMJPD%2Bqx8VvhLuv6TCjoTY4KPeHpi26K1Ra7ONJfE%2Fk1aZuthO36SzLJSlIesk7KO47iw9x99NHxttNtcgGUQ88arQSpCX9RSAdztA8dyWpV3L%2FbqSeAjyuCSiPbXezukPVdPxddozuUw5Csrq3fzG5kC6k5noAQuS2i7SRPbiU3fLc2LbMN2zaEX36v93U6iZJF80kaDb7nHs0dClMVphRMtoW%2FLEZMWJMDfuhLjHHm3TfqxQcaHaXOPG6iLNa%2F2hpIUV66k7C%2B67uRDVCFstqDXEXBpd3GjU2GKnLEHp2Z8Lz%2BhrLGVkmWE1P5q3svfAqWmoMLmxLMPKg1M0GOqUBaCwsXjS47EqWnptU7a4WZHXUTfC89nKqhPELf%2FJWUAh%2FokE5u6DwXUJWtrpnu1T6ZaZt8o%2FVZXxNfWYg4Ucq4JlxhmamLDuhqogx07ltg5%2FjzXU1H6TI5wXuggTHx6GGqoFw0SzILIirqlIaOerf2V3ZrZtZaH7rlin2nrlp386o%2BMUUEARtSkdN%2Bt6YTn1J0xQarp2Fw6JvMIFofbfNvyImKPEf&X-Amz-Signature=f2ad7e35aef381747ffa23179a663293889f2491c12d174db969e76a66dbee12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665X54H6IX%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083502Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFkcPGPEp%2F4hz82OiF%2BPcuWFTHZpw8GQyzXfgvR15ezrAiEAt9HiM%2Bju7f7NBFPf%2BlyxEfqUeZgYjUnRaitjE%2BVaI3sqiAQIof%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEb3yB%2Bvc9Wmd2vRBircA8YHzbkD%2FhsxKWp8gwOn%2FdLNw5Gws49KLkTdvt4n3%2BDqZ6JjG%2BtFvfTyeHfwaXTZlS%2B585UDbXBDCSZKIB4GKGHMc4qQ64rxzfSjHpymEvY6nQvc4houVtjyxCUf9olTMUO6FVLVlE693K8tXtipYcgXSfgIR2hNLqZMB%2BSzhBtFtVApYbJzsPeoecURIG3Ll2V3p7ZvuVvDCDmIckjWsMoi6c6PsCv4muqEoS%2BfD135WJJAqupgEkwC71RHh4Rqpp4xM8c6TxhYOckRfHGlH8uRMUqlNTGr6iXvrCAj5L6EW5wf%2BEOwOP0yurXq5B8B5fa7mGCJ8oYvAUvwnhQp6s98jqNsTvt3uI5zcL7UlvJzZIiDsXvpJq3tKMt1bzu99kTQk%2FpIgYod4JoJ0fnLy2TweXnzsqI3CGKL5lR%2FgZXuUdF1YghqsW%2BFs54FdhbXW%2F8kQOW0Rr8vptmFoVvqu3VYFWQy6CGJJAn5uxqo2zKPoSbH835kL5467EB0cUFcq1FP21aIVKWMbvqsda5tkZkDQAwwxG8%2F%2BbuAEFEzx%2FEPLySoE9I70WWleGwW2UHSJYOilSN7sQopA%2Fij0Ky6V30lfrf1zT6NXXTbJ2ZmVYkKYmTRTUd3%2FPQAJgPaMMqg1M0GOqUBEltYkmxi%2B5%2F0rqYJoDJkWoJ8IysCtN2sk%2Bb8AqL4SSR9lK1%2FwHsZZivBW%2FTazdrUsaQjn%2Fnt2wDQi7Y%2Blg7MUsbID7%2FEthAr6QJg1cDUPg%2FDsiiJzMR%2FBPXEP%2Bync%2FDj8CEUY4alnSdB1vMB0Za%2FrAr%2BaU0B6LFeD1kESGENkly8Km5dPsN%2FfpRs4r9GtXI8tfWj71mpTec%2BZkVCC%2BHsi9WVdaCI&X-Amz-Signature=af8553db1712d30e73754eeec2ac9d4ab77bc8112ab4ac4ee9bf5fe4d965ac42&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665CHQ2WXL%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083502Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCz8sFzZjoYkkgdLz%2B4Ci%2BkI4cOUMwJTQMamelI0kTvjgIhAIICdblTQ%2FkhKObTbf4eXGR3FzB2tiMeFfGWJWGcdc%2BCKogECKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyY9PETrsUJq92%2FEFkq3AN41ObnX4pNgIOqra7XC%2FGOiFAYSzCp6B1I58So4wUY2CqLlhCmB%2BkXmnHylb6eMek2wrlcBXP7a9S1MytW5UKIZyC1GIajsI5JzDwGRcM8aCy6%2FAvv1qf6tIz7wPYyaD%2Fxew%2B%2FycBUzG7HSa0PNE%2BXeoDYKJL8TNJWWuIzCCp8a8TNmj0ph8msoQ8cRT3kRpsWWWwf7nuhWDOqkCoDEap11bEtlxQR7OdcdIZJlqko%2B8mvPFLUU0S%2BpDXBumUYELE7o3CNvZze459RGOFMp%2B9DNPlbbbyCLlaufWMeYMt0BX%2BakA4x5XjbS%2FjND5v%2BbaU8gU7%2Fd3lHh%2FbD9rjCbYSioAMpoJYe1Dr2pFk8F4qT%2FLVagrj1%2Fv5hhRwyyjy%2B1fTcK1hA6LYxrCh2P9%2FFtfeeZ3%2F3N9Ry7Vx7dJugKiS5ayYlKwOOLIfOfW56GNhJhl%2F4qRmSaei1HnPZbDEQXicG%2B3q%2Fs9rDYHgxptgH6%2FBSux%2BlRJdMR4T7W44xjWS1blNx4Ue7Q0i4aPWFK8Rw6xZJTICcT3k6AymdjoqHQTFJTl4ODhfRVqLA5kKfpG7fndFfoFD2zB%2B9NjJ4bpKSD%2BcCp5jdSaovUCERU%2BTqEhYEic19Of1ERlkjw%2BWr0TDmodTNBjqkAUw%2FKYvzQlTwVSlqHKiSI7NcWGax2R%2FgiTh5AgVEzdO2Zz0SpYcaVUtJ4DcINXBAG515sHAnQFZcwoiUJ4mCNVYx36%2F1qL6fT%2BhIQRYovZc78oA3jszyw7YaGAUr9hR7p944E9OfJ%2FWKXDtOJ1ehDKgEezkFq6sCA%2FZZOoYOM6u%2BfBxmFbpke%2BKbaHSDYITDW3B9Db8fLessfWND795MTdSVvy0%2B&X-Amz-Signature=5322f77f44366a3915df6314cf1a3e701e8f5ca13ae99c063f0cf56b3a1cad03&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665CHQ2WXL%2F20260314%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260314T083502Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjENj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCz8sFzZjoYkkgdLz%2B4Ci%2BkI4cOUMwJTQMamelI0kTvjgIhAIICdblTQ%2FkhKObTbf4eXGR3FzB2tiMeFfGWJWGcdc%2BCKogECKH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyY9PETrsUJq92%2FEFkq3AN41ObnX4pNgIOqra7XC%2FGOiFAYSzCp6B1I58So4wUY2CqLlhCmB%2BkXmnHylb6eMek2wrlcBXP7a9S1MytW5UKIZyC1GIajsI5JzDwGRcM8aCy6%2FAvv1qf6tIz7wPYyaD%2Fxew%2B%2FycBUzG7HSa0PNE%2BXeoDYKJL8TNJWWuIzCCp8a8TNmj0ph8msoQ8cRT3kRpsWWWwf7nuhWDOqkCoDEap11bEtlxQR7OdcdIZJlqko%2B8mvPFLUU0S%2BpDXBumUYELE7o3CNvZze459RGOFMp%2B9DNPlbbbyCLlaufWMeYMt0BX%2BakA4x5XjbS%2FjND5v%2BbaU8gU7%2Fd3lHh%2FbD9rjCbYSioAMpoJYe1Dr2pFk8F4qT%2FLVagrj1%2Fv5hhRwyyjy%2B1fTcK1hA6LYxrCh2P9%2FFtfeeZ3%2F3N9Ry7Vx7dJugKiS5ayYlKwOOLIfOfW56GNhJhl%2F4qRmSaei1HnPZbDEQXicG%2B3q%2Fs9rDYHgxptgH6%2FBSux%2BlRJdMR4T7W44xjWS1blNx4Ue7Q0i4aPWFK8Rw6xZJTICcT3k6AymdjoqHQTFJTl4ODhfRVqLA5kKfpG7fndFfoFD2zB%2B9NjJ4bpKSD%2BcCp5jdSaovUCERU%2BTqEhYEic19Of1ERlkjw%2BWr0TDmodTNBjqkAUw%2FKYvzQlTwVSlqHKiSI7NcWGax2R%2FgiTh5AgVEzdO2Zz0SpYcaVUtJ4DcINXBAG515sHAnQFZcwoiUJ4mCNVYx36%2F1qL6fT%2BhIQRYovZc78oA3jszyw7YaGAUr9hR7p944E9OfJ%2FWKXDtOJ1ehDKgEezkFq6sCA%2FZZOoYOM6u%2BfBxmFbpke%2BKbaHSDYITDW3B9Db8fLessfWND795MTdSVvy0%2B&X-Amz-Signature=1799edd8c69f0a24ca069421d7bbc11ab3a631658188e8c4373d58e6c7bdb88f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
