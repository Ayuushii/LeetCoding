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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662OP25FKF%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCID5T0qjY8hrNPuh%2FEx7y%2B%2B9YV7Glxe0AuyED6Kq3ErdcAiA%2Bb70qd7K8CpIzT2laFiIKD6L%2BA830EVcvI4zZSaLGnyqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMepGk004n%2FEe%2BLJ0AKtwDkABOUr8tuTJfjgR1EgpFYqnrAtDKL78TwvkSU5zPYPhiKzhD5qwJib5Q9rJo1Yo%2BMzKZZs5dWUT0Vbn%2FCQVQ1OGzFs%2F905DA%2FGKEJPPG%2BHXt76GTvDb67LNPrQLY8hPJjitnybgq4irdqcBJ8ISosazfU9ICi0%2FCZJ8WXGp90exRYywWQVBKemyNoG1TLD0vavm4OAVnrl6h6wa7XavfcdNZcuj8arw14FGu9%2Bwkclrbg0bi7BSv%2FNAcLFUre1vZy8Hwaz7Qqtl%2BBPspN182zNSvYSVAqDqVzniIaN9JnalJa4bC5qU3HCY%2FwKpPsyu3GYkNVaRQ36StU%2BjS7sf1vJiYEukkVaUS6AqkgbBUaJ7QGqL2p06Fk5cx5GkJt5gZLOgOOukizcaNc%2BFE8eCqf1Gw1E7ektJIJy63bj7J%2BVPDaUPX%2F5bmlBfBZtb0fBJjGyfhiqRzX83GmUaXbAGW6CdI7eFgrbx3B6%2Bpvbuer%2BnKzQ12tQrZsPaqwUeOhnYU8h43KU1jx6vyx%2FaVbhI5D5svhhx0Gmb14LOgvWNGJUCladASwvkIcyLTuZ4SOU4NSg%2BcGcK0vGlS9T7LCkevhmtquiSY3VFnt9k8Tuw%2FyN6bu%2BJsw6cnAs%2FjDD8wztGC1wY6pgGDgdM0FlB4iJIJj%2B2YmHS3DkIa1aygoyb1KxAMtAS%2Bvv0RRIPtnQVc%2BFV19KeDeboIR9ig596AI4wexpzvM8j%2B0DluKvlKuiD%2FpR25vPPYPbVW2aK6ho8PZDViNSxC3pTjcYLtR4z7DN7tNLV5GiDT75OVDomcPi2DLDu69dyiGyEvPX2rguBxeKkBer2zbHoZ58saODuhQ7oMaZgZa8KL2xffa%2FBq&X-Amz-Signature=bab1d1da3e3ec6ba244c2e8c381665249bcdf5338918e97c6b163aacdbdd3a1e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662OP25FKF%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCID5T0qjY8hrNPuh%2FEx7y%2B%2B9YV7Glxe0AuyED6Kq3ErdcAiA%2Bb70qd7K8CpIzT2laFiIKD6L%2BA830EVcvI4zZSaLGnyqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMepGk004n%2FEe%2BLJ0AKtwDkABOUr8tuTJfjgR1EgpFYqnrAtDKL78TwvkSU5zPYPhiKzhD5qwJib5Q9rJo1Yo%2BMzKZZs5dWUT0Vbn%2FCQVQ1OGzFs%2F905DA%2FGKEJPPG%2BHXt76GTvDb67LNPrQLY8hPJjitnybgq4irdqcBJ8ISosazfU9ICi0%2FCZJ8WXGp90exRYywWQVBKemyNoG1TLD0vavm4OAVnrl6h6wa7XavfcdNZcuj8arw14FGu9%2Bwkclrbg0bi7BSv%2FNAcLFUre1vZy8Hwaz7Qqtl%2BBPspN182zNSvYSVAqDqVzniIaN9JnalJa4bC5qU3HCY%2FwKpPsyu3GYkNVaRQ36StU%2BjS7sf1vJiYEukkVaUS6AqkgbBUaJ7QGqL2p06Fk5cx5GkJt5gZLOgOOukizcaNc%2BFE8eCqf1Gw1E7ektJIJy63bj7J%2BVPDaUPX%2F5bmlBfBZtb0fBJjGyfhiqRzX83GmUaXbAGW6CdI7eFgrbx3B6%2Bpvbuer%2BnKzQ12tQrZsPaqwUeOhnYU8h43KU1jx6vyx%2FaVbhI5D5svhhx0Gmb14LOgvWNGJUCladASwvkIcyLTuZ4SOU4NSg%2BcGcK0vGlS9T7LCkevhmtquiSY3VFnt9k8Tuw%2FyN6bu%2BJsw6cnAs%2FjDD8wztGC1wY6pgGDgdM0FlB4iJIJj%2B2YmHS3DkIa1aygoyb1KxAMtAS%2Bvv0RRIPtnQVc%2BFV19KeDeboIR9ig596AI4wexpzvM8j%2B0DluKvlKuiD%2FpR25vPPYPbVW2aK6ho8PZDViNSxC3pTjcYLtR4z7DN7tNLV5GiDT75OVDomcPi2DLDu69dyiGyEvPX2rguBxeKkBer2zbHoZ58saODuhQ7oMaZgZa8KL2xffa%2FBq&X-Amz-Signature=8c4d37a61b0efcf16bac7dcfc3f67ce75678b220e171f90fd7fca9b63c6dba13&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662OP25FKF%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCID5T0qjY8hrNPuh%2FEx7y%2B%2B9YV7Glxe0AuyED6Kq3ErdcAiA%2Bb70qd7K8CpIzT2laFiIKD6L%2BA830EVcvI4zZSaLGnyqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMepGk004n%2FEe%2BLJ0AKtwDkABOUr8tuTJfjgR1EgpFYqnrAtDKL78TwvkSU5zPYPhiKzhD5qwJib5Q9rJo1Yo%2BMzKZZs5dWUT0Vbn%2FCQVQ1OGzFs%2F905DA%2FGKEJPPG%2BHXt76GTvDb67LNPrQLY8hPJjitnybgq4irdqcBJ8ISosazfU9ICi0%2FCZJ8WXGp90exRYywWQVBKemyNoG1TLD0vavm4OAVnrl6h6wa7XavfcdNZcuj8arw14FGu9%2Bwkclrbg0bi7BSv%2FNAcLFUre1vZy8Hwaz7Qqtl%2BBPspN182zNSvYSVAqDqVzniIaN9JnalJa4bC5qU3HCY%2FwKpPsyu3GYkNVaRQ36StU%2BjS7sf1vJiYEukkVaUS6AqkgbBUaJ7QGqL2p06Fk5cx5GkJt5gZLOgOOukizcaNc%2BFE8eCqf1Gw1E7ektJIJy63bj7J%2BVPDaUPX%2F5bmlBfBZtb0fBJjGyfhiqRzX83GmUaXbAGW6CdI7eFgrbx3B6%2Bpvbuer%2BnKzQ12tQrZsPaqwUeOhnYU8h43KU1jx6vyx%2FaVbhI5D5svhhx0Gmb14LOgvWNGJUCladASwvkIcyLTuZ4SOU4NSg%2BcGcK0vGlS9T7LCkevhmtquiSY3VFnt9k8Tuw%2FyN6bu%2BJsw6cnAs%2FjDD8wztGC1wY6pgGDgdM0FlB4iJIJj%2B2YmHS3DkIa1aygoyb1KxAMtAS%2Bvv0RRIPtnQVc%2BFV19KeDeboIR9ig596AI4wexpzvM8j%2B0DluKvlKuiD%2FpR25vPPYPbVW2aK6ho8PZDViNSxC3pTjcYLtR4z7DN7tNLV5GiDT75OVDomcPi2DLDu69dyiGyEvPX2rguBxeKkBer2zbHoZ58saODuhQ7oMaZgZa8KL2xffa%2FBq&X-Amz-Signature=82f24e3868698bcb568526bfc3710aa23cee03929dbc115ef1abe9b0cc425b20&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDSU4AJU%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJHMEUCIBSL33EGI%2Bq6wI70IStHVTnz5iCC9h6zaRueFoy9l%2B6%2FAiEA31yH1XKl6hwfPuS4K3jbquFpMZXHSrzC96Yv09wEAvcqiAQI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEblXAWwKeELASaLcSrcA%2FjsH8cP4BYkZkFJxbkYVeFfkwUHdDXx7rQ77zBkU2XJ39iyg1qs5FAIBIjW%2FJjHOyAAi5kDkH4cyyOu62tEXxrsAvdjxFdqeyX3boUbBIetVnfVsyl2BHwOLR5x3bPgVe5E3n6lIWgGF13HrDQNVWVw7i1YexZWhtOas%2FkPjeUOSYNkaYA84%2FQZIIIkewGNtYLbch8R4pmdeXcYz2VJ6GIsjh%2FwGvPdVSDj87UrLCHkeTxdim6kcAmyjBo7Aj1ZXyIQ8q58SosTiMQ4XyVQTA1tY%2Fhy91Kw3TgqM5xbLGnPinRmdyqIaQbWYmOMvtmp8hJCBN6RdjH%2Fjz1CpDN9ErQvCE981iqHQhSmrKBV7q%2FtFYa0aQidH%2BOKesy1CzdzHmhZDraRDMd9iOacHlHajfJk8gStO2eC4fpsk4jyCUeEnCcm3N6mLTfALcidt%2FYJu529MP93xmxMKh6N6%2FliS%2FMg%2FnoCYm08MGCanVdqBHOaQgAYrD%2Fq4mxRui8RHMVKPEAKVjNqJMxb7dLTTrQJkrEdY6vTwwZ2oW2Fqt7fBs8cvoW%2F2jVMHWko3REhAWtje4CnMBhabodU06SEYPZn68jSAGUoC3fvxnolSXNUP4dnz0eQRAGgiIwk8MORMPHSgtcGOqUBESY%2FQ77NfhHnpS%2BJlV1LlNpmompyW2GyM8yVeifa57CxEZGCjQ%2BpYzQTumoZK%2FV6L6CDmLZMSYozNpVvWxaP0%2BVsGjIfxYBxnaxwhcP2U8JZIr%2F5AcN4Vh31WZOMv%2B03GtMkWloZQ%2Bn71LzOwZ218P6zSJWs269Bo0QRAfCIeMbwFVAFOzIJ7RaLL53AhAVlMveMxfK8IhDaAB62c4%2Brw5eBRXuC&X-Amz-Signature=b2e7129f7071336596483891e78fce11c7ea802ac30512e21d0e9d94e1e3a8ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDSU4AJU%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJHMEUCIBSL33EGI%2Bq6wI70IStHVTnz5iCC9h6zaRueFoy9l%2B6%2FAiEA31yH1XKl6hwfPuS4K3jbquFpMZXHSrzC96Yv09wEAvcqiAQI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEblXAWwKeELASaLcSrcA%2FjsH8cP4BYkZkFJxbkYVeFfkwUHdDXx7rQ77zBkU2XJ39iyg1qs5FAIBIjW%2FJjHOyAAi5kDkH4cyyOu62tEXxrsAvdjxFdqeyX3boUbBIetVnfVsyl2BHwOLR5x3bPgVe5E3n6lIWgGF13HrDQNVWVw7i1YexZWhtOas%2FkPjeUOSYNkaYA84%2FQZIIIkewGNtYLbch8R4pmdeXcYz2VJ6GIsjh%2FwGvPdVSDj87UrLCHkeTxdim6kcAmyjBo7Aj1ZXyIQ8q58SosTiMQ4XyVQTA1tY%2Fhy91Kw3TgqM5xbLGnPinRmdyqIaQbWYmOMvtmp8hJCBN6RdjH%2Fjz1CpDN9ErQvCE981iqHQhSmrKBV7q%2FtFYa0aQidH%2BOKesy1CzdzHmhZDraRDMd9iOacHlHajfJk8gStO2eC4fpsk4jyCUeEnCcm3N6mLTfALcidt%2FYJu529MP93xmxMKh6N6%2FliS%2FMg%2FnoCYm08MGCanVdqBHOaQgAYrD%2Fq4mxRui8RHMVKPEAKVjNqJMxb7dLTTrQJkrEdY6vTwwZ2oW2Fqt7fBs8cvoW%2F2jVMHWko3REhAWtje4CnMBhabodU06SEYPZn68jSAGUoC3fvxnolSXNUP4dnz0eQRAGgiIwk8MORMPHSgtcGOqUBESY%2FQ77NfhHnpS%2BJlV1LlNpmompyW2GyM8yVeifa57CxEZGCjQ%2BpYzQTumoZK%2FV6L6CDmLZMSYozNpVvWxaP0%2BVsGjIfxYBxnaxwhcP2U8JZIr%2F5AcN4Vh31WZOMv%2B03GtMkWloZQ%2Bn71LzOwZ218P6zSJWs269Bo0QRAfCIeMbwFVAFOzIJ7RaLL53AhAVlMveMxfK8IhDaAB62c4%2Brw5eBRXuC&X-Amz-Signature=7f381b494cc1c35bba038205c7926d2454db034419fee35ad65f5f5ce0ec17c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDSU4AJU%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJHMEUCIBSL33EGI%2Bq6wI70IStHVTnz5iCC9h6zaRueFoy9l%2B6%2FAiEA31yH1XKl6hwfPuS4K3jbquFpMZXHSrzC96Yv09wEAvcqiAQI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEblXAWwKeELASaLcSrcA%2FjsH8cP4BYkZkFJxbkYVeFfkwUHdDXx7rQ77zBkU2XJ39iyg1qs5FAIBIjW%2FJjHOyAAi5kDkH4cyyOu62tEXxrsAvdjxFdqeyX3boUbBIetVnfVsyl2BHwOLR5x3bPgVe5E3n6lIWgGF13HrDQNVWVw7i1YexZWhtOas%2FkPjeUOSYNkaYA84%2FQZIIIkewGNtYLbch8R4pmdeXcYz2VJ6GIsjh%2FwGvPdVSDj87UrLCHkeTxdim6kcAmyjBo7Aj1ZXyIQ8q58SosTiMQ4XyVQTA1tY%2Fhy91Kw3TgqM5xbLGnPinRmdyqIaQbWYmOMvtmp8hJCBN6RdjH%2Fjz1CpDN9ErQvCE981iqHQhSmrKBV7q%2FtFYa0aQidH%2BOKesy1CzdzHmhZDraRDMd9iOacHlHajfJk8gStO2eC4fpsk4jyCUeEnCcm3N6mLTfALcidt%2FYJu529MP93xmxMKh6N6%2FliS%2FMg%2FnoCYm08MGCanVdqBHOaQgAYrD%2Fq4mxRui8RHMVKPEAKVjNqJMxb7dLTTrQJkrEdY6vTwwZ2oW2Fqt7fBs8cvoW%2F2jVMHWko3REhAWtje4CnMBhabodU06SEYPZn68jSAGUoC3fvxnolSXNUP4dnz0eQRAGgiIwk8MORMPHSgtcGOqUBESY%2FQ77NfhHnpS%2BJlV1LlNpmompyW2GyM8yVeifa57CxEZGCjQ%2BpYzQTumoZK%2FV6L6CDmLZMSYozNpVvWxaP0%2BVsGjIfxYBxnaxwhcP2U8JZIr%2F5AcN4Vh31WZOMv%2B03GtMkWloZQ%2Bn71LzOwZ218P6zSJWs269Bo0QRAfCIeMbwFVAFOzIJ7RaLL53AhAVlMveMxfK8IhDaAB62c4%2Brw5eBRXuC&X-Amz-Signature=cfa2e29370b5a121888744eb6ea88855fdd85471be9797ef44bc092791933e76&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SDSU4AJU%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJHMEUCIBSL33EGI%2Bq6wI70IStHVTnz5iCC9h6zaRueFoy9l%2B6%2FAiEA31yH1XKl6hwfPuS4K3jbquFpMZXHSrzC96Yv09wEAvcqiAQI7%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEblXAWwKeELASaLcSrcA%2FjsH8cP4BYkZkFJxbkYVeFfkwUHdDXx7rQ77zBkU2XJ39iyg1qs5FAIBIjW%2FJjHOyAAi5kDkH4cyyOu62tEXxrsAvdjxFdqeyX3boUbBIetVnfVsyl2BHwOLR5x3bPgVe5E3n6lIWgGF13HrDQNVWVw7i1YexZWhtOas%2FkPjeUOSYNkaYA84%2FQZIIIkewGNtYLbch8R4pmdeXcYz2VJ6GIsjh%2FwGvPdVSDj87UrLCHkeTxdim6kcAmyjBo7Aj1ZXyIQ8q58SosTiMQ4XyVQTA1tY%2Fhy91Kw3TgqM5xbLGnPinRmdyqIaQbWYmOMvtmp8hJCBN6RdjH%2Fjz1CpDN9ErQvCE981iqHQhSmrKBV7q%2FtFYa0aQidH%2BOKesy1CzdzHmhZDraRDMd9iOacHlHajfJk8gStO2eC4fpsk4jyCUeEnCcm3N6mLTfALcidt%2FYJu529MP93xmxMKh6N6%2FliS%2FMg%2FnoCYm08MGCanVdqBHOaQgAYrD%2Fq4mxRui8RHMVKPEAKVjNqJMxb7dLTTrQJkrEdY6vTwwZ2oW2Fqt7fBs8cvoW%2F2jVMHWko3REhAWtje4CnMBhabodU06SEYPZn68jSAGUoC3fvxnolSXNUP4dnz0eQRAGgiIwk8MORMPHSgtcGOqUBESY%2FQ77NfhHnpS%2BJlV1LlNpmompyW2GyM8yVeifa57CxEZGCjQ%2BpYzQTumoZK%2FV6L6CDmLZMSYozNpVvWxaP0%2BVsGjIfxYBxnaxwhcP2U8JZIr%2F5AcN4Vh31WZOMv%2B03GtMkWloZQ%2Bn71LzOwZ218P6zSJWs269Bo0QRAfCIeMbwFVAFOzIJ7RaLL53AhAVlMveMxfK8IhDaAB62c4%2Brw5eBRXuC&X-Amz-Signature=0ea62df6f49d5f13c17410f00e634a63996388388767b21b5d8552870d631904&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R2OCTAIG%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCIGQcdNqQheXjUZrLVRHfE4r0dIcNPwjy1iYHpRrFYwfuAiAP95ElipdQ%2FfxC5jop%2B%2FMlgvS2Bb%2FFoW9F3VQ7CIMgkCqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMc%2FhlmUJ7%2BkinCI3kKtwDBZdjqW0JwP7MNK%2B%2FtEUtMRiQcgnBIbxexdnL2nA689KSvBcQBUg1gihDMR%2BB%2Bme47vjEnUMSTHJRJsgyHfzLLScFpWPhZR0GClmxmcbCqyiyXyWnfUWwDzX6ByHwYpEXli%2FUTkB01hP32a8Yu41NuTpKe54yzy96Z7uYIicbVN6ZhmdLgArgB1w1iK0sgvdkSv8weo1OcRF4p82Ot3VYqLlrxIC6zOD8r9BAAwj0QtEzo3CkT0zXny5ea5hDxmyG5y6K8B7pgU6Cg76ORJnQwGvLW9Y7CY8Mw5GVVgIRprUz4Lhz45w%2F8ZNhn5METCXDgC1I%2B59bxaUNwsDFe%2Bv47GBAUZRhl%2FIuiqxd%2FB27wY4zwRyozbG34czweC2F81QiEyxgAmhAFaioNt6UAb%2BB6CYBzo5ZLJCNitD4%2BqNyTO5TXrJGPDAv0Y8fBvFH5KNg3grOdszNktxgox6LCZhRIzIN5pVi3hNH3Hla66ihrKXHtlUFg1vr2PZuOvXQGb2ohne%2FFXO4OPAZfG8uHkxVL2jLWwPD9PkceksTPl3XTDo3tz%2By0oqeo3QAbNYL4uesQ45xGmVc9Xhe%2FPlWBDVtuiP2361kFujPAelj648ZqXmh8d04eNIgEF5CDGIw7tOC1wY6pgHzJL33qobfnOjYPk7P8gwOAggSwDkhAhPNLv11PUEUxealCT%2FwZ1qXqFU2RNSdgN2fGXbv2oRWmM1m0dQuqQV6UgRUZcFgSUvek9wPX0Zo4HU9fQKqv2WKRdDUtXqUpYBsohwXr7NtMYDpmicLJlBHhu8Evxc5l%2FfDeBPRk1shxU0fhsJUH5S95euLc58q941vPKeCv9shIi2VunHxrhzF89%2Fq8u8u&X-Amz-Signature=4b1481865f51a24965cdc3c81bf935bebcbb7bd0cd684884cdda8a79e6e4e243&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BK7KAHV%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCHzLrnPSCUlfhGM4%2FMjHEN0VCNwz7X1nemI%2FP6XcxoMECIQDAUiNa%2BzwBy7Tyvl8dNESR9dYJ5EMXKEyD7StZBCvQfiqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMXRoXvIpRzPAd1XZfKtwDFev0eFYfrsXS7c%2BXXR2owwMBDwjLtNaUj66B7ITOR8Qh5l2qszwrnw8Mb1v9ogO%2FBsxdg05NP72UWdwn0BpQQtrXoBHde331UXL79eqgLpNExFhokpoQIkWlBxxivyCT%2Fio2PS9%2FL1u%2Ft5EeZI7dEePU0Y3WamvOzOuYNVq6bHHrMcUfEExWTK95vlxa0g0ILeLd8lwD1lRHT8xp50DfHBkcyCk0ubKoXNhRlKbX3X6BZmGUScTIhNJi3TvQ7C9WkPB1e4KICT342SI%2FrPjvDz89Je5Oisa6u4woXvK0dEnVyAQru%2F7wXsEAxr5b%2FeIwMbT%2Baba7W7c7fXwTKt6jKhV%2BuE%2F3AmAqfqz7ZhCFcIQLQzkEQBsYdEsypVuCTPl8Jf5CxFSpjZP3xQmkduLwI96adHcrwSAWiN6E%2ByF94Hm24res7fCDMOMMEnTBxfb8eJZq%2BJSWgeQeYqcKStqNPKqOmw73C4Wk57yzin4l1V%2BO2Z49ZhJHOt%2FrzFJpP2yqBcXFuKJILTAE0nxAKP%2BKY9sISkVKly%2BdVZW1G4MtVGXL%2BXQEimhw7AzeRvk7u2UYlk74a8WnoF1PyBK5fmZmY5ympN%2B4ug6XiwyT8ry3GlEyJF6n5WsPoxEcdxUwidKC1wY6pgHi3EOq6KePk3VId8aBKjZp3Psr9D7L8daPzBjztirO3omT%2FjOBnUm4fPmfv84lMSJntwh%2FV9v0QpZUpClMbHc5DEDKHoDW7aFWRG2ZO66WBF6zy2l2NzmPHoPaOkqrCLTKdkjHruR0WNUX%2FnKT4njj%2BULHk8yyVIWX%2FoBswakX5BpdVbgmStG4Q1WEFMlQ9J0C24YVj%2BO9b8scTDU7Aphy5s3%2FCXLc&X-Amz-Signature=9f9d33037fc44c295e01246e34ca38161305b5c85685d08f97cc4b3d76648acf&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663BK7KAHV%2F20261027%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261027T135850Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECYaCXVzLXdlc3QtMiJGMEQCHzLrnPSCUlfhGM4%2FMjHEN0VCNwz7X1nemI%2FP6XcxoMECIQDAUiNa%2BzwBy7Tyvl8dNESR9dYJ5EMXKEyD7StZBCvQfiqIBAju%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMXRoXvIpRzPAd1XZfKtwDFev0eFYfrsXS7c%2BXXR2owwMBDwjLtNaUj66B7ITOR8Qh5l2qszwrnw8Mb1v9ogO%2FBsxdg05NP72UWdwn0BpQQtrXoBHde331UXL79eqgLpNExFhokpoQIkWlBxxivyCT%2Fio2PS9%2FL1u%2Ft5EeZI7dEePU0Y3WamvOzOuYNVq6bHHrMcUfEExWTK95vlxa0g0ILeLd8lwD1lRHT8xp50DfHBkcyCk0ubKoXNhRlKbX3X6BZmGUScTIhNJi3TvQ7C9WkPB1e4KICT342SI%2FrPjvDz89Je5Oisa6u4woXvK0dEnVyAQru%2F7wXsEAxr5b%2FeIwMbT%2Baba7W7c7fXwTKt6jKhV%2BuE%2F3AmAqfqz7ZhCFcIQLQzkEQBsYdEsypVuCTPl8Jf5CxFSpjZP3xQmkduLwI96adHcrwSAWiN6E%2ByF94Hm24res7fCDMOMMEnTBxfb8eJZq%2BJSWgeQeYqcKStqNPKqOmw73C4Wk57yzin4l1V%2BO2Z49ZhJHOt%2FrzFJpP2yqBcXFuKJILTAE0nxAKP%2BKY9sISkVKly%2BdVZW1G4MtVGXL%2BXQEimhw7AzeRvk7u2UYlk74a8WnoF1PyBK5fmZmY5ympN%2B4ug6XiwyT8ry3GlEyJF6n5WsPoxEcdxUwidKC1wY6pgHi3EOq6KePk3VId8aBKjZp3Psr9D7L8daPzBjztirO3omT%2FjOBnUm4fPmfv84lMSJntwh%2FV9v0QpZUpClMbHc5DEDKHoDW7aFWRG2ZO66WBF6zy2l2NzmPHoPaOkqrCLTKdkjHruR0WNUX%2FnKT4njj%2BULHk8yyVIWX%2FoBswakX5BpdVbgmStG4Q1WEFMlQ9J0C24YVj%2BO9b8scTDU7Aphy5s3%2FCXLc&X-Amz-Signature=37a4ffa0d9452beea142ba6e5c1fb2ef68801809feb0ec929aa6890b61518da1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
