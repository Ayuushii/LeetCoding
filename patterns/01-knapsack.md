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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5IDKFOT%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093939Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDzW0B7ZEFmGB9UHEZv79Yzv%2FbPczeTve7ZB2CS2bDlZwIhAOrZ3V%2B%2Bk92rA%2FqlvjE9aigJ7umwN5IHA%2FDJsP4t1VboKogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw8VnK%2F53918kgooDQq3AP9THFlIdTTFRtJf7M8MbUuqcuEHFnzbUSa3pRxDUdsPNeW0OQMciA%2FTEPDjABQx0rnXSwXJX8vvoVUO9eMKXlYyFf9PmqRxD87QZ6wiJG3eN%2F3nCSZ%2BwZuubjOsZnZNPvnryTWicxXfaER%2FbqLIimtls5ij52XvZGYyjbYIV1%2BrV7orECrDSky0TmdmHCDD2oRSP%2F9PwBu6N8CfdV3DfxEtMP%2B9BpAnxvi9zYMoIYCX9F9yGJKoEf9OJ3u1AboQbC2zhSALSR%2BBVjMLHi6bA2I2Xn8fgC4hgtpDve1YMQFX6e%2FOuCD%2BpUZ4rGibxJBpdQNir0yV1cEg0KwS%2Fn9Wn2eOyylfBhWmiq8wxg9%2BDUIQZH6LAU0j%2By7hFAL4PVY9pFvOSyKQcynBNPUO%2FlReW%2BGIDWM25dWr%2BlytpMdxW3BDApBOKSzKqVAuEHcktZFCJ50W4%2FMlwVmao5EuMGjbgvrOoH60prEsR8NgIQ7I%2BanHvTuEtaicAwy7Tpwd5I4a3XwDyoK8ws661yJkQ977a2Ro3QLZQx4J5fEA%2FoRu%2FzwwHpI9BxYuNXOVwo4M6OT3SugG2XoSwldSWwyCHvN3CcubbZih6bgONjQWdNQHm%2BZnwuNgiIQ0NymQ5Y4fDCP7KDQBjqkAdX3RG0BpMxs7Ek18MMXmYNlkK%2BFsQM9UrD8LtjAr6R9cOUanmnxMtxN0TEtqJidnl2KuE8FGY709rwwY0ykDCq1GXE37%2FkXLitU3PPpbUZrRhBnSm7ZtEnP6KX%2BCjYO%2FEV3TAX1yVfg71%2FhcqhIDHQ4cSfQpMW0dZQpJn%2BwPUY1wN%2Bj5e1DL8%2BKQKrGz2sWEhnckBOAnCODmrYHxd403dIYEjRY&X-Amz-Signature=b246d013758066d845891639db36e0126e70443be5eb62b7779a5359a7b1e2d4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5IDKFOT%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093939Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDzW0B7ZEFmGB9UHEZv79Yzv%2FbPczeTve7ZB2CS2bDlZwIhAOrZ3V%2B%2Bk92rA%2FqlvjE9aigJ7umwN5IHA%2FDJsP4t1VboKogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw8VnK%2F53918kgooDQq3AP9THFlIdTTFRtJf7M8MbUuqcuEHFnzbUSa3pRxDUdsPNeW0OQMciA%2FTEPDjABQx0rnXSwXJX8vvoVUO9eMKXlYyFf9PmqRxD87QZ6wiJG3eN%2F3nCSZ%2BwZuubjOsZnZNPvnryTWicxXfaER%2FbqLIimtls5ij52XvZGYyjbYIV1%2BrV7orECrDSky0TmdmHCDD2oRSP%2F9PwBu6N8CfdV3DfxEtMP%2B9BpAnxvi9zYMoIYCX9F9yGJKoEf9OJ3u1AboQbC2zhSALSR%2BBVjMLHi6bA2I2Xn8fgC4hgtpDve1YMQFX6e%2FOuCD%2BpUZ4rGibxJBpdQNir0yV1cEg0KwS%2Fn9Wn2eOyylfBhWmiq8wxg9%2BDUIQZH6LAU0j%2By7hFAL4PVY9pFvOSyKQcynBNPUO%2FlReW%2BGIDWM25dWr%2BlytpMdxW3BDApBOKSzKqVAuEHcktZFCJ50W4%2FMlwVmao5EuMGjbgvrOoH60prEsR8NgIQ7I%2BanHvTuEtaicAwy7Tpwd5I4a3XwDyoK8ws661yJkQ977a2Ro3QLZQx4J5fEA%2FoRu%2FzwwHpI9BxYuNXOVwo4M6OT3SugG2XoSwldSWwyCHvN3CcubbZih6bgONjQWdNQHm%2BZnwuNgiIQ0NymQ5Y4fDCP7KDQBjqkAdX3RG0BpMxs7Ek18MMXmYNlkK%2BFsQM9UrD8LtjAr6R9cOUanmnxMtxN0TEtqJidnl2KuE8FGY709rwwY0ykDCq1GXE37%2FkXLitU3PPpbUZrRhBnSm7ZtEnP6KX%2BCjYO%2FEV3TAX1yVfg71%2FhcqhIDHQ4cSfQpMW0dZQpJn%2BwPUY1wN%2Bj5e1DL8%2BKQKrGz2sWEhnckBOAnCODmrYHxd403dIYEjRY&X-Amz-Signature=acf48dfd8615d8b67ce39eff2151198b30fc84a36e07893cb79839e648aca027&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466R5IDKFOT%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDzW0B7ZEFmGB9UHEZv79Yzv%2FbPczeTve7ZB2CS2bDlZwIhAOrZ3V%2B%2Bk92rA%2FqlvjE9aigJ7umwN5IHA%2FDJsP4t1VboKogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igw8VnK%2F53918kgooDQq3AP9THFlIdTTFRtJf7M8MbUuqcuEHFnzbUSa3pRxDUdsPNeW0OQMciA%2FTEPDjABQx0rnXSwXJX8vvoVUO9eMKXlYyFf9PmqRxD87QZ6wiJG3eN%2F3nCSZ%2BwZuubjOsZnZNPvnryTWicxXfaER%2FbqLIimtls5ij52XvZGYyjbYIV1%2BrV7orECrDSky0TmdmHCDD2oRSP%2F9PwBu6N8CfdV3DfxEtMP%2B9BpAnxvi9zYMoIYCX9F9yGJKoEf9OJ3u1AboQbC2zhSALSR%2BBVjMLHi6bA2I2Xn8fgC4hgtpDve1YMQFX6e%2FOuCD%2BpUZ4rGibxJBpdQNir0yV1cEg0KwS%2Fn9Wn2eOyylfBhWmiq8wxg9%2BDUIQZH6LAU0j%2By7hFAL4PVY9pFvOSyKQcynBNPUO%2FlReW%2BGIDWM25dWr%2BlytpMdxW3BDApBOKSzKqVAuEHcktZFCJ50W4%2FMlwVmao5EuMGjbgvrOoH60prEsR8NgIQ7I%2BanHvTuEtaicAwy7Tpwd5I4a3XwDyoK8ws661yJkQ977a2Ro3QLZQx4J5fEA%2FoRu%2FzwwHpI9BxYuNXOVwo4M6OT3SugG2XoSwldSWwyCHvN3CcubbZih6bgONjQWdNQHm%2BZnwuNgiIQ0NymQ5Y4fDCP7KDQBjqkAdX3RG0BpMxs7Ek18MMXmYNlkK%2BFsQM9UrD8LtjAr6R9cOUanmnxMtxN0TEtqJidnl2KuE8FGY709rwwY0ykDCq1GXE37%2FkXLitU3PPpbUZrRhBnSm7ZtEnP6KX%2BCjYO%2FEV3TAX1yVfg71%2FhcqhIDHQ4cSfQpMW0dZQpJn%2BwPUY1wN%2Bj5e1DL8%2BKQKrGz2sWEhnckBOAnCODmrYHxd403dIYEjRY&X-Amz-Signature=8756b37bf25bb9690c9e4803707361c62373f538a3cbfccfc5554314a929c553&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VAK2HDJC%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIE7ZPLPdbN8p4APcfW9expfsg3RVvg%2BxhgErpgALBcFRAiA4loUU%2FPugauQefo%2B%2F7fh3RumIMvZzfHSOhbczo4AZSSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMC1Ni%2F%2F50xN7%2BknB%2BKtwDx3dRZzad3Y%2BU7R3h7lHl2Q%2BzNnEqDOpyM%2FQcoev6ga9XccoSPjCLyyq%2BQaT2pdccCmQ5epNfDLAVspDAALv4EJ0KieL%2B7rBg1CYNKFeGniiZ9%2Bwc6IHupqldJN43FAzXABMN2te9MOoQPpMgQZ3zbNNKyYlcBVgNLpr4l8YSScbR1YaFMsKI%2BJrLHPwolGaKLRSJN3bp6N2q5pxBHMSubV3obJRutI7L3Zp0xZgvZ6%2FogGNtNobf%2FzvU4bB%2BhYi2Z9v6T6rXi%2B9g12aTaCIt2Hx49BDXCmJl9IeUVngdmv7wLHSQoHrhIUFNyD8jx8%2Fojnjrr%2F3LSLG%2Bt%2F%2FYh6YEh%2FSmpS%2BM%2F2AvLBsmiCa0HLJAmWPCeGmp24lFPyk4gV%2BRmLRWiver1pYO4FtQixFPUUV0V7KKgdf2lEiIlKkNAA4nHtzT884REBFrQhSebCuM5k82F6%2BAiEftizq9Ypt6khK3Es%2BOpamG07eswkUYq%2BR3KiMSBuP2ecK7DDUIcHhl8L8w8xOLVg7ksyfPTL1ONconTFZQpWFBV9yxOQBshft%2FEq6IPBUgEp5o9tXq0OdkiNPyn6LmD%2BLYUIOnUwE%2BCzMl1EeBlHrd0dprc%2FNKRdSOTx%2FbpdMC0X2HTtEwwOqg0AY6pgG6A9AY9JmN%2F8Aet9%2F2DQTWOTo03Wt5DEqysb4Ka%2FdJVdSabISOFWX7rxQAIPEPzhr0e26iehgQj2vsJLoZKwNZqapkAClWx1kEj3JFVyuyrt2GjlOex26VH6cRAcsdYxgiu51WCi8xcx7%2FzAb7qadQ4LWV0ZMF5nD93CH5htEi58NLwxWqAyeot7mtUzIOOgHE0tl49Hd67EIwqFPCCFR3obeqg48k&X-Amz-Signature=db041b99b584f073224056290ba38b1d9ac22ec894c8681d5acb2fa85fb3efbe&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VAK2HDJC%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIE7ZPLPdbN8p4APcfW9expfsg3RVvg%2BxhgErpgALBcFRAiA4loUU%2FPugauQefo%2B%2F7fh3RumIMvZzfHSOhbczo4AZSSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMC1Ni%2F%2F50xN7%2BknB%2BKtwDx3dRZzad3Y%2BU7R3h7lHl2Q%2BzNnEqDOpyM%2FQcoev6ga9XccoSPjCLyyq%2BQaT2pdccCmQ5epNfDLAVspDAALv4EJ0KieL%2B7rBg1CYNKFeGniiZ9%2Bwc6IHupqldJN43FAzXABMN2te9MOoQPpMgQZ3zbNNKyYlcBVgNLpr4l8YSScbR1YaFMsKI%2BJrLHPwolGaKLRSJN3bp6N2q5pxBHMSubV3obJRutI7L3Zp0xZgvZ6%2FogGNtNobf%2FzvU4bB%2BhYi2Z9v6T6rXi%2B9g12aTaCIt2Hx49BDXCmJl9IeUVngdmv7wLHSQoHrhIUFNyD8jx8%2Fojnjrr%2F3LSLG%2Bt%2F%2FYh6YEh%2FSmpS%2BM%2F2AvLBsmiCa0HLJAmWPCeGmp24lFPyk4gV%2BRmLRWiver1pYO4FtQixFPUUV0V7KKgdf2lEiIlKkNAA4nHtzT884REBFrQhSebCuM5k82F6%2BAiEftizq9Ypt6khK3Es%2BOpamG07eswkUYq%2BR3KiMSBuP2ecK7DDUIcHhl8L8w8xOLVg7ksyfPTL1ONconTFZQpWFBV9yxOQBshft%2FEq6IPBUgEp5o9tXq0OdkiNPyn6LmD%2BLYUIOnUwE%2BCzMl1EeBlHrd0dprc%2FNKRdSOTx%2FbpdMC0X2HTtEwwOqg0AY6pgG6A9AY9JmN%2F8Aet9%2F2DQTWOTo03Wt5DEqysb4Ka%2FdJVdSabISOFWX7rxQAIPEPzhr0e26iehgQj2vsJLoZKwNZqapkAClWx1kEj3JFVyuyrt2GjlOex26VH6cRAcsdYxgiu51WCi8xcx7%2FzAb7qadQ4LWV0ZMF5nD93CH5htEi58NLwxWqAyeot7mtUzIOOgHE0tl49Hd67EIwqFPCCFR3obeqg48k&X-Amz-Signature=dd4c65126c445b2d84b6cae912751f446b5117bfa89f776aa91755de5301f817&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VAK2HDJC%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIE7ZPLPdbN8p4APcfW9expfsg3RVvg%2BxhgErpgALBcFRAiA4loUU%2FPugauQefo%2B%2F7fh3RumIMvZzfHSOhbczo4AZSSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMC1Ni%2F%2F50xN7%2BknB%2BKtwDx3dRZzad3Y%2BU7R3h7lHl2Q%2BzNnEqDOpyM%2FQcoev6ga9XccoSPjCLyyq%2BQaT2pdccCmQ5epNfDLAVspDAALv4EJ0KieL%2B7rBg1CYNKFeGniiZ9%2Bwc6IHupqldJN43FAzXABMN2te9MOoQPpMgQZ3zbNNKyYlcBVgNLpr4l8YSScbR1YaFMsKI%2BJrLHPwolGaKLRSJN3bp6N2q5pxBHMSubV3obJRutI7L3Zp0xZgvZ6%2FogGNtNobf%2FzvU4bB%2BhYi2Z9v6T6rXi%2B9g12aTaCIt2Hx49BDXCmJl9IeUVngdmv7wLHSQoHrhIUFNyD8jx8%2Fojnjrr%2F3LSLG%2Bt%2F%2FYh6YEh%2FSmpS%2BM%2F2AvLBsmiCa0HLJAmWPCeGmp24lFPyk4gV%2BRmLRWiver1pYO4FtQixFPUUV0V7KKgdf2lEiIlKkNAA4nHtzT884REBFrQhSebCuM5k82F6%2BAiEftizq9Ypt6khK3Es%2BOpamG07eswkUYq%2BR3KiMSBuP2ecK7DDUIcHhl8L8w8xOLVg7ksyfPTL1ONconTFZQpWFBV9yxOQBshft%2FEq6IPBUgEp5o9tXq0OdkiNPyn6LmD%2BLYUIOnUwE%2BCzMl1EeBlHrd0dprc%2FNKRdSOTx%2FbpdMC0X2HTtEwwOqg0AY6pgG6A9AY9JmN%2F8Aet9%2F2DQTWOTo03Wt5DEqysb4Ka%2FdJVdSabISOFWX7rxQAIPEPzhr0e26iehgQj2vsJLoZKwNZqapkAClWx1kEj3JFVyuyrt2GjlOex26VH6cRAcsdYxgiu51WCi8xcx7%2FzAb7qadQ4LWV0ZMF5nD93CH5htEi58NLwxWqAyeot7mtUzIOOgHE0tl49Hd67EIwqFPCCFR3obeqg48k&X-Amz-Signature=55e8d7c14764e4b40a0daa2c39fb0640d3b637bc66abe296f979e639707aa10e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VAK2HDJC%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIE7ZPLPdbN8p4APcfW9expfsg3RVvg%2BxhgErpgALBcFRAiA4loUU%2FPugauQefo%2B%2F7fh3RumIMvZzfHSOhbczo4AZSSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMC1Ni%2F%2F50xN7%2BknB%2BKtwDx3dRZzad3Y%2BU7R3h7lHl2Q%2BzNnEqDOpyM%2FQcoev6ga9XccoSPjCLyyq%2BQaT2pdccCmQ5epNfDLAVspDAALv4EJ0KieL%2B7rBg1CYNKFeGniiZ9%2Bwc6IHupqldJN43FAzXABMN2te9MOoQPpMgQZ3zbNNKyYlcBVgNLpr4l8YSScbR1YaFMsKI%2BJrLHPwolGaKLRSJN3bp6N2q5pxBHMSubV3obJRutI7L3Zp0xZgvZ6%2FogGNtNobf%2FzvU4bB%2BhYi2Z9v6T6rXi%2B9g12aTaCIt2Hx49BDXCmJl9IeUVngdmv7wLHSQoHrhIUFNyD8jx8%2Fojnjrr%2F3LSLG%2Bt%2F%2FYh6YEh%2FSmpS%2BM%2F2AvLBsmiCa0HLJAmWPCeGmp24lFPyk4gV%2BRmLRWiver1pYO4FtQixFPUUV0V7KKgdf2lEiIlKkNAA4nHtzT884REBFrQhSebCuM5k82F6%2BAiEftizq9Ypt6khK3Es%2BOpamG07eswkUYq%2BR3KiMSBuP2ecK7DDUIcHhl8L8w8xOLVg7ksyfPTL1ONconTFZQpWFBV9yxOQBshft%2FEq6IPBUgEp5o9tXq0OdkiNPyn6LmD%2BLYUIOnUwE%2BCzMl1EeBlHrd0dprc%2FNKRdSOTx%2FbpdMC0X2HTtEwwOqg0AY6pgG6A9AY9JmN%2F8Aet9%2F2DQTWOTo03Wt5DEqysb4Ka%2FdJVdSabISOFWX7rxQAIPEPzhr0e26iehgQj2vsJLoZKwNZqapkAClWx1kEj3JFVyuyrt2GjlOex26VH6cRAcsdYxgiu51WCi8xcx7%2FzAb7qadQ4LWV0ZMF5nD93CH5htEi58NLwxWqAyeot7mtUzIOOgHE0tl49Hd67EIwqFPCCFR3obeqg48k&X-Amz-Signature=46b089e6157a80695be762738bf41d38bdf29e555e4b9e359db2454e39b8f570&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667BY64N5K%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDT%2BNc4fz2%2BTFcEHot96y6UcKYCk%2FkejWovr4gEHDSJYwIgUY2ZnGJYrLKh8k4LqcEOiD4tryhiijHQBo2q2%2FguCtsqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDF927kqcCxSJ9QnyRircA3brHn9%2BVhq6JeHZUmJAxDavdglcVFOAiAfDpD0y23BFY%2Fayi5ZxobgtIP%2Bx04WYKWHqUOUMaSYvgZPHby6rk9FBfISCf8Rje3B2TEAsELc49YJ7iqEIfObILoY4wVsPj7jrKg3NvicXAVrjFLXYmZpVWxTn8QfLQ5FHHIdJqp8Tora7T1mHBvyOst2v%2BV9AD3w4O424V1K1ZgUGc6NVB1foG1iRP4rD4Eq9Mh7l6xI%2Fqx9aVoR2XKq8wQWg%2FoNCgBCv%2BxXIpt76GvsbpvfYSpvgguQ6FinKcJjGAmmR%2FIpkHPuiqmmgcOxcRD5xaCuSMLAXWE0yCrfUTpUb4WhVYqpsbyRLyMM1t8H9yMuhw9DInh8269HcaKDgO0PdJf%2BNhMDYioRTGUwj0izmvsshbKcHY4lZ42SuJCsRmiBSz4ynNXJtCL0GiTA6gjT4%2BJ3mVin6cKEtbQxHigB2tF0YDYrjF4VosvwlJAQfLzLxwpExdfHtwA0625hyhsp1sNvN7RvsxJg%2FkjwJvHRXBzMH5LciBRfFxxm0tk42YxAhfNnqAC6%2BwUc0aqOy6pKcM4vxJPpn8W%2BfKD6y2klZcF7MttnfS94beXy9CSbw8pMEZsdnFLyU9EomoXQNQzmnMIvroNAGOqUBqVxBV9T9nUw6fDwr5qvMfRPSG%2BE%2F1aGpK%2BxTsMlo6x1rWw1moK9yS5oO6otvD1vZGqTIhknbee0YKP5cW32PPdRJs%2FZuBMSeSFA3WVs4mOxnDTLiRHhwV2MG%2FhSJBl68LPMLELv8ULsFijquSITz2BA2kRmMJREh3aSoiiDgCHP%2Bm2%2BusTaSklayLun%2BiGTu%2FMdoT3tdD%2F%2FmqD0eJKdlWLck2xie&X-Amz-Signature=491ebcff9c9057fb0754c9de67f93999e5752ea8ae51d99c16ad80f585e37e13&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOBS6RZS%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC3u8cQt9affg0GlosmYRDf1edK17hQV0PDVmk0bHvOnAiAPjlcmESgA2sX7CG0oWj8JClgBMUw6RrPYog2EupeJMSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMKcL%2F8roqQN7nrSQ%2FKtwDoIX9sdS%2F4tc36PFAF%2FjlHTLS6JF19nbT78rhP7XV39Wj8%2By600B%2FNRjAM%2B5r2Vjf6ldcX1GZ%2B1bh0t4FwMpZAmwBohjfE4Ta3hJ8koUZysKw5pmR324wczew014Dgae0NzHXxg6iv7ldo5htxujs885q2ADcdSGGJVdNFF5Ou10GXDrix7f0nGSYCxDe6z3LICqA29Knl0WpphvBcTLeGRSLytcBzJ47WZJuKsmJHauqPdNWJ4frXupS3hq9eorm1Le3DkJL9V9tejemjo9HZTdjG8bj%2FSSpGxMfNyyvvXZ1APtzWUsQxuaP5%2BECz9FS6dNYaSLcZT4yGRZROX%2FwpJ5rz6NGEuERqmcg1h218OcpzyXw9mUu9dZmAp1upgfIKRNG05fYT69a1eZNTCOSDpJDdBEraQQqlHCFtc7693s5x1LGOkv3vuTsIpzyw723hsro8%2BX%2FycJxj0kk4SIWuzgNA1bKx6h5isXYr5JN3Dwf1bVStIBzkd%2BZ06kxj6Q4R2kA05wsOzX6kLHRUfDtOA9Qr2XEYaQrUpGWxtCyWNkIfgROG8kLQppcZBkYccidWiBfrDm%2ByaezSG8xMn703TRc0id8PUZz5p76bLlORlLnRUr5VL4DyyazWvIwo%2Bug0AY6pgGGqLyDeQghtEzNKYI%2FJ1DTV%2BkQSiJgDB5lkx9uQsmXZQk%2B9aFUHVRvmpR1dtsqqSKpwEMe6hBg%2Ballw1aDze3hxzaG%2BARs4cNllYHD7hTgOyAcLa99g4tQJyo22rWSNK0gdWqRVMlrF%2BTrCHzdJV1jj%2Fs3siPBrqC67s876GCJ8ukq9%2FgIeBjFD966H9qKH3ID8Q3T1OjzlIRPf1M0qnN2jNWNUMRX&X-Amz-Signature=2587bd59bba9250c4a751f37772862c0618d10a953479c1e557cd02acf905ab8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YOBS6RZS%2F20260516%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260516T093940Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIC3u8cQt9affg0GlosmYRDf1edK17hQV0PDVmk0bHvOnAiAPjlcmESgA2sX7CG0oWj8JClgBMUw6RrPYog2EupeJMSqIBAiK%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMKcL%2F8roqQN7nrSQ%2FKtwDoIX9sdS%2F4tc36PFAF%2FjlHTLS6JF19nbT78rhP7XV39Wj8%2By600B%2FNRjAM%2B5r2Vjf6ldcX1GZ%2B1bh0t4FwMpZAmwBohjfE4Ta3hJ8koUZysKw5pmR324wczew014Dgae0NzHXxg6iv7ldo5htxujs885q2ADcdSGGJVdNFF5Ou10GXDrix7f0nGSYCxDe6z3LICqA29Knl0WpphvBcTLeGRSLytcBzJ47WZJuKsmJHauqPdNWJ4frXupS3hq9eorm1Le3DkJL9V9tejemjo9HZTdjG8bj%2FSSpGxMfNyyvvXZ1APtzWUsQxuaP5%2BECz9FS6dNYaSLcZT4yGRZROX%2FwpJ5rz6NGEuERqmcg1h218OcpzyXw9mUu9dZmAp1upgfIKRNG05fYT69a1eZNTCOSDpJDdBEraQQqlHCFtc7693s5x1LGOkv3vuTsIpzyw723hsro8%2BX%2FycJxj0kk4SIWuzgNA1bKx6h5isXYr5JN3Dwf1bVStIBzkd%2BZ06kxj6Q4R2kA05wsOzX6kLHRUfDtOA9Qr2XEYaQrUpGWxtCyWNkIfgROG8kLQppcZBkYccidWiBfrDm%2ByaezSG8xMn703TRc0id8PUZz5p76bLlORlLnRUr5VL4DyyazWvIwo%2Bug0AY6pgGGqLyDeQghtEzNKYI%2FJ1DTV%2BkQSiJgDB5lkx9uQsmXZQk%2B9aFUHVRvmpR1dtsqqSKpwEMe6hBg%2Ballw1aDze3hxzaG%2BARs4cNllYHD7hTgOyAcLa99g4tQJyo22rWSNK0gdWqRVMlrF%2BTrCHzdJV1jj%2Fs3siPBrqC67s876GCJ8ukq9%2FgIeBjFD966H9qKH3ID8Q3T1OjzlIRPf1M0qnN2jNWNUMRX&X-Amz-Signature=74a469f5600a4b9c07684994fe194b7f1360ab06d758404f9c21ada60ce80339&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
