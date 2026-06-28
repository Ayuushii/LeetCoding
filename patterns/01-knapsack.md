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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TLFTTDW3%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9uC%2FEE38yf9z4ZsyHpG%2FMD%2FxPIBAt%2Frr1KfwOpK44LQIhAIUZ6xCX41iO8zXE7zgskULKmnRTPN%2FHCQYx2EYMu7X1KogECJP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz7IEoZImPemCFxr4Yq3AOx0ec7yLLCddVIQtaw8B5snIaffnchMixWNv%2BF4uvDLi1IQI8czOCzVSNx5zOH8ZP7AmHnx%2B0SGRSQzfdm%2BoYJ8OPDDWaGsyNL4lsC3T%2Fa%2F0dCt0NR5gxVd%2BbjmboI3VIzBPL%2BozlERR3DMgNnXN1RvwXZnu5sNh7AuBJmVG6BXR4TafwBfTYgfBjM3uYuVy9EkCdzgFrdcg%2FudMPhQ3zuprjyMMlSt51zhxHfuJujrHX%2BXob8OsaCpjhPhS4MGNdpPpAVKL%2BxfbpcwURRBDr3dTtdDie3HsbY6fNtFzHM2MXIGrzzROGHso%2BKlNX8WELnpTa%2FpubMsKQkcOvKBCfRuI0F9CBy9muhtNbonBN%2BmIUPnUcQixyEN%2FEa6vduIeXJUpQThVZDEZJj%2BuG6rvkMQ5xgaWDzI9QBPiU4yVz38v1ng2GZsfwtTny0Zfl7gobGzB4VAe15wICfs4OGZe7E%2FImh15QReL6%2BccGnrjCCMZiqmxnK7AGLohgFASMOrjbGWxT2RnyaF2%2FNZad%2B9wlhfPfyITS7BDFd7N7FgswmUMllR9LmA1oLrPwnga1LEt8J2UORDgR1UhgiFVT4flj%2BFUw7R1hESDReGstdFwblnGreMjKa0nJjORw74jDA0IPSBjqkAePlZdKTL30c2iMeJwR62AHLcxzMGMkYen7s49cW6BxY5bHO8DNV4Sg4EEavoAwZpybQD4SgYVLfiyaH94roFFcXu2NcTg5c1VUGKj9pEJbZbwJ%2F9feiTyRlvsWFTooJpZEhf8ViNGzMyIRfqx0tbuGC7S9g4pBt1b%2FizCzSmi9oi7Ilal0wDDPPz0a3Bacd75Xgh%2BO5%2BYaRSog1KEyAUCk0JMRi&X-Amz-Signature=f26a73fece55d4b8c55eabf0453a0acb540da1aa7a631519e8965f84d57d8a16&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TLFTTDW3%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9uC%2FEE38yf9z4ZsyHpG%2FMD%2FxPIBAt%2Frr1KfwOpK44LQIhAIUZ6xCX41iO8zXE7zgskULKmnRTPN%2FHCQYx2EYMu7X1KogECJP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz7IEoZImPemCFxr4Yq3AOx0ec7yLLCddVIQtaw8B5snIaffnchMixWNv%2BF4uvDLi1IQI8czOCzVSNx5zOH8ZP7AmHnx%2B0SGRSQzfdm%2BoYJ8OPDDWaGsyNL4lsC3T%2Fa%2F0dCt0NR5gxVd%2BbjmboI3VIzBPL%2BozlERR3DMgNnXN1RvwXZnu5sNh7AuBJmVG6BXR4TafwBfTYgfBjM3uYuVy9EkCdzgFrdcg%2FudMPhQ3zuprjyMMlSt51zhxHfuJujrHX%2BXob8OsaCpjhPhS4MGNdpPpAVKL%2BxfbpcwURRBDr3dTtdDie3HsbY6fNtFzHM2MXIGrzzROGHso%2BKlNX8WELnpTa%2FpubMsKQkcOvKBCfRuI0F9CBy9muhtNbonBN%2BmIUPnUcQixyEN%2FEa6vduIeXJUpQThVZDEZJj%2BuG6rvkMQ5xgaWDzI9QBPiU4yVz38v1ng2GZsfwtTny0Zfl7gobGzB4VAe15wICfs4OGZe7E%2FImh15QReL6%2BccGnrjCCMZiqmxnK7AGLohgFASMOrjbGWxT2RnyaF2%2FNZad%2B9wlhfPfyITS7BDFd7N7FgswmUMllR9LmA1oLrPwnga1LEt8J2UORDgR1UhgiFVT4flj%2BFUw7R1hESDReGstdFwblnGreMjKa0nJjORw74jDA0IPSBjqkAePlZdKTL30c2iMeJwR62AHLcxzMGMkYen7s49cW6BxY5bHO8DNV4Sg4EEavoAwZpybQD4SgYVLfiyaH94roFFcXu2NcTg5c1VUGKj9pEJbZbwJ%2F9feiTyRlvsWFTooJpZEhf8ViNGzMyIRfqx0tbuGC7S9g4pBt1b%2FizCzSmi9oi7Ilal0wDDPPz0a3Bacd75Xgh%2BO5%2BYaRSog1KEyAUCk0JMRi&X-Amz-Signature=b0961e1ca119ba2a7c2050fcac7ac866a24530b6894e537af4d4a7fb7f7fe776&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TLFTTDW3%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9uC%2FEE38yf9z4ZsyHpG%2FMD%2FxPIBAt%2Frr1KfwOpK44LQIhAIUZ6xCX41iO8zXE7zgskULKmnRTPN%2FHCQYx2EYMu7X1KogECJP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igz7IEoZImPemCFxr4Yq3AOx0ec7yLLCddVIQtaw8B5snIaffnchMixWNv%2BF4uvDLi1IQI8czOCzVSNx5zOH8ZP7AmHnx%2B0SGRSQzfdm%2BoYJ8OPDDWaGsyNL4lsC3T%2Fa%2F0dCt0NR5gxVd%2BbjmboI3VIzBPL%2BozlERR3DMgNnXN1RvwXZnu5sNh7AuBJmVG6BXR4TafwBfTYgfBjM3uYuVy9EkCdzgFrdcg%2FudMPhQ3zuprjyMMlSt51zhxHfuJujrHX%2BXob8OsaCpjhPhS4MGNdpPpAVKL%2BxfbpcwURRBDr3dTtdDie3HsbY6fNtFzHM2MXIGrzzROGHso%2BKlNX8WELnpTa%2FpubMsKQkcOvKBCfRuI0F9CBy9muhtNbonBN%2BmIUPnUcQixyEN%2FEa6vduIeXJUpQThVZDEZJj%2BuG6rvkMQ5xgaWDzI9QBPiU4yVz38v1ng2GZsfwtTny0Zfl7gobGzB4VAe15wICfs4OGZe7E%2FImh15QReL6%2BccGnrjCCMZiqmxnK7AGLohgFASMOrjbGWxT2RnyaF2%2FNZad%2B9wlhfPfyITS7BDFd7N7FgswmUMllR9LmA1oLrPwnga1LEt8J2UORDgR1UhgiFVT4flj%2BFUw7R1hESDReGstdFwblnGreMjKa0nJjORw74jDA0IPSBjqkAePlZdKTL30c2iMeJwR62AHLcxzMGMkYen7s49cW6BxY5bHO8DNV4Sg4EEavoAwZpybQD4SgYVLfiyaH94roFFcXu2NcTg5c1VUGKj9pEJbZbwJ%2F9feiTyRlvsWFTooJpZEhf8ViNGzMyIRfqx0tbuGC7S9g4pBt1b%2FizCzSmi9oi7Ilal0wDDPPz0a3Bacd75Xgh%2BO5%2BYaRSog1KEyAUCk0JMRi&X-Amz-Signature=20674f3334def9d48efa7c8ae65a222a1c983306a5f52177f1784135c501be4d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664NZMOQUS%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDG0a2JbZ0x3Smt%2BFsQdiBz4DhPp2QnNvPeXHCRtLD%2FpQIhANaw2mESdVvG7%2F3mFeEntIliMi6O32S92Wl0A1yQYBzqKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwYVlBEem5W4Sgx3CIq3AMHkZIw4jbK1ejIJkyYEjciggVJmckl3zeCPgmsKNXL82%2FuPSFi93cHl8vvRrDZPZFTRqsmXeLZn7WedQ%2BvuNoEUes22SF%2B4HjIfStZQR9j%2FLAdi8TSqaiw1pz0vOiO3sz8u%2B3q90Rdm155R6xvICTAFLkKVR%2BD4xjZbOKJsf7x9umdPmpJiUdNsQg40eJ3cpyAHe2Xeya67HB2UC8fDEhpTRA8P776x53xhemm82kINUlUWTipDWPA%2FlE%2BKF1YyMBVt3UqltanxAe7qfIKtzlwdYi%2Bx5hxADx4XPJL9ViY7E%2BNcAk0um0rJ3i18bpGG3JnnHXXEBwLtmleVnb0SqhlEISsaIOmmD1ONFF7Mhc1HjIb1EQXE%2BoWqPWQtEZR5GUjdytOYS8edP2400bvBc6J3e6rs%2FsKnm4dcCA7r5042R9KomWFLPcaJZejIOVZH3SH%2BRq5HzxQ6UhqYKUmGa2EZ40b0%2FofRLf69Sninz9TRL3aKiig1hAsoeaiHiaoI%2F4KnAx7sI4NrtJPcehioJltwso4%2FV%2Fkgjs6W1gDSan2dT2ZQ1k%2BkwdLxHghwW5Bz3WirUXChXy6qY9ZUtt1MaCAuW7GxnOB1EJe0QZxkGKfh623V3Nv%2BmrmEdJ2FDDmz4PSBjqkAY1YfcLM4TVXzi9TdqBzqdkeasFoGsyYwzYyDfWtuQKaFRSHsr94mqapaGuxHgepFLweGn8cODj9%2FzvPiItQwpmrd7S3DSqZzz9%2Bca1TaL6DPcKvmi6IiFl4pkPipPbB4T93JdIRZEQ7C1Cy1QCGDHZ7MLwDbAwvI0j8v3300y%2BDjLSnNDyQjKT2bMd7Y%2BRmjlkn%2F7viGnd6LkO5bjAZFPaWkuOW&X-Amz-Signature=3c4b61807a3328fd5b2a6ddde621515c2940a1067c7e4c3e84c3f22447792f85&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664NZMOQUS%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDG0a2JbZ0x3Smt%2BFsQdiBz4DhPp2QnNvPeXHCRtLD%2FpQIhANaw2mESdVvG7%2F3mFeEntIliMi6O32S92Wl0A1yQYBzqKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwYVlBEem5W4Sgx3CIq3AMHkZIw4jbK1ejIJkyYEjciggVJmckl3zeCPgmsKNXL82%2FuPSFi93cHl8vvRrDZPZFTRqsmXeLZn7WedQ%2BvuNoEUes22SF%2B4HjIfStZQR9j%2FLAdi8TSqaiw1pz0vOiO3sz8u%2B3q90Rdm155R6xvICTAFLkKVR%2BD4xjZbOKJsf7x9umdPmpJiUdNsQg40eJ3cpyAHe2Xeya67HB2UC8fDEhpTRA8P776x53xhemm82kINUlUWTipDWPA%2FlE%2BKF1YyMBVt3UqltanxAe7qfIKtzlwdYi%2Bx5hxADx4XPJL9ViY7E%2BNcAk0um0rJ3i18bpGG3JnnHXXEBwLtmleVnb0SqhlEISsaIOmmD1ONFF7Mhc1HjIb1EQXE%2BoWqPWQtEZR5GUjdytOYS8edP2400bvBc6J3e6rs%2FsKnm4dcCA7r5042R9KomWFLPcaJZejIOVZH3SH%2BRq5HzxQ6UhqYKUmGa2EZ40b0%2FofRLf69Sninz9TRL3aKiig1hAsoeaiHiaoI%2F4KnAx7sI4NrtJPcehioJltwso4%2FV%2Fkgjs6W1gDSan2dT2ZQ1k%2BkwdLxHghwW5Bz3WirUXChXy6qY9ZUtt1MaCAuW7GxnOB1EJe0QZxkGKfh623V3Nv%2BmrmEdJ2FDDmz4PSBjqkAY1YfcLM4TVXzi9TdqBzqdkeasFoGsyYwzYyDfWtuQKaFRSHsr94mqapaGuxHgepFLweGn8cODj9%2FzvPiItQwpmrd7S3DSqZzz9%2Bca1TaL6DPcKvmi6IiFl4pkPipPbB4T93JdIRZEQ7C1Cy1QCGDHZ7MLwDbAwvI0j8v3300y%2BDjLSnNDyQjKT2bMd7Y%2BRmjlkn%2F7viGnd6LkO5bjAZFPaWkuOW&X-Amz-Signature=ba55121f6bf5fa848765dafbbeff214478d9dd94591f2f8006bb530b14f9d243&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664NZMOQUS%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDG0a2JbZ0x3Smt%2BFsQdiBz4DhPp2QnNvPeXHCRtLD%2FpQIhANaw2mESdVvG7%2F3mFeEntIliMi6O32S92Wl0A1yQYBzqKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwYVlBEem5W4Sgx3CIq3AMHkZIw4jbK1ejIJkyYEjciggVJmckl3zeCPgmsKNXL82%2FuPSFi93cHl8vvRrDZPZFTRqsmXeLZn7WedQ%2BvuNoEUes22SF%2B4HjIfStZQR9j%2FLAdi8TSqaiw1pz0vOiO3sz8u%2B3q90Rdm155R6xvICTAFLkKVR%2BD4xjZbOKJsf7x9umdPmpJiUdNsQg40eJ3cpyAHe2Xeya67HB2UC8fDEhpTRA8P776x53xhemm82kINUlUWTipDWPA%2FlE%2BKF1YyMBVt3UqltanxAe7qfIKtzlwdYi%2Bx5hxADx4XPJL9ViY7E%2BNcAk0um0rJ3i18bpGG3JnnHXXEBwLtmleVnb0SqhlEISsaIOmmD1ONFF7Mhc1HjIb1EQXE%2BoWqPWQtEZR5GUjdytOYS8edP2400bvBc6J3e6rs%2FsKnm4dcCA7r5042R9KomWFLPcaJZejIOVZH3SH%2BRq5HzxQ6UhqYKUmGa2EZ40b0%2FofRLf69Sninz9TRL3aKiig1hAsoeaiHiaoI%2F4KnAx7sI4NrtJPcehioJltwso4%2FV%2Fkgjs6W1gDSan2dT2ZQ1k%2BkwdLxHghwW5Bz3WirUXChXy6qY9ZUtt1MaCAuW7GxnOB1EJe0QZxkGKfh623V3Nv%2BmrmEdJ2FDDmz4PSBjqkAY1YfcLM4TVXzi9TdqBzqdkeasFoGsyYwzYyDfWtuQKaFRSHsr94mqapaGuxHgepFLweGn8cODj9%2FzvPiItQwpmrd7S3DSqZzz9%2Bca1TaL6DPcKvmi6IiFl4pkPipPbB4T93JdIRZEQ7C1Cy1QCGDHZ7MLwDbAwvI0j8v3300y%2BDjLSnNDyQjKT2bMd7Y%2BRmjlkn%2F7viGnd6LkO5bjAZFPaWkuOW&X-Amz-Signature=559875ba0e87df25725003838f5e0087f32ce1e901895c458bdca328c061f3ae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664NZMOQUS%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102650Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDG0a2JbZ0x3Smt%2BFsQdiBz4DhPp2QnNvPeXHCRtLD%2FpQIhANaw2mESdVvG7%2F3mFeEntIliMi6O32S92Wl0A1yQYBzqKogECJL%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwYVlBEem5W4Sgx3CIq3AMHkZIw4jbK1ejIJkyYEjciggVJmckl3zeCPgmsKNXL82%2FuPSFi93cHl8vvRrDZPZFTRqsmXeLZn7WedQ%2BvuNoEUes22SF%2B4HjIfStZQR9j%2FLAdi8TSqaiw1pz0vOiO3sz8u%2B3q90Rdm155R6xvICTAFLkKVR%2BD4xjZbOKJsf7x9umdPmpJiUdNsQg40eJ3cpyAHe2Xeya67HB2UC8fDEhpTRA8P776x53xhemm82kINUlUWTipDWPA%2FlE%2BKF1YyMBVt3UqltanxAe7qfIKtzlwdYi%2Bx5hxADx4XPJL9ViY7E%2BNcAk0um0rJ3i18bpGG3JnnHXXEBwLtmleVnb0SqhlEISsaIOmmD1ONFF7Mhc1HjIb1EQXE%2BoWqPWQtEZR5GUjdytOYS8edP2400bvBc6J3e6rs%2FsKnm4dcCA7r5042R9KomWFLPcaJZejIOVZH3SH%2BRq5HzxQ6UhqYKUmGa2EZ40b0%2FofRLf69Sninz9TRL3aKiig1hAsoeaiHiaoI%2F4KnAx7sI4NrtJPcehioJltwso4%2FV%2Fkgjs6W1gDSan2dT2ZQ1k%2BkwdLxHghwW5Bz3WirUXChXy6qY9ZUtt1MaCAuW7GxnOB1EJe0QZxkGKfh623V3Nv%2BmrmEdJ2FDDmz4PSBjqkAY1YfcLM4TVXzi9TdqBzqdkeasFoGsyYwzYyDfWtuQKaFRSHsr94mqapaGuxHgepFLweGn8cODj9%2FzvPiItQwpmrd7S3DSqZzz9%2Bca1TaL6DPcKvmi6IiFl4pkPipPbB4T93JdIRZEQ7C1Cy1QCGDHZ7MLwDbAwvI0j8v3300y%2BDjLSnNDyQjKT2bMd7Y%2BRmjlkn%2F7viGnd6LkO5bjAZFPaWkuOW&X-Amz-Signature=c53983224d90568b0f2a073884ccf77e9403108b9232acdf1fd65bb131d05e1f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RTIWOB5K%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICKGBSqK5l%2FCn8pe%2Bgy%2FsUJ4C%2FYZJjV29%2BbB6uAVbvTaAiAajVxLFGY7Rdn%2BTat6cvjIRLUK%2FNMfZnSg8B5qvAZ78SqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMvZz5UDUK0HpcUgqYKtwDRal%2F78TJWMYm1TLeNWWII2EJ%2BP7fZ3BTTfI2Avvxe62W2%2BTTlbEGS1g0jx0wqFbm6xc65EEngCAzGKJvF8fYVAB%2BFCAplvBJOirZLNbDZAUHm9rZm%2Bg74rOqPBeHHNcWKt2cfCGh9k1u8WHY8CtkN8ud%2F%2FUJ0DyVNrR%2BSD%2BJs0YN4SzyOnesdz5c3%2FQTkbAvZWTpesjh8ElPnKVbtFlXpnoylasDuseacXXW9Xqek72u3XIqZfMrUaVBxUsAcev4GBOLI%2BfjzqAa9sjXJjp1%2BC4ZeyhSZBWvPSwsp0aEcfquxfpR9MGU%2Fq6ZRauQH3g6GRawvPO4FsLNGIQjwyH6X5Xe6V0mEKnKhPlaqlUCNj2DfVkCYmTyDMRczbrOVH%2FRVSjfPf951KHKhYRodgJqUMZZGxruNC2puyJufpORY2rOhkFGvKT5c1rbh2bnp1x1Uadcz4A3c1k%2BNeqUpMLepbNbszxI4EtFbvyQZEq2xiqzqlPD3XgSJj%2FZfEgZ3p4E4ncrVO%2FGAG8qBEtCBLSOJueVIT%2B5E2kjSI1Su2DHFsZ7L%2FTnzp0uZ0U1Mwynat%2BqCD6a%2BuwbsezqHNMGDlQIniU1arJoGEkYgiSs9qvnwJsHPp9Ub7GWug%2Btx9Uw8c%2BD0gY6pgHnhPy%2Fxm4wrXsEOxPEfr0YLrMlloIYLlUuBNmWa5wmZfBmftqh1oksbFWpWxK%2Bf3KfiPhVsRM8YCaS00r%2FaCX%2Fbz0MUOWZFToXk1P2XVOog18pd%2FbDJnsgBoWk4QqF0zmDKj3tEdE5rOgSlTu%2BDqd9d3klDBRj%2F0%2FFsJnRh%2B88vQ9anCr8KdFq14r%2BQ1s8V0r2esZvcB%2FkgtiuzOUaWgtvP0odV5W7&X-Amz-Signature=4d033a15bf434f6dcb56117cd4be8007bf8b408939ee53e3012bdedc8b93e0ba&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S32HHCWK%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGRxhHMZKQge7Hk2bCrrZC%2FnDo7ax0072FsomrjLUNTDAiB5RRew0lECRjCpap90HoxerZXiqm96zNs332XmqY%2BvjyqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgeSRwNvh4CcKxRBFKtwDRdnhYMT9jjZ4CFdqUj1E7wNgaCSaSRcDMzCcfVT7Gx8p19J0rv4l92NZqIVfJGKuMkTG2LI0msYADEWwqzBQxCiEFoiaPyTuaddaePSV4323Rjpv1mbCEkyBFPHYgNfnCpxBe6LLNv%2Fd20osOx1tPwfW%2F%2FyH2D9Y0KJNQXTIwa65%2BcjDOTgxL4Z0XHoqxaBnS05pItQbk1XwlcqmmsixAgR96snjGEp7d6oR%2BqTsHDFtzDDqCiDGCSZenbDDYCLiqF8QvgTFM2%2FvwLVD6zqP0bRSfUFfGf29Zf9rhEOG3ipIJRDWDfORaP3FF5o6dnfUz8ku8t3oc2fYvZh1RCPIOv01Xqyiyg6YvA88pkoZUUA5hmLvZealCSP6DGTNc3ucKJpdJdLkH0sCAZqdkHYwqG7hKg%2Bw7uvvSiMUT%2BdWhQtdUGIts8zEl4JAHn5U0iHYc1NN0jFAH1Yk%2BhR%2F6Uw8e9DwBwcnZP4lvLE3A0NfJqkQSe15%2BpCHbF8TIe1HgtNwBs63QzTG%2FSY6q9ng9bnpZ4dwPi52cQ4w7i33YCdp4KONrmfgvKsiVcThbxsuTnrw0YTPgrjMr3gVXkfwmsUiE9glzR4wmtfIIbqsPoFhuYIB31oJKkNqGz04QHowrc%2BD0gY6pgEqY2tFJ7jakIw3fxFGM6sF1NxMY33UcBxTqQmYgeor64kAlrb3YRh2XfKNEyZZ%2BTgmaHvVPxIYSZ0dNJGovcoAeodKsEdxxh96x%2F8SE2zKgXMJX%2BQYNNulW%2BoqPiWSAPf%2FPC8p6SGTND9FQ4i1SJGPEvMRclLPUc1usffHL4drz7MOarQZWCjqWbgIElp2DcmacPobolBR77DdvFj7h36Ze5nbBTay&X-Amz-Signature=2f05465593474ae67fc6d79a6866e72ae8d8bc337478f129354ca013196fa14b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S32HHCWK%2F20260628%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260628T102651Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIGRxhHMZKQge7Hk2bCrrZC%2FnDo7ax0072FsomrjLUNTDAiB5RRew0lECRjCpap90HoxerZXiqm96zNs332XmqY%2BvjyqIBAiS%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMgeSRwNvh4CcKxRBFKtwDRdnhYMT9jjZ4CFdqUj1E7wNgaCSaSRcDMzCcfVT7Gx8p19J0rv4l92NZqIVfJGKuMkTG2LI0msYADEWwqzBQxCiEFoiaPyTuaddaePSV4323Rjpv1mbCEkyBFPHYgNfnCpxBe6LLNv%2Fd20osOx1tPwfW%2F%2FyH2D9Y0KJNQXTIwa65%2BcjDOTgxL4Z0XHoqxaBnS05pItQbk1XwlcqmmsixAgR96snjGEp7d6oR%2BqTsHDFtzDDqCiDGCSZenbDDYCLiqF8QvgTFM2%2FvwLVD6zqP0bRSfUFfGf29Zf9rhEOG3ipIJRDWDfORaP3FF5o6dnfUz8ku8t3oc2fYvZh1RCPIOv01Xqyiyg6YvA88pkoZUUA5hmLvZealCSP6DGTNc3ucKJpdJdLkH0sCAZqdkHYwqG7hKg%2Bw7uvvSiMUT%2BdWhQtdUGIts8zEl4JAHn5U0iHYc1NN0jFAH1Yk%2BhR%2F6Uw8e9DwBwcnZP4lvLE3A0NfJqkQSe15%2BpCHbF8TIe1HgtNwBs63QzTG%2FSY6q9ng9bnpZ4dwPi52cQ4w7i33YCdp4KONrmfgvKsiVcThbxsuTnrw0YTPgrjMr3gVXkfwmsUiE9glzR4wmtfIIbqsPoFhuYIB31oJKkNqGz04QHowrc%2BD0gY6pgEqY2tFJ7jakIw3fxFGM6sF1NxMY33UcBxTqQmYgeor64kAlrb3YRh2XfKNEyZZ%2BTgmaHvVPxIYSZ0dNJGovcoAeodKsEdxxh96x%2F8SE2zKgXMJX%2BQYNNulW%2BoqPiWSAPf%2FPC8p6SGTND9FQ4i1SJGPEvMRclLPUc1usffHL4drz7MOarQZWCjqWbgIElp2DcmacPobolBR77DdvFj7h36Ze5nbBTay&X-Amz-Signature=5a3995be342121c3aa1a9c690a112d162c749daffed427fa4b925d7bc1c5e80c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
