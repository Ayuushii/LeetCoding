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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ORHPQNJ%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIEI3TMTzGvIQDkTLVSdtVg%2B8YP1ATSpC6oPFi0kfADBdAiEAyRtJXpAJ94ZiTjTqffnIT1C2VD28%2FTGPyhznRP4ndCsq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDI0rFYlrxbkpR0TC%2BCrcAxZndEh%2BaFip7G4icFeZVk67HmSBZAq5aycHPLhWZ2fY8i2xRZfM4FjZuEv5v0GvzhzDge5nXFGRmiIHX1rrbcK4%2BKo3lgfQT80y4Q3BPTpQ9Mnmhsz2HbrgkE2VXzBLXzaglJwvwWcLdNzHKgDNCS%2FmCCQawEuwoLKSMgvuZxxUdgOuGZGY3sn13lUcDMHRtJqQMU%2BmVBrM%2Fi2G57lAQRtlnjz%2BIRsBh4oMUrKPy6r1sDW0QE9r64fHMSpS1lYAn7IUNwxAxykL%2FianqYDFfEUqME8SrCN9Oxc8dX5F0l%2BfsvBD%2FcSlxc1sGurGEOmFYrTskTfFLZq%2BlmjJLYEP%2FTM%2BxB7xIs1J9IBKk9ns8xB3AgBTj6XDkl4VAQ4ApnzpdRARRX3GF75nePkvXeUN6ruLJa5LcHhsQrgKPdJ80hAK3fYNfaAuANNWO9ctpqMjb32LXKJKM6iDjtNICcPIt4yhvJegNnbiBWZG6EaBjliuSclo631U79OI7uoC6oAtZmp1slPCfbusyAx4rV7BhDn9AEmPp6pBjdXASYix%2Bv%2B0VDOF8urHh51h14zPBODBUj4VKAWFTpjFWk06fmls1UoJvL0s8BRiSUrkyyaIx67J3IAIp2bzrLRM06vtMJerv80GOqUBP5QL27mFlwmF8qqu5MoFynRphhsLJKmBpLDe7Q2GzcXGUk8vqKRv2trd4DDH843rOhRXMVlvjepmirxbwWX8TI4N74v4TwaBqbTcwxaEBLmWOdGsL54RX9ZkqUJufEx%2BQVV7ImbWytL5S%2Brl%2Flt35L%2BODXMyGPTyWjyhCR%2FuDQgqQ8gWJbx7RX6aY7iU3WoVVQOPLPHGprh58aCOCoK2c38W8kUm&X-Amz-Signature=0279f345f72e153c809788291b604fa8c1cd56dcaf7e25bff0bcd4c68a0a407e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ORHPQNJ%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIEI3TMTzGvIQDkTLVSdtVg%2B8YP1ATSpC6oPFi0kfADBdAiEAyRtJXpAJ94ZiTjTqffnIT1C2VD28%2FTGPyhznRP4ndCsq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDI0rFYlrxbkpR0TC%2BCrcAxZndEh%2BaFip7G4icFeZVk67HmSBZAq5aycHPLhWZ2fY8i2xRZfM4FjZuEv5v0GvzhzDge5nXFGRmiIHX1rrbcK4%2BKo3lgfQT80y4Q3BPTpQ9Mnmhsz2HbrgkE2VXzBLXzaglJwvwWcLdNzHKgDNCS%2FmCCQawEuwoLKSMgvuZxxUdgOuGZGY3sn13lUcDMHRtJqQMU%2BmVBrM%2Fi2G57lAQRtlnjz%2BIRsBh4oMUrKPy6r1sDW0QE9r64fHMSpS1lYAn7IUNwxAxykL%2FianqYDFfEUqME8SrCN9Oxc8dX5F0l%2BfsvBD%2FcSlxc1sGurGEOmFYrTskTfFLZq%2BlmjJLYEP%2FTM%2BxB7xIs1J9IBKk9ns8xB3AgBTj6XDkl4VAQ4ApnzpdRARRX3GF75nePkvXeUN6ruLJa5LcHhsQrgKPdJ80hAK3fYNfaAuANNWO9ctpqMjb32LXKJKM6iDjtNICcPIt4yhvJegNnbiBWZG6EaBjliuSclo631U79OI7uoC6oAtZmp1slPCfbusyAx4rV7BhDn9AEmPp6pBjdXASYix%2Bv%2B0VDOF8urHh51h14zPBODBUj4VKAWFTpjFWk06fmls1UoJvL0s8BRiSUrkyyaIx67J3IAIp2bzrLRM06vtMJerv80GOqUBP5QL27mFlwmF8qqu5MoFynRphhsLJKmBpLDe7Q2GzcXGUk8vqKRv2trd4DDH843rOhRXMVlvjepmirxbwWX8TI4N74v4TwaBqbTcwxaEBLmWOdGsL54RX9ZkqUJufEx%2BQVV7ImbWytL5S%2Brl%2Flt35L%2BODXMyGPTyWjyhCR%2FuDQgqQ8gWJbx7RX6aY7iU3WoVVQOPLPHGprh58aCOCoK2c38W8kUm&X-Amz-Signature=b721c6f2169077421fd285bc6a0ca60e85601ddfebe4e009b2e2076b3fe90295&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666ORHPQNJ%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084112Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIEI3TMTzGvIQDkTLVSdtVg%2B8YP1ATSpC6oPFi0kfADBdAiEAyRtJXpAJ94ZiTjTqffnIT1C2VD28%2FTGPyhznRP4ndCsq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDI0rFYlrxbkpR0TC%2BCrcAxZndEh%2BaFip7G4icFeZVk67HmSBZAq5aycHPLhWZ2fY8i2xRZfM4FjZuEv5v0GvzhzDge5nXFGRmiIHX1rrbcK4%2BKo3lgfQT80y4Q3BPTpQ9Mnmhsz2HbrgkE2VXzBLXzaglJwvwWcLdNzHKgDNCS%2FmCCQawEuwoLKSMgvuZxxUdgOuGZGY3sn13lUcDMHRtJqQMU%2BmVBrM%2Fi2G57lAQRtlnjz%2BIRsBh4oMUrKPy6r1sDW0QE9r64fHMSpS1lYAn7IUNwxAxykL%2FianqYDFfEUqME8SrCN9Oxc8dX5F0l%2BfsvBD%2FcSlxc1sGurGEOmFYrTskTfFLZq%2BlmjJLYEP%2FTM%2BxB7xIs1J9IBKk9ns8xB3AgBTj6XDkl4VAQ4ApnzpdRARRX3GF75nePkvXeUN6ruLJa5LcHhsQrgKPdJ80hAK3fYNfaAuANNWO9ctpqMjb32LXKJKM6iDjtNICcPIt4yhvJegNnbiBWZG6EaBjliuSclo631U79OI7uoC6oAtZmp1slPCfbusyAx4rV7BhDn9AEmPp6pBjdXASYix%2Bv%2B0VDOF8urHh51h14zPBODBUj4VKAWFTpjFWk06fmls1UoJvL0s8BRiSUrkyyaIx67J3IAIp2bzrLRM06vtMJerv80GOqUBP5QL27mFlwmF8qqu5MoFynRphhsLJKmBpLDe7Q2GzcXGUk8vqKRv2trd4DDH843rOhRXMVlvjepmirxbwWX8TI4N74v4TwaBqbTcwxaEBLmWOdGsL54RX9ZkqUJufEx%2BQVV7ImbWytL5S%2Brl%2Flt35L%2BODXMyGPTyWjyhCR%2FuDQgqQ8gWJbx7RX6aY7iU3WoVVQOPLPHGprh58aCOCoK2c38W8kUm&X-Amz-Signature=f94f61cb3d68f065830ebb8a921d3f7b3ddc8eaf7ad17643caa3840af3423877&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624CY63OY%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQCaL2o1toybTRyjp143Te4PfmV8vKA9M7vjD34lcpxD0wIhAK5hrOmQu7Dvbg90Y3hCiIUlJSe6oOgWWiS1Udy4JvH4Kv8DCEEQABoMNjM3NDIzMTgzODA1IgwPAJC0hUdKeIpu6VMq3AO06Y%2FfmBbXOJWvWh74J8ilEjO5ue13avJmhmTyTqvSe%2B%2FfDc2Njfgkosls4oEw9aHvCQi3YvKqRf6oBeZPHsYZ4BFfFwlo%2FaCLyI7j1PawawGjGVCT45bFHRVaxenUbQ5%2FeiYyhsfS2nwddymtBPLGHdPYkemEsneFeCJNOdNAdJY14Y%2Bt%2FZIbjJZY4aENGWj9AQBgXduv%2Fd7fRpMbuyqFacJsp7NGGo4nz3fE%2Br6zKFao0yqsTV2pAltPA5JmY4aPVq2JBXvUNNREhCbVm8xJeDFY5GELC%2B7lb%2F0oA5UbW3BDNEBMVuadV5g9NOByu3BpKVRLL1CbqApR6BCE80rRFM1Q4VYAv9WfiCW4pRNj5dO%2BmwWjRnAy37oSZf49qScoidGTUwAa74YuaglpQs%2FiGC8g9BgKuy6Fl3fbt%2FH2KuDhngm96s6SdTXj0vLopgXSn7EUpq4J%2FZlKuwhoLkuMsdvwS%2FHJDRqG%2BvPo%2FCjWJFVPVD%2BaeDulUlWxdyQK90JApfRXYPDwNhim%2FjQnBRFcpbwjjdeKpP%2FPLs9X7F%2Bqtsuvr6ttOpPauz8Tp%2Fr0t3Jrp1WkbJ%2BlRHtDCdkupmo1TKK35YTzJfjV6CYJu5A%2FQnXxZ%2F%2BbZ4Y2joBn3DCYq7%2FNBjqkAahowlx1sUpIPozyxXJpk2j4jOM4kYVncme8y3D0O3qgsOMmSz6SfOoEGHygIJx5Jou6mPb%2BIldCml330gVRxP4olXWb2%2B52iji3j3SVe72uo1l%2FwW5MBs06rP8cQC%2FKWKFn2oidAWSnn6ksnv5WPeNufZZx5l5m3gyl6mL1oO%2BENDRJvvcqFAW6DGUGQ9L8WgEJH53f%2BSjdUtGAsauApK1h53i0&X-Amz-Signature=6ad53b53795fd7940febe5dd046a346d303846b839e9e3e03d7eb54da38b5202&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624CY63OY%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQCaL2o1toybTRyjp143Te4PfmV8vKA9M7vjD34lcpxD0wIhAK5hrOmQu7Dvbg90Y3hCiIUlJSe6oOgWWiS1Udy4JvH4Kv8DCEEQABoMNjM3NDIzMTgzODA1IgwPAJC0hUdKeIpu6VMq3AO06Y%2FfmBbXOJWvWh74J8ilEjO5ue13avJmhmTyTqvSe%2B%2FfDc2Njfgkosls4oEw9aHvCQi3YvKqRf6oBeZPHsYZ4BFfFwlo%2FaCLyI7j1PawawGjGVCT45bFHRVaxenUbQ5%2FeiYyhsfS2nwddymtBPLGHdPYkemEsneFeCJNOdNAdJY14Y%2Bt%2FZIbjJZY4aENGWj9AQBgXduv%2Fd7fRpMbuyqFacJsp7NGGo4nz3fE%2Br6zKFao0yqsTV2pAltPA5JmY4aPVq2JBXvUNNREhCbVm8xJeDFY5GELC%2B7lb%2F0oA5UbW3BDNEBMVuadV5g9NOByu3BpKVRLL1CbqApR6BCE80rRFM1Q4VYAv9WfiCW4pRNj5dO%2BmwWjRnAy37oSZf49qScoidGTUwAa74YuaglpQs%2FiGC8g9BgKuy6Fl3fbt%2FH2KuDhngm96s6SdTXj0vLopgXSn7EUpq4J%2FZlKuwhoLkuMsdvwS%2FHJDRqG%2BvPo%2FCjWJFVPVD%2BaeDulUlWxdyQK90JApfRXYPDwNhim%2FjQnBRFcpbwjjdeKpP%2FPLs9X7F%2Bqtsuvr6ttOpPauz8Tp%2Fr0t3Jrp1WkbJ%2BlRHtDCdkupmo1TKK35YTzJfjV6CYJu5A%2FQnXxZ%2F%2BbZ4Y2joBn3DCYq7%2FNBjqkAahowlx1sUpIPozyxXJpk2j4jOM4kYVncme8y3D0O3qgsOMmSz6SfOoEGHygIJx5Jou6mPb%2BIldCml330gVRxP4olXWb2%2B52iji3j3SVe72uo1l%2FwW5MBs06rP8cQC%2FKWKFn2oidAWSnn6ksnv5WPeNufZZx5l5m3gyl6mL1oO%2BENDRJvvcqFAW6DGUGQ9L8WgEJH53f%2BSjdUtGAsauApK1h53i0&X-Amz-Signature=f5615f2ccf659e1254049d98b43b8c250cff1a46eafe81119fafa26e35db339f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624CY63OY%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQCaL2o1toybTRyjp143Te4PfmV8vKA9M7vjD34lcpxD0wIhAK5hrOmQu7Dvbg90Y3hCiIUlJSe6oOgWWiS1Udy4JvH4Kv8DCEEQABoMNjM3NDIzMTgzODA1IgwPAJC0hUdKeIpu6VMq3AO06Y%2FfmBbXOJWvWh74J8ilEjO5ue13avJmhmTyTqvSe%2B%2FfDc2Njfgkosls4oEw9aHvCQi3YvKqRf6oBeZPHsYZ4BFfFwlo%2FaCLyI7j1PawawGjGVCT45bFHRVaxenUbQ5%2FeiYyhsfS2nwddymtBPLGHdPYkemEsneFeCJNOdNAdJY14Y%2Bt%2FZIbjJZY4aENGWj9AQBgXduv%2Fd7fRpMbuyqFacJsp7NGGo4nz3fE%2Br6zKFao0yqsTV2pAltPA5JmY4aPVq2JBXvUNNREhCbVm8xJeDFY5GELC%2B7lb%2F0oA5UbW3BDNEBMVuadV5g9NOByu3BpKVRLL1CbqApR6BCE80rRFM1Q4VYAv9WfiCW4pRNj5dO%2BmwWjRnAy37oSZf49qScoidGTUwAa74YuaglpQs%2FiGC8g9BgKuy6Fl3fbt%2FH2KuDhngm96s6SdTXj0vLopgXSn7EUpq4J%2FZlKuwhoLkuMsdvwS%2FHJDRqG%2BvPo%2FCjWJFVPVD%2BaeDulUlWxdyQK90JApfRXYPDwNhim%2FjQnBRFcpbwjjdeKpP%2FPLs9X7F%2Bqtsuvr6ttOpPauz8Tp%2Fr0t3Jrp1WkbJ%2BlRHtDCdkupmo1TKK35YTzJfjV6CYJu5A%2FQnXxZ%2F%2BbZ4Y2joBn3DCYq7%2FNBjqkAahowlx1sUpIPozyxXJpk2j4jOM4kYVncme8y3D0O3qgsOMmSz6SfOoEGHygIJx5Jou6mPb%2BIldCml330gVRxP4olXWb2%2B52iji3j3SVe72uo1l%2FwW5MBs06rP8cQC%2FKWKFn2oidAWSnn6ksnv5WPeNufZZx5l5m3gyl6mL1oO%2BENDRJvvcqFAW6DGUGQ9L8WgEJH53f%2BSjdUtGAsauApK1h53i0&X-Amz-Signature=7fb58c373128223c7ab34f1f1a88252157bcacfea9cc1488dfac601fa6b3e944&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46624CY63OY%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084113Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJIMEYCIQCaL2o1toybTRyjp143Te4PfmV8vKA9M7vjD34lcpxD0wIhAK5hrOmQu7Dvbg90Y3hCiIUlJSe6oOgWWiS1Udy4JvH4Kv8DCEEQABoMNjM3NDIzMTgzODA1IgwPAJC0hUdKeIpu6VMq3AO06Y%2FfmBbXOJWvWh74J8ilEjO5ue13avJmhmTyTqvSe%2B%2FfDc2Njfgkosls4oEw9aHvCQi3YvKqRf6oBeZPHsYZ4BFfFwlo%2FaCLyI7j1PawawGjGVCT45bFHRVaxenUbQ5%2FeiYyhsfS2nwddymtBPLGHdPYkemEsneFeCJNOdNAdJY14Y%2Bt%2FZIbjJZY4aENGWj9AQBgXduv%2Fd7fRpMbuyqFacJsp7NGGo4nz3fE%2Br6zKFao0yqsTV2pAltPA5JmY4aPVq2JBXvUNNREhCbVm8xJeDFY5GELC%2B7lb%2F0oA5UbW3BDNEBMVuadV5g9NOByu3BpKVRLL1CbqApR6BCE80rRFM1Q4VYAv9WfiCW4pRNj5dO%2BmwWjRnAy37oSZf49qScoidGTUwAa74YuaglpQs%2FiGC8g9BgKuy6Fl3fbt%2FH2KuDhngm96s6SdTXj0vLopgXSn7EUpq4J%2FZlKuwhoLkuMsdvwS%2FHJDRqG%2BvPo%2FCjWJFVPVD%2BaeDulUlWxdyQK90JApfRXYPDwNhim%2FjQnBRFcpbwjjdeKpP%2FPLs9X7F%2Bqtsuvr6ttOpPauz8Tp%2Fr0t3Jrp1WkbJ%2BlRHtDCdkupmo1TKK35YTzJfjV6CYJu5A%2FQnXxZ%2F%2BbZ4Y2joBn3DCYq7%2FNBjqkAahowlx1sUpIPozyxXJpk2j4jOM4kYVncme8y3D0O3qgsOMmSz6SfOoEGHygIJx5Jou6mPb%2BIldCml330gVRxP4olXWb2%2B52iji3j3SVe72uo1l%2FwW5MBs06rP8cQC%2FKWKFn2oidAWSnn6ksnv5WPeNufZZx5l5m3gyl6mL1oO%2BENDRJvvcqFAW6DGUGQ9L8WgEJH53f%2BSjdUtGAsauApK1h53i0&X-Amz-Signature=cf210fc0172b880dc7f26746ac0dc7d4949fca3c6a9fa61e7930c77fd532ab7e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665ICNUDHB%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084115Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIDHRQCsZUpUqSTBBkzyTXeXd7rOYVAPYGf9J1n3vc9EFAiEAuPBwigF%2FtZ01IdolhbcSSNY5qpQNqxTKcN0gLP%2Fwk14q%2FwMIQhAAGgw2Mzc0MjMxODM4MDUiDHPFVnVhMYBc3L2wtSrcA7U1MrnPkp6teflbuvhf9OuaFrZe1kv0f4d1GRjDfhv90rv0ThIGL11xwREiPy17k655frI7wjY3sRcCHiDHz4FH0hMF3qeXAM%2Frj5AnJ3BWlnDtAdAUZ4X3N7uUethxQHkZr6fQ5U2hdZMOWLFeiWj0S98eJU6rfk7uZGnTbr3k6Z3X4cWkIMudynOkc9UkOVqgxkUs5YaIXcD3eRwm5uAvgMNJG%2FPtkoj7rGmWf%2Bjt5PagNIIRbwX%2BjsZaVoMbOAKGFWizxpRmkd9Efreavm2vq%2F20z27uL9zIKVbNCHt%2FcDhK1H2wlMbcYywjfg%2BHnC8QBdTFGQ9Sd1rKZQ6yPcu9IGjEyt6o6uK%2F03yV0WpBCiz6nLOzIxcXZOPlDxnwE9HNrAa85BJEiFwWNVBp4sEwe3xie3Qcl2pP7gf8rDRLEnjt5UCRCBCtRtSffWd9rMGbv9XZSaXy85dWx0QSpPjfjabrlvEv71EHJk5t%2FHYNQwkturHcXKvPoHvWQ59elFPNUvfy6PUfyYf3MUbyYJiUIfxz%2BLtlxsnSvtpWCmrs6jVc%2FHXlVj%2Fxo7Of1udFqKhrVynLA9eDn73C0bgoqfWbdiB4%2BSdPc6HUDxIgHGMdO9p4mpHtyaTIbO%2FDMO2rv80GOqUB5avm0H5P1VfsjCFi0dezBFwKOk9WZfuuGHaeWdSYnYZWwuP0ea1ItiM5Yt95gBhGR24ZI648sOS6mVAZbraNxN8T9D6OJeA8SKSuNyIgGFQKKSFE1HKd7wRFzyKC4rnSbABHIAded%2FVLg4vFRcCsbtjCQOmG4J9%2F8bjJQb9pZfN0v%2Bj%2FJPiJOsTl3BsVctBfevxIHEdZ21BrMCk3K8CYLSFHAtLj&X-Amz-Signature=0823a70eaa7fccf616246909f71196fb817e76e5c17ad419a17d165f5a40fe98&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643YCKOGN%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084115Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIHwvuG%2BIXNMPzuauJiOHADauDqQQmLKo1DHd2Gm4rU%2FWAiEAnZat8sPtcuBVHRBjrEBeouucnZ8ze5f2Gu80%2BIfgwlUq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDEtGLTWIgraf29FY7yrcA2uZniQ%2BJx%2FX9ddTrJfXTrvGiqd7WwcC%2F21QGVLsx4BbRhpqad7kG103SE9LbXUJeLJ1fj32xenFrbj7o%2F6hYGVu9G9gLBQg36NjsdKwNoPZhGOg%2B06U2yDfX5CftizFtRQlJQ7aASKHE5tWHYt91CgP8tmulbiuG7p2RBA9FnEA6OGEG71OCc%2BgoP5gzA1%2B3PYLCyQN3iAergHk5hMYQJfKGkTR9sblqWBdr8IQ%2FCxAa5ciacR2%2F0oP7F8HnXL1pG6BnvO%2Bpaf6K1YLZ36WsoNNxJs20%2FSwXOz9aqoSzvIL7QktYi3LwxyyR5Kz%2B7gJ2uoR1fxKB1wx8Zh2oseDbXyt6LhStwLJUkJazoo%2B6h0P717ch5kCX3Aks2g7VGa2rh681cVruaFqSsthn9TqWNsbUBIjYIQM8qshRYsqumn9jaYJS0pWBism63amVmcnWMLaxUGizgjL2h6uqftDdadf0wI974SI029OVXPYIcLcC7P1p10gM0fTqHYk%2BYIqDoyzG039eCa%2F9DSEFSVg%2BPGTnP3K2yIlmYddxKqZi0iJ%2BHQxnURweMEZA9%2FqN2mY6LmwjPY60oN94FcRmb9NTbZdDUcZnhu%2BjzAbBhxdgPXsFFKVR%2FfA%2FxKBkX8dMJGsv80GOqUBlL6deXSpnIKfqvCvZ3neT1Yi7ksXPBSrQWS%2FIxhd7kgZMi2AqOvNQ3yPCtqyo3px%2Fiq%2F6OzZMazBgwJaHp4BYA6JFfIzz%2FdBFibZ9uKs39kePv43F0u%2ByTNMMSeThO20%2BLEWIw6263VlZI0bUFvWBrH0%2FYkw0YgiKwCj7BqW%2FeJTcWhBrPbFRneEwWlS4NTikSpkTr9ek1sH2qIrgpfQa87trlFW&X-Amz-Signature=9e5ae6a7ffb59184250e3e57bbfa17bc93ee5a837ac5a787904f1bafe63858b3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46643YCKOGN%2F20260310%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260310T084115Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHkaCXVzLXdlc3QtMiJHMEUCIHwvuG%2BIXNMPzuauJiOHADauDqQQmLKo1DHd2Gm4rU%2FWAiEAnZat8sPtcuBVHRBjrEBeouucnZ8ze5f2Gu80%2BIfgwlUq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDEtGLTWIgraf29FY7yrcA2uZniQ%2BJx%2FX9ddTrJfXTrvGiqd7WwcC%2F21QGVLsx4BbRhpqad7kG103SE9LbXUJeLJ1fj32xenFrbj7o%2F6hYGVu9G9gLBQg36NjsdKwNoPZhGOg%2B06U2yDfX5CftizFtRQlJQ7aASKHE5tWHYt91CgP8tmulbiuG7p2RBA9FnEA6OGEG71OCc%2BgoP5gzA1%2B3PYLCyQN3iAergHk5hMYQJfKGkTR9sblqWBdr8IQ%2FCxAa5ciacR2%2F0oP7F8HnXL1pG6BnvO%2Bpaf6K1YLZ36WsoNNxJs20%2FSwXOz9aqoSzvIL7QktYi3LwxyyR5Kz%2B7gJ2uoR1fxKB1wx8Zh2oseDbXyt6LhStwLJUkJazoo%2B6h0P717ch5kCX3Aks2g7VGa2rh681cVruaFqSsthn9TqWNsbUBIjYIQM8qshRYsqumn9jaYJS0pWBism63amVmcnWMLaxUGizgjL2h6uqftDdadf0wI974SI029OVXPYIcLcC7P1p10gM0fTqHYk%2BYIqDoyzG039eCa%2F9DSEFSVg%2BPGTnP3K2yIlmYddxKqZi0iJ%2BHQxnURweMEZA9%2FqN2mY6LmwjPY60oN94FcRmb9NTbZdDUcZnhu%2BjzAbBhxdgPXsFFKVR%2FfA%2FxKBkX8dMJGsv80GOqUBlL6deXSpnIKfqvCvZ3neT1Yi7ksXPBSrQWS%2FIxhd7kgZMi2AqOvNQ3yPCtqyo3px%2Fiq%2F6OzZMazBgwJaHp4BYA6JFfIzz%2FdBFibZ9uKs39kePv43F0u%2ByTNMMSeThO20%2BLEWIw6263VlZI0bUFvWBrH0%2FYkw0YgiKwCj7BqW%2FeJTcWhBrPbFRneEwWlS4NTikSpkTr9ek1sH2qIrgpfQa87trlFW&X-Amz-Signature=15fd96f14554401fc3cb9c9f3e6e30d07b9063dda7765e1a010fd288f71e8483&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
