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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W4NWMS4U%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091005Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIDcM4ohUFS1ERIUmLht9kR%2FkKGhIjzD6m0Xf17rEXa2MAiEA3KYo3MhS6jideczztLxc%2B6iG5hvrCJnfgDvCayoeY5YqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBgpP3bky7SBMA275CrcA%2FrkVSVrmKQvX6h%2BmToiVIxl%2B5HYY4rGdYcUA2Ug8nwqx84xRfqPKtYhphgkCJnyC%2BwWYZySYTMFOF%2F%2BYGu0%2F7u7wBGjejoQngn9X0YNel8qPFqYjwAqY%2BhZAmw%2FHCNMUzEADsg%2FbfSl%2BX5XJgcdAyXiI4Yzibn75mahob9UThNd9z27Z69Eu7SIp4SvogZLL0X2RItfXsF4N%2F4MSRl%2FJZrZfiBrEXkrBNA7pHaIjVQiNWeHCB6QeKxGlR5V3UI1HB3AkpMe89CydJXa70rqZ4RmjV68Iw6brHK4cat5y6EuZxMQjLSvnPUwgvtR6M0PzB6h97JAkaAPr5KbQt7qVF%2Ffjqjl7Le0U5MX%2B7pN4TQBl0cvRvQa%2Fyz9e4qm0Vkg%2FEVll7rDVfPKZVbidNJ%2BhiqUOP3nHQNud%2F8OlCbDskrcsiB4zXthVYzVxAE8cpQjnAuLy7QyjfGXIRdntYhEJ6GU8vTTshDG%2BQibgXjcWUeRtiAamRpO7r2%2FfYVhWtg%2BJ91Zb%2Bsm6%2BGcrZrfYW1KVhG9oqnYKFADNrE4AMGubecGgzh7UBZgkBkZzuF8e4vIHsj%2BstsSVKbTM%2FOpLjOsisx6UnnDgHUT9E%2FOsFJNz34slX0QR%2FjX1alpD4LjMIO%2B9dMGOqUB8aWvWgCxShy7YE8aT1ikSKayGT7Nl66h8VUM%2FQjoSaR%2FEoYwQ%2BGo1kwTXAbXldboh8niKoWEIr2XGVDUwNUaLjo4nRiz1Z%2Bt%2Bv%2FHC0FN7Gtpg3djg4tRyWzejqK0i%2BhCES8z%2BiPCE0vrmFRIzTzuhUivH54ZBdASgwlr%2Bf2bU%2FzEpGQLrBOIMWy5aEvsvAa2%2BOSkPfExb9xFHhz2Qr7%2BU9cNTOx8&X-Amz-Signature=10b0287da5e606d1550c6577b4043edf1fedcceebe892616f7bfea32fba56bb5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W4NWMS4U%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091005Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIDcM4ohUFS1ERIUmLht9kR%2FkKGhIjzD6m0Xf17rEXa2MAiEA3KYo3MhS6jideczztLxc%2B6iG5hvrCJnfgDvCayoeY5YqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBgpP3bky7SBMA275CrcA%2FrkVSVrmKQvX6h%2BmToiVIxl%2B5HYY4rGdYcUA2Ug8nwqx84xRfqPKtYhphgkCJnyC%2BwWYZySYTMFOF%2F%2BYGu0%2F7u7wBGjejoQngn9X0YNel8qPFqYjwAqY%2BhZAmw%2FHCNMUzEADsg%2FbfSl%2BX5XJgcdAyXiI4Yzibn75mahob9UThNd9z27Z69Eu7SIp4SvogZLL0X2RItfXsF4N%2F4MSRl%2FJZrZfiBrEXkrBNA7pHaIjVQiNWeHCB6QeKxGlR5V3UI1HB3AkpMe89CydJXa70rqZ4RmjV68Iw6brHK4cat5y6EuZxMQjLSvnPUwgvtR6M0PzB6h97JAkaAPr5KbQt7qVF%2Ffjqjl7Le0U5MX%2B7pN4TQBl0cvRvQa%2Fyz9e4qm0Vkg%2FEVll7rDVfPKZVbidNJ%2BhiqUOP3nHQNud%2F8OlCbDskrcsiB4zXthVYzVxAE8cpQjnAuLy7QyjfGXIRdntYhEJ6GU8vTTshDG%2BQibgXjcWUeRtiAamRpO7r2%2FfYVhWtg%2BJ91Zb%2Bsm6%2BGcrZrfYW1KVhG9oqnYKFADNrE4AMGubecGgzh7UBZgkBkZzuF8e4vIHsj%2BstsSVKbTM%2FOpLjOsisx6UnnDgHUT9E%2FOsFJNz34slX0QR%2FjX1alpD4LjMIO%2B9dMGOqUB8aWvWgCxShy7YE8aT1ikSKayGT7Nl66h8VUM%2FQjoSaR%2FEoYwQ%2BGo1kwTXAbXldboh8niKoWEIr2XGVDUwNUaLjo4nRiz1Z%2Bt%2Bv%2FHC0FN7Gtpg3djg4tRyWzejqK0i%2BhCES8z%2BiPCE0vrmFRIzTzuhUivH54ZBdASgwlr%2Bf2bU%2FzEpGQLrBOIMWy5aEvsvAa2%2BOSkPfExb9xFHhz2Qr7%2BU9cNTOx8&X-Amz-Signature=0d6590f3ff61b5fbf7638e17f1b4adcb1592c50b3236789a2a300d2a98ffd7ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W4NWMS4U%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091005Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIDcM4ohUFS1ERIUmLht9kR%2FkKGhIjzD6m0Xf17rEXa2MAiEA3KYo3MhS6jideczztLxc%2B6iG5hvrCJnfgDvCayoeY5YqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBgpP3bky7SBMA275CrcA%2FrkVSVrmKQvX6h%2BmToiVIxl%2B5HYY4rGdYcUA2Ug8nwqx84xRfqPKtYhphgkCJnyC%2BwWYZySYTMFOF%2F%2BYGu0%2F7u7wBGjejoQngn9X0YNel8qPFqYjwAqY%2BhZAmw%2FHCNMUzEADsg%2FbfSl%2BX5XJgcdAyXiI4Yzibn75mahob9UThNd9z27Z69Eu7SIp4SvogZLL0X2RItfXsF4N%2F4MSRl%2FJZrZfiBrEXkrBNA7pHaIjVQiNWeHCB6QeKxGlR5V3UI1HB3AkpMe89CydJXa70rqZ4RmjV68Iw6brHK4cat5y6EuZxMQjLSvnPUwgvtR6M0PzB6h97JAkaAPr5KbQt7qVF%2Ffjqjl7Le0U5MX%2B7pN4TQBl0cvRvQa%2Fyz9e4qm0Vkg%2FEVll7rDVfPKZVbidNJ%2BhiqUOP3nHQNud%2F8OlCbDskrcsiB4zXthVYzVxAE8cpQjnAuLy7QyjfGXIRdntYhEJ6GU8vTTshDG%2BQibgXjcWUeRtiAamRpO7r2%2FfYVhWtg%2BJ91Zb%2Bsm6%2BGcrZrfYW1KVhG9oqnYKFADNrE4AMGubecGgzh7UBZgkBkZzuF8e4vIHsj%2BstsSVKbTM%2FOpLjOsisx6UnnDgHUT9E%2FOsFJNz34slX0QR%2FjX1alpD4LjMIO%2B9dMGOqUB8aWvWgCxShy7YE8aT1ikSKayGT7Nl66h8VUM%2FQjoSaR%2FEoYwQ%2BGo1kwTXAbXldboh8niKoWEIr2XGVDUwNUaLjo4nRiz1Z%2Bt%2Bv%2FHC0FN7Gtpg3djg4tRyWzejqK0i%2BhCES8z%2BiPCE0vrmFRIzTzuhUivH54ZBdASgwlr%2Bf2bU%2FzEpGQLrBOIMWy5aEvsvAa2%2BOSkPfExb9xFHhz2Qr7%2BU9cNTOx8&X-Amz-Signature=ef192136670bfd692c20e47f84498eeebff7bca810a48bf9986ab259c47a4b51&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3QNTVSF%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDJqeg9brSVflepvW4KvWsUlBO50YlfdLSiU%2BYJPlBq%2FwIgaJDR74YUtLjYCasEp5uheiwmVZI4JOIYrHMVG0qn3QAqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHBp3slBZTPdfwfqoCrcA8G1p1mufXRQ%2F2hi7rYpf6cqI3y16CsVuiAsXfUMX7LRXT%2FTVvs019mrMXtXCUfHDo5wU8BJzWAkKlmn25GSnebicEio%2BkvVXveUi2Rd6gsIbi1EWnexn36IFn4nx2jUVWdNHrRcTrHO%2FBiR%2BhoYsYUBm8YutzrSAZz6JeUPoQTa398VhQf3vbqr34kBPWYx1okF6ciLs6sdil%2F%2BEpYp4DePPoN2kPBXcoOD6YwpOxknJUyFfnLNZFrF5ZGK9WkSr8FAFxFBTqFXPVenFH9fW%2FOhzT8zPpFvWJqTVIf2yric69Jj2oU9EuRnhMhr8D1e7ZxA9xU%2BONTzUo%2B6Nrwxn8Hkimu2RP4XBL5TP6FKYWHyby1VaXqRcDiWJb1YpmCrhKjqIPDxJ%2BPz6fsUQnhbkEi0xeUjxanLxooCQwLPBw3kmJurKqd7oYTwYSdCCFY9Zj5hCmzTJPQA5Jm48VpU3dVwzMVtTA655TgXMdhRQPATEqhpUT6ncu3OmyXluUBb8Ni4pYcY101filrPKF9raAlWcpBpOXzCtFAbG7WbuOjTpkbZrRBf3gvZYR4zV4qtgvggQknGfgh%2BdHeci%2BU7MWBXA3krr3K29AsVniFQs5nbji5vVczZb5ScQPiDMJi%2F9dMGOqUBGObYZIAebmHTkIHtwOAgwhylXAkkNVdGOVrGSg7gPgCy%2FaD8X9MXDwV9N%2FwEqtOnPXKXXgoZdgkOl12U0fTdISWYdgx2iWXkmriLH0rvGD1Tts%2BxxdqgjLCIzAzw%2B9Kklv26945bpqAytVRNbEc1pMPeg66EfcVcBbnbTTUtSGdURMhkPpBPKQ2sw7kE5zqCvTkX19A%2FynVS8L1nBT5RML8Zt%2BkF&X-Amz-Signature=48ce55319329a15febfb197d45bb28bffee9a5e9483286d5e2e377749919c1f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3QNTVSF%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDJqeg9brSVflepvW4KvWsUlBO50YlfdLSiU%2BYJPlBq%2FwIgaJDR74YUtLjYCasEp5uheiwmVZI4JOIYrHMVG0qn3QAqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHBp3slBZTPdfwfqoCrcA8G1p1mufXRQ%2F2hi7rYpf6cqI3y16CsVuiAsXfUMX7LRXT%2FTVvs019mrMXtXCUfHDo5wU8BJzWAkKlmn25GSnebicEio%2BkvVXveUi2Rd6gsIbi1EWnexn36IFn4nx2jUVWdNHrRcTrHO%2FBiR%2BhoYsYUBm8YutzrSAZz6JeUPoQTa398VhQf3vbqr34kBPWYx1okF6ciLs6sdil%2F%2BEpYp4DePPoN2kPBXcoOD6YwpOxknJUyFfnLNZFrF5ZGK9WkSr8FAFxFBTqFXPVenFH9fW%2FOhzT8zPpFvWJqTVIf2yric69Jj2oU9EuRnhMhr8D1e7ZxA9xU%2BONTzUo%2B6Nrwxn8Hkimu2RP4XBL5TP6FKYWHyby1VaXqRcDiWJb1YpmCrhKjqIPDxJ%2BPz6fsUQnhbkEi0xeUjxanLxooCQwLPBw3kmJurKqd7oYTwYSdCCFY9Zj5hCmzTJPQA5Jm48VpU3dVwzMVtTA655TgXMdhRQPATEqhpUT6ncu3OmyXluUBb8Ni4pYcY101filrPKF9raAlWcpBpOXzCtFAbG7WbuOjTpkbZrRBf3gvZYR4zV4qtgvggQknGfgh%2BdHeci%2BU7MWBXA3krr3K29AsVniFQs5nbji5vVczZb5ScQPiDMJi%2F9dMGOqUBGObYZIAebmHTkIHtwOAgwhylXAkkNVdGOVrGSg7gPgCy%2FaD8X9MXDwV9N%2FwEqtOnPXKXXgoZdgkOl12U0fTdISWYdgx2iWXkmriLH0rvGD1Tts%2BxxdqgjLCIzAzw%2B9Kklv26945bpqAytVRNbEc1pMPeg66EfcVcBbnbTTUtSGdURMhkPpBPKQ2sw7kE5zqCvTkX19A%2FynVS8L1nBT5RML8Zt%2BkF&X-Amz-Signature=abc4229b4208130c50e55c640836b201713d8325f475961f4e77d580f952bfcd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3QNTVSF%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDJqeg9brSVflepvW4KvWsUlBO50YlfdLSiU%2BYJPlBq%2FwIgaJDR74YUtLjYCasEp5uheiwmVZI4JOIYrHMVG0qn3QAqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHBp3slBZTPdfwfqoCrcA8G1p1mufXRQ%2F2hi7rYpf6cqI3y16CsVuiAsXfUMX7LRXT%2FTVvs019mrMXtXCUfHDo5wU8BJzWAkKlmn25GSnebicEio%2BkvVXveUi2Rd6gsIbi1EWnexn36IFn4nx2jUVWdNHrRcTrHO%2FBiR%2BhoYsYUBm8YutzrSAZz6JeUPoQTa398VhQf3vbqr34kBPWYx1okF6ciLs6sdil%2F%2BEpYp4DePPoN2kPBXcoOD6YwpOxknJUyFfnLNZFrF5ZGK9WkSr8FAFxFBTqFXPVenFH9fW%2FOhzT8zPpFvWJqTVIf2yric69Jj2oU9EuRnhMhr8D1e7ZxA9xU%2BONTzUo%2B6Nrwxn8Hkimu2RP4XBL5TP6FKYWHyby1VaXqRcDiWJb1YpmCrhKjqIPDxJ%2BPz6fsUQnhbkEi0xeUjxanLxooCQwLPBw3kmJurKqd7oYTwYSdCCFY9Zj5hCmzTJPQA5Jm48VpU3dVwzMVtTA655TgXMdhRQPATEqhpUT6ncu3OmyXluUBb8Ni4pYcY101filrPKF9raAlWcpBpOXzCtFAbG7WbuOjTpkbZrRBf3gvZYR4zV4qtgvggQknGfgh%2BdHeci%2BU7MWBXA3krr3K29AsVniFQs5nbji5vVczZb5ScQPiDMJi%2F9dMGOqUBGObYZIAebmHTkIHtwOAgwhylXAkkNVdGOVrGSg7gPgCy%2FaD8X9MXDwV9N%2FwEqtOnPXKXXgoZdgkOl12U0fTdISWYdgx2iWXkmriLH0rvGD1Tts%2BxxdqgjLCIzAzw%2B9Kklv26945bpqAytVRNbEc1pMPeg66EfcVcBbnbTTUtSGdURMhkPpBPKQ2sw7kE5zqCvTkX19A%2FynVS8L1nBT5RML8Zt%2BkF&X-Amz-Signature=887de0e91283b367f8f565c546a88cd9b5ecb557e31eae93eb6ec0bb3c3e914a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466W3QNTVSF%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIQDJqeg9brSVflepvW4KvWsUlBO50YlfdLSiU%2BYJPlBq%2FwIgaJDR74YUtLjYCasEp5uheiwmVZI4JOIYrHMVG0qn3QAqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHBp3slBZTPdfwfqoCrcA8G1p1mufXRQ%2F2hi7rYpf6cqI3y16CsVuiAsXfUMX7LRXT%2FTVvs019mrMXtXCUfHDo5wU8BJzWAkKlmn25GSnebicEio%2BkvVXveUi2Rd6gsIbi1EWnexn36IFn4nx2jUVWdNHrRcTrHO%2FBiR%2BhoYsYUBm8YutzrSAZz6JeUPoQTa398VhQf3vbqr34kBPWYx1okF6ciLs6sdil%2F%2BEpYp4DePPoN2kPBXcoOD6YwpOxknJUyFfnLNZFrF5ZGK9WkSr8FAFxFBTqFXPVenFH9fW%2FOhzT8zPpFvWJqTVIf2yric69Jj2oU9EuRnhMhr8D1e7ZxA9xU%2BONTzUo%2B6Nrwxn8Hkimu2RP4XBL5TP6FKYWHyby1VaXqRcDiWJb1YpmCrhKjqIPDxJ%2BPz6fsUQnhbkEi0xeUjxanLxooCQwLPBw3kmJurKqd7oYTwYSdCCFY9Zj5hCmzTJPQA5Jm48VpU3dVwzMVtTA655TgXMdhRQPATEqhpUT6ncu3OmyXluUBb8Ni4pYcY101filrPKF9raAlWcpBpOXzCtFAbG7WbuOjTpkbZrRBf3gvZYR4zV4qtgvggQknGfgh%2BdHeci%2BU7MWBXA3krr3K29AsVniFQs5nbji5vVczZb5ScQPiDMJi%2F9dMGOqUBGObYZIAebmHTkIHtwOAgwhylXAkkNVdGOVrGSg7gPgCy%2FaD8X9MXDwV9N%2FwEqtOnPXKXXgoZdgkOl12U0fTdISWYdgx2iWXkmriLH0rvGD1Tts%2BxxdqgjLCIzAzw%2B9Kklv26945bpqAytVRNbEc1pMPeg66EfcVcBbnbTTUtSGdURMhkPpBPKQ2sw7kE5zqCvTkX19A%2FynVS8L1nBT5RML8Zt%2BkF&X-Amz-Signature=525d82607e28651a1eb5aaeafcee5dbfc4a259e813d9bd80bfc22ca9711d6b84&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662WLT7HND%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJIMEYCIQCYJuHrdrNcmZoM6MxSHT2rUfWWaHcGKpi8uH5WvEtajQIhAMB1Fp03IP%2F8dcbRrgEkK3pyxyH0xiX2M2DtfvHoqhBNKogECN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyeeM7q6xmuuMOuA9Mq3ANB654Rc%2B2SDLMU1lt4QwLtKTAi3IuH0oD44DrkG4WI61gGEMSd3EMxlHChaLYSULfUuk7ZEIeVyxsZf0Bv%2Fz2E4szlpXIHuPRChYbt2bg1DjJXOjj099VAbSmnFMFkflMM6IJTaDgVt83ndbfwCo%2B9KVPJUsApMvVmpfyAiODWGT%2B%2FetHivu9ns%2FoyjTEWqHAOJDZL3BGpUhEaYaKPzjz8Die0k8QxJhH42J2GzKz6lRy8xikRHO6Pm76CPKhd3Hqr1R%2FRPPsbtzp4eELos4%2BXuZXXerX6S6glhZudZHf%2Bym0YTvBmR4OiBcBLX9RATXgyIQSHD2oO%2F%2FreyrrzO%2FlsWq9QX6pdOWB40z40JvXRbsx%2BWyCIg7rNiNnVzcZh9x9t8yvo0ib%2BKmc6jRhqr5nQIHCMYi6dyi6nDRmPaLyI1utTb7lZ2SFqpkq1emZbUw3%2BSKApzMEwCX%2BLEkQcShLuTOzfWpOs%2BbgBMP%2FIu%2BWaq29IGXZQz%2FJZyJDEI%2BDx0w65V2Io1iT%2FHCPYdLjf9zjwQzQ9Ed0lFGzSRYVhBSH3OQfEvfARZXNEThu9F0AxiEdWMUdHnManzxs8Uvc0kf6rJg4w7TLa7nwEjP5jNfhI2X7jgDXeB4P1XPQc5DCLu%2FXTBjqkAZOQtggKCrXwk7S2vxp5hQ%2BFgvKwUwsBKvWy5ATBIF%2BDr5iT3yqrLaf0nHDzwyNPX5Vnn7fg67bL1dcehvlIIINzPcjgVOuI8UpLBW0qaMeUz%2BULqFhtrzMbHBxADIKjZW4M2vvW8zdcIeDklCBDUiq5wfBP9JMw0UhJB0Nji%2FXey8l9JL%2Bj2X49xujONQiII3YhMvtJOpjgJtsfbFa8VzbcoSZc&X-Amz-Signature=41b5392198c5b5d36cabdd9cd2640fd3b62ae7cf40fd441742591a4c92b1a7bf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEVPOLAR%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIELY7WMUqmNGoBFp6wOISECLbsk4B1YXzv6q1MqL6wZRAiEAwqT6ZklvjX3%2BuRM1tocZbk%2FPs53oOtwp43Z0Ff7Ux0wqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKjNMMpByxokqJ8%2F9SrcA%2FYn%2BGCFePvPeWoddNvbMqBa%2F9tMUyfVkahIQzFqXQbDSaIg8O52f50bAFdy5hi3KwNg0UfD%2FkWsCAIRMS3hDe87oeGr3kFh5z8%2Bu3f%2B1Ak45FrvUUG1wTb3mYAx%2BZcG8BjgaUrxV%2BUOWTScuEWJ4ieHxql8xLlz4vvy%2Fbu%2BS0cupvRTPJVVQyLidhb07fx6fqaGeRezwtx5xo3KUhfL3F92e%2FI4DWxm3bBOUuTb7egNjSpu7v2R1OZhKH0LVRQZ8i6MPJh6SzpMyiX7Nz%2BGDwd5z5huc%2BCxQ%2FPw9K1ymCKV7QFhN9kYlcJnwvgOOE5AmQ3FU48oujMV10h2AZ%2B%2FL5PxUxzx38zap4uLv%2FL0J3loHMKkuhg0VQBAg4YwbpE29RsSQCJ2Anpxwe0QYrKMRjBLexhxiX8RuMjgIuhNFTdc7fqRZ9a%2FUyNF20JyEgR6FOEhbDMT31K1cDl5lnyP5J6ZLzKF5Nmlo3B0MtiINXYAxZPzOQn7jV6BXLqiqyy1LSNILbXxhSgTtMagOsqfLREbjXX3QsIi2ikf2MhWfVWBxwdM9OgRW5BTha60veYJqEi5ZqQ5pIb2%2BWI5eYjTGvg9gK4Qhg8jFZ4zQj0gNydnzWkOryU19gYqS5bxMO%2B69dMGOqUBhoO7x%2FwqOfONqCrLbY0b0wnEMXoAfehqMbjocx%2BH%2BbU8hdppi0OUk3v0vrbA2yBHXd4vkPzEqx%2BSfHZM9o1vHQjoVeGj4dFWvtkKDZY%2FnRb70ELnc7MVCUZygYxOrek360wLAEVT2R%2Blf1D16jAWPtgm47ytOvIZDXMstwKNy4w5gti6w6jvLXcsQt8uj%2Fc3mAVerws%2BJ8Ir6WD4%2BnKudaMwuFf4&X-Amz-Signature=23cfa3d219bb29fb1115323b3f6fc6358bc07abbf87d85af5e6b241924972903&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TEVPOLAR%2F20260813%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260813T091006Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBYaCXVzLXdlc3QtMiJHMEUCIELY7WMUqmNGoBFp6wOISECLbsk4B1YXzv6q1MqL6wZRAiEAwqT6ZklvjX3%2BuRM1tocZbk%2FPs53oOtwp43Z0Ff7Ux0wqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKjNMMpByxokqJ8%2F9SrcA%2FYn%2BGCFePvPeWoddNvbMqBa%2F9tMUyfVkahIQzFqXQbDSaIg8O52f50bAFdy5hi3KwNg0UfD%2FkWsCAIRMS3hDe87oeGr3kFh5z8%2Bu3f%2B1Ak45FrvUUG1wTb3mYAx%2BZcG8BjgaUrxV%2BUOWTScuEWJ4ieHxql8xLlz4vvy%2Fbu%2BS0cupvRTPJVVQyLidhb07fx6fqaGeRezwtx5xo3KUhfL3F92e%2FI4DWxm3bBOUuTb7egNjSpu7v2R1OZhKH0LVRQZ8i6MPJh6SzpMyiX7Nz%2BGDwd5z5huc%2BCxQ%2FPw9K1ymCKV7QFhN9kYlcJnwvgOOE5AmQ3FU48oujMV10h2AZ%2B%2FL5PxUxzx38zap4uLv%2FL0J3loHMKkuhg0VQBAg4YwbpE29RsSQCJ2Anpxwe0QYrKMRjBLexhxiX8RuMjgIuhNFTdc7fqRZ9a%2FUyNF20JyEgR6FOEhbDMT31K1cDl5lnyP5J6ZLzKF5Nmlo3B0MtiINXYAxZPzOQn7jV6BXLqiqyy1LSNILbXxhSgTtMagOsqfLREbjXX3QsIi2ikf2MhWfVWBxwdM9OgRW5BTha60veYJqEi5ZqQ5pIb2%2BWI5eYjTGvg9gK4Qhg8jFZ4zQj0gNydnzWkOryU19gYqS5bxMO%2B69dMGOqUBhoO7x%2FwqOfONqCrLbY0b0wnEMXoAfehqMbjocx%2BH%2BbU8hdppi0OUk3v0vrbA2yBHXd4vkPzEqx%2BSfHZM9o1vHQjoVeGj4dFWvtkKDZY%2FnRb70ELnc7MVCUZygYxOrek360wLAEVT2R%2Blf1D16jAWPtgm47ytOvIZDXMstwKNy4w5gti6w6jvLXcsQt8uj%2Fc3mAVerws%2BJ8Ir6WD4%2BnKudaMwuFf4&X-Amz-Signature=64a010be8ea578591e3a78cfdab3b49bf448be8259bc47554e2a2cc6eea02746&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
