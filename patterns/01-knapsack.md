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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQGSEEQM%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083857Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJGMEQCIDfghooZS%2FoWLECQcRyGn%2Bt5ib8Q1liSMewOOyVbsfVUAiAX2Ps2HMkyxgPI4b4n6kgMX%2Fgq9fhUAcbrysOTcCiTRCqIBAjw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMe0H%2BwlOPkV4lPHkgKtwD1FyNMDER8NhrPImrJwoTmZGx%2FAjoUCjE2%2B0jzHLg5a8iHZiA0ELsxg0t6jt07wAWGK2gOqUxgqnSdbujRM%2B%2F7dVkPRr2K3GJycou%2BCZI630R8PdA8a81G2Uo0cezjAueOhosU3CrWtX3QUKMc3ENuEz03RSYeCYTzwUDGRBw8gCH3ueZoF2ZYE0nz1x8zRsilm5mjsuMRPdiaHac34XSMyNKmxCqlen82GbUUN40jS5%2FJYr2pMCRWW108okaQ05sCKtHBaJ%2FRgi2W0Kd2rBbAzjhxQ1r%2Fkk%2BY9sPG1IcfnAmIID%2F0GePc4qMRJgNBFqo1X6ql9JATMub6GiLbTT6kDODY53vQckz7U%2BzlYncsTs2r%2F%2FviJ1P1fZ3%2B9OGl5jtNoqZCU8uTJ07Z2RawjcIoNDZJuD%2Fz1qV0lOislPuPWhLiTnOxcIUR88yxAi%2BDshoK31hqOpb%2FDVGNSWPT16KM8q3FXrWcIHmq5WeN%2B3TCTfs5yvzBxmmaHHy5rIMPr46tNpn4TMe92GdpDXrnCvT1FSqJg7nyYDeul7UGG6XZwRh8sAdk%2BbdzISXZbGvfdzjAHtatWAVLReTNhw%2BYlCG4UjjE0j4tOg%2FpB6G4UIdsQ7RANmsFPJ9ILdud7IwrvKdzgY6pgGYRakJW7aaMB%2BCQhkIjQYF7XmJtin4ZVA3W04xSPNsH27qCUVHujrex8JCzw9ZDYLF2M25lk1a36sN%2FjOE1og9e70dNzHAPQouSf1fPQtjyi%2BWOhXzcOB6JQBdMFPmQgWTJ5dAdUlJzdCtVerT7%2FUPIDvvflrT2t4W%2FSJsAmBO%2F2Ll%2BTF8i%2FF5HDGqpoHIBHdHtzUtzxO0mLw7q4CgLtnr5%2BIxN%2F4n&X-Amz-Signature=9e501110753d2ec663bc0f029cf17a64208c9af209f0ae8c3cf48a46fd1af45b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQGSEEQM%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083857Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJGMEQCIDfghooZS%2FoWLECQcRyGn%2Bt5ib8Q1liSMewOOyVbsfVUAiAX2Ps2HMkyxgPI4b4n6kgMX%2Fgq9fhUAcbrysOTcCiTRCqIBAjw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMe0H%2BwlOPkV4lPHkgKtwD1FyNMDER8NhrPImrJwoTmZGx%2FAjoUCjE2%2B0jzHLg5a8iHZiA0ELsxg0t6jt07wAWGK2gOqUxgqnSdbujRM%2B%2F7dVkPRr2K3GJycou%2BCZI630R8PdA8a81G2Uo0cezjAueOhosU3CrWtX3QUKMc3ENuEz03RSYeCYTzwUDGRBw8gCH3ueZoF2ZYE0nz1x8zRsilm5mjsuMRPdiaHac34XSMyNKmxCqlen82GbUUN40jS5%2FJYr2pMCRWW108okaQ05sCKtHBaJ%2FRgi2W0Kd2rBbAzjhxQ1r%2Fkk%2BY9sPG1IcfnAmIID%2F0GePc4qMRJgNBFqo1X6ql9JATMub6GiLbTT6kDODY53vQckz7U%2BzlYncsTs2r%2F%2FviJ1P1fZ3%2B9OGl5jtNoqZCU8uTJ07Z2RawjcIoNDZJuD%2Fz1qV0lOislPuPWhLiTnOxcIUR88yxAi%2BDshoK31hqOpb%2FDVGNSWPT16KM8q3FXrWcIHmq5WeN%2B3TCTfs5yvzBxmmaHHy5rIMPr46tNpn4TMe92GdpDXrnCvT1FSqJg7nyYDeul7UGG6XZwRh8sAdk%2BbdzISXZbGvfdzjAHtatWAVLReTNhw%2BYlCG4UjjE0j4tOg%2FpB6G4UIdsQ7RANmsFPJ9ILdud7IwrvKdzgY6pgGYRakJW7aaMB%2BCQhkIjQYF7XmJtin4ZVA3W04xSPNsH27qCUVHujrex8JCzw9ZDYLF2M25lk1a36sN%2FjOE1og9e70dNzHAPQouSf1fPQtjyi%2BWOhXzcOB6JQBdMFPmQgWTJ5dAdUlJzdCtVerT7%2FUPIDvvflrT2t4W%2FSJsAmBO%2F2Ll%2BTF8i%2FF5HDGqpoHIBHdHtzUtzxO0mLw7q4CgLtnr5%2BIxN%2F4n&X-Amz-Signature=2ea4467d3095631420f95a3579358de33f88f2adb4e6a6b4f2d28a4fe38581b4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SQGSEEQM%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083857Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJGMEQCIDfghooZS%2FoWLECQcRyGn%2Bt5ib8Q1liSMewOOyVbsfVUAiAX2Ps2HMkyxgPI4b4n6kgMX%2Fgq9fhUAcbrysOTcCiTRCqIBAjw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMe0H%2BwlOPkV4lPHkgKtwD1FyNMDER8NhrPImrJwoTmZGx%2FAjoUCjE2%2B0jzHLg5a8iHZiA0ELsxg0t6jt07wAWGK2gOqUxgqnSdbujRM%2B%2F7dVkPRr2K3GJycou%2BCZI630R8PdA8a81G2Uo0cezjAueOhosU3CrWtX3QUKMc3ENuEz03RSYeCYTzwUDGRBw8gCH3ueZoF2ZYE0nz1x8zRsilm5mjsuMRPdiaHac34XSMyNKmxCqlen82GbUUN40jS5%2FJYr2pMCRWW108okaQ05sCKtHBaJ%2FRgi2W0Kd2rBbAzjhxQ1r%2Fkk%2BY9sPG1IcfnAmIID%2F0GePc4qMRJgNBFqo1X6ql9JATMub6GiLbTT6kDODY53vQckz7U%2BzlYncsTs2r%2F%2FviJ1P1fZ3%2B9OGl5jtNoqZCU8uTJ07Z2RawjcIoNDZJuD%2Fz1qV0lOislPuPWhLiTnOxcIUR88yxAi%2BDshoK31hqOpb%2FDVGNSWPT16KM8q3FXrWcIHmq5WeN%2B3TCTfs5yvzBxmmaHHy5rIMPr46tNpn4TMe92GdpDXrnCvT1FSqJg7nyYDeul7UGG6XZwRh8sAdk%2BbdzISXZbGvfdzjAHtatWAVLReTNhw%2BYlCG4UjjE0j4tOg%2FpB6G4UIdsQ7RANmsFPJ9ILdud7IwrvKdzgY6pgGYRakJW7aaMB%2BCQhkIjQYF7XmJtin4ZVA3W04xSPNsH27qCUVHujrex8JCzw9ZDYLF2M25lk1a36sN%2FjOE1og9e70dNzHAPQouSf1fPQtjyi%2BWOhXzcOB6JQBdMFPmQgWTJ5dAdUlJzdCtVerT7%2FUPIDvvflrT2t4W%2FSJsAmBO%2F2Ll%2BTF8i%2FF5HDGqpoHIBHdHtzUtzxO0mLw7q4CgLtnr5%2BIxN%2F4n&X-Amz-Signature=6c22d87fd6e1bea54c180270cea31e9988da2aa384fcba2e84377074fd733ce5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZKRHFOD%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083858Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJHMEUCIE%2FXVwJk18TWXbiZvg8moAjkpJHhlJOuasnboo4TgN5GAiEAqbNftFpEhhTD3174guNOr1gOtCjpGgNBqSgpyogHJV4qiAQI8P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIZlhbvu2qypHTWYYCrcA8ThfziWdMeSMZcmT5gG9Ne0P0aj0bgmZ3WyJ8Ps7%2F4xZsA5Jz7%2BC1GDgpYQ%2BemklP%2FTsIHxoi6UFlLg1fe0d5dtSfrem0SKDOW39IhRVl119QO92ODr%2B7ojdoNGBl8tv8nkgVnZThIb9M1hbfR5ZAKKFkH1nglf6fqx6o6CbdbkSAzaWBzKqbjAPQQIaliBdmMVY6KnRhauczwLdn40PLyxjaVF2vz%2Fl4aAdh022x%2BP9GMV6hLBwnwENqKxxYsSGFd1q%2FiQ%2FfZU8RDtWrO8%2F%2BpWo7Daf72rDoPXmxyI7BItD48vkwGvQEpf6ftSZ81%2FDiNda8amzDyVBpuhwUyaBEAD5gYp6XFK0Q1XPyA6lufoYKbto8rTwKQzzwTe%2FYx79nIke8JObMO%2BXpURZ%2Bia4pzOq8JVMUyNN2xQ1v6uql%2Fh4hT4uJ4JsOLgy%2BmfaekuGaBsWrC37%2F%2BI97yTxZnKoyDYRy3lv9UGqnT570P%2BriERka4MeYTQSnB1TQqLtNb9QrqmlCUUgXnx7rNuAlwHTtlocAXKv2k1vyu%2F5i7KOR8ZKf0v1IwQ%2Bk4yJE4CQX4JARmRLhsCjMS7cj1ruHO8RJi3iqadOfMG%2Bo5gFB4l8nHyv3H2wly59cyZ%2FS%2BKMPTxnc4GOqUBt6ZHcajWIyETDDp4pJ8eARcx%2Bi24%2F7iAkR1s%2BkE%2BnstHIRrvdZvZXSMTOz9JJTlUzdjr9AS7fBQRgy0HVF%2BL%2B7ACcNnFJXBvWy4TULWO1H3JZkUijlRQn4kXGLRMcKMTslc6dZw8xxiD36YTAH1g3sQt4fgJMRGijT0xo%2FtQGoGNd%2Fo1rLr7tqaIc%2FyPnS3gKfhZw3LyrtSGWtllEvYzDUFjs61G&X-Amz-Signature=af08bd960d09941520fd5aefd4c30c6691b4e40e5587ed7f766d735fae13fe13&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZKRHFOD%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083858Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJHMEUCIE%2FXVwJk18TWXbiZvg8moAjkpJHhlJOuasnboo4TgN5GAiEAqbNftFpEhhTD3174guNOr1gOtCjpGgNBqSgpyogHJV4qiAQI8P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIZlhbvu2qypHTWYYCrcA8ThfziWdMeSMZcmT5gG9Ne0P0aj0bgmZ3WyJ8Ps7%2F4xZsA5Jz7%2BC1GDgpYQ%2BemklP%2FTsIHxoi6UFlLg1fe0d5dtSfrem0SKDOW39IhRVl119QO92ODr%2B7ojdoNGBl8tv8nkgVnZThIb9M1hbfR5ZAKKFkH1nglf6fqx6o6CbdbkSAzaWBzKqbjAPQQIaliBdmMVY6KnRhauczwLdn40PLyxjaVF2vz%2Fl4aAdh022x%2BP9GMV6hLBwnwENqKxxYsSGFd1q%2FiQ%2FfZU8RDtWrO8%2F%2BpWo7Daf72rDoPXmxyI7BItD48vkwGvQEpf6ftSZ81%2FDiNda8amzDyVBpuhwUyaBEAD5gYp6XFK0Q1XPyA6lufoYKbto8rTwKQzzwTe%2FYx79nIke8JObMO%2BXpURZ%2Bia4pzOq8JVMUyNN2xQ1v6uql%2Fh4hT4uJ4JsOLgy%2BmfaekuGaBsWrC37%2F%2BI97yTxZnKoyDYRy3lv9UGqnT570P%2BriERka4MeYTQSnB1TQqLtNb9QrqmlCUUgXnx7rNuAlwHTtlocAXKv2k1vyu%2F5i7KOR8ZKf0v1IwQ%2Bk4yJE4CQX4JARmRLhsCjMS7cj1ruHO8RJi3iqadOfMG%2Bo5gFB4l8nHyv3H2wly59cyZ%2FS%2BKMPTxnc4GOqUBt6ZHcajWIyETDDp4pJ8eARcx%2Bi24%2F7iAkR1s%2BkE%2BnstHIRrvdZvZXSMTOz9JJTlUzdjr9AS7fBQRgy0HVF%2BL%2B7ACcNnFJXBvWy4TULWO1H3JZkUijlRQn4kXGLRMcKMTslc6dZw8xxiD36YTAH1g3sQt4fgJMRGijT0xo%2FtQGoGNd%2Fo1rLr7tqaIc%2FyPnS3gKfhZw3LyrtSGWtllEvYzDUFjs61G&X-Amz-Signature=9621ec56f87bd13f4f6e670e383cb640aa3b51706efd28143a65a3593deff2ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZKRHFOD%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083858Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJHMEUCIE%2FXVwJk18TWXbiZvg8moAjkpJHhlJOuasnboo4TgN5GAiEAqbNftFpEhhTD3174guNOr1gOtCjpGgNBqSgpyogHJV4qiAQI8P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIZlhbvu2qypHTWYYCrcA8ThfziWdMeSMZcmT5gG9Ne0P0aj0bgmZ3WyJ8Ps7%2F4xZsA5Jz7%2BC1GDgpYQ%2BemklP%2FTsIHxoi6UFlLg1fe0d5dtSfrem0SKDOW39IhRVl119QO92ODr%2B7ojdoNGBl8tv8nkgVnZThIb9M1hbfR5ZAKKFkH1nglf6fqx6o6CbdbkSAzaWBzKqbjAPQQIaliBdmMVY6KnRhauczwLdn40PLyxjaVF2vz%2Fl4aAdh022x%2BP9GMV6hLBwnwENqKxxYsSGFd1q%2FiQ%2FfZU8RDtWrO8%2F%2BpWo7Daf72rDoPXmxyI7BItD48vkwGvQEpf6ftSZ81%2FDiNda8amzDyVBpuhwUyaBEAD5gYp6XFK0Q1XPyA6lufoYKbto8rTwKQzzwTe%2FYx79nIke8JObMO%2BXpURZ%2Bia4pzOq8JVMUyNN2xQ1v6uql%2Fh4hT4uJ4JsOLgy%2BmfaekuGaBsWrC37%2F%2BI97yTxZnKoyDYRy3lv9UGqnT570P%2BriERka4MeYTQSnB1TQqLtNb9QrqmlCUUgXnx7rNuAlwHTtlocAXKv2k1vyu%2F5i7KOR8ZKf0v1IwQ%2Bk4yJE4CQX4JARmRLhsCjMS7cj1ruHO8RJi3iqadOfMG%2Bo5gFB4l8nHyv3H2wly59cyZ%2FS%2BKMPTxnc4GOqUBt6ZHcajWIyETDDp4pJ8eARcx%2Bi24%2F7iAkR1s%2BkE%2BnstHIRrvdZvZXSMTOz9JJTlUzdjr9AS7fBQRgy0HVF%2BL%2B7ACcNnFJXBvWy4TULWO1H3JZkUijlRQn4kXGLRMcKMTslc6dZw8xxiD36YTAH1g3sQt4fgJMRGijT0xo%2FtQGoGNd%2Fo1rLr7tqaIc%2FyPnS3gKfhZw3LyrtSGWtllEvYzDUFjs61G&X-Amz-Signature=c9d5e2198e631474486540e640cb73c9559e8f69b425cf941ef24909d236312a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZZKRHFOD%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083858Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECcaCXVzLXdlc3QtMiJHMEUCIE%2FXVwJk18TWXbiZvg8moAjkpJHhlJOuasnboo4TgN5GAiEAqbNftFpEhhTD3174guNOr1gOtCjpGgNBqSgpyogHJV4qiAQI8P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIZlhbvu2qypHTWYYCrcA8ThfziWdMeSMZcmT5gG9Ne0P0aj0bgmZ3WyJ8Ps7%2F4xZsA5Jz7%2BC1GDgpYQ%2BemklP%2FTsIHxoi6UFlLg1fe0d5dtSfrem0SKDOW39IhRVl119QO92ODr%2B7ojdoNGBl8tv8nkgVnZThIb9M1hbfR5ZAKKFkH1nglf6fqx6o6CbdbkSAzaWBzKqbjAPQQIaliBdmMVY6KnRhauczwLdn40PLyxjaVF2vz%2Fl4aAdh022x%2BP9GMV6hLBwnwENqKxxYsSGFd1q%2FiQ%2FfZU8RDtWrO8%2F%2BpWo7Daf72rDoPXmxyI7BItD48vkwGvQEpf6ftSZ81%2FDiNda8amzDyVBpuhwUyaBEAD5gYp6XFK0Q1XPyA6lufoYKbto8rTwKQzzwTe%2FYx79nIke8JObMO%2BXpURZ%2Bia4pzOq8JVMUyNN2xQ1v6uql%2Fh4hT4uJ4JsOLgy%2BmfaekuGaBsWrC37%2F%2BI97yTxZnKoyDYRy3lv9UGqnT570P%2BriERka4MeYTQSnB1TQqLtNb9QrqmlCUUgXnx7rNuAlwHTtlocAXKv2k1vyu%2F5i7KOR8ZKf0v1IwQ%2Bk4yJE4CQX4JARmRLhsCjMS7cj1ruHO8RJi3iqadOfMG%2Bo5gFB4l8nHyv3H2wly59cyZ%2FS%2BKMPTxnc4GOqUBt6ZHcajWIyETDDp4pJ8eARcx%2Bi24%2F7iAkR1s%2BkE%2BnstHIRrvdZvZXSMTOz9JJTlUzdjr9AS7fBQRgy0HVF%2BL%2B7ACcNnFJXBvWy4TULWO1H3JZkUijlRQn4kXGLRMcKMTslc6dZw8xxiD36YTAH1g3sQt4fgJMRGijT0xo%2FtQGoGNd%2Fo1rLr7tqaIc%2FyPnS3gKfhZw3LyrtSGWtllEvYzDUFjs61G&X-Amz-Signature=bfb39addf00b685242da6df689780ad2f7d724ab82739dee646597b29f02ab41&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664JWYOPHR%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083859Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJHMEUCIQCwVgxwZcp4Pd3Uzjm0%2B5dmkXoaxgXhanSsAkp%2BL6oExQIgAoncRK%2FM985DESwPnnsI6te6BTHFlZ0xaxID7Yh%2FP6wqiAQI8P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEmKUUUoZFLWIXY3SCrcA8jZUWtSOvMVJ99Pk%2FafljaE%2FAz0bEi84l27ojqbCH6GGT6ZgHggopOcttPATsbTf7TWj3x9k9GeJyWNbNT%2B4RGtGLUdYs2ia5Kg750qusnICU0g1cYCTUQc8IDMXs8JR%2F7B683nh%2Fyu7szeug32YdmS6xrP8laMW3vPZ8gdrCSYyiWfV%2FNmBSfA%2BexiXl7WKxiMyFHW9ESLgelPBCVAO27mFptUd95SmkoAlXTqJJARe0EcYr3jf1CW0mhaN10jiq%2Bj%2B9cE4VdWoPfgWkmnm9atUup9tb9Z0gnjr0ERw014bLetwlpUaLXypQ0Z3%2FjqW7pMVf3kUmMEdK2g9v0mJ3n6xVl%2FW3sjoXajpX4cpRFcdwCGoQQZuq8ahE8fkgQ9y0lwCDtnD4YkKMh2zsU6rjAngMMuAir2Lh%2Bs0ktwKFtCxHsL083QSAtUFJe9JFejwhiGdxZftDweU5eFaAsmJcbQPGAnjKIs%2B9CUa7xezXMJhL0b%2F9QJGGiwKqkuH9TNIHr%2Fz0PzP9PQ7Y0qHsQAyq5Akq%2BJHZzU64HyaQ8gmLxD0I1NuwvXxtjS%2BW4TFJSWZlA2yXAYu4sNoiciV5OTRXBysD9AReTamN7JQmlyrKwDXl3%2B6vprxpursIQEMN6Bns4GOqUBo9fq8Y%2FTQAeR9ReoBBGV4DD%2FyoPRM4p6c6WSaRrd%2BxvxhpRLKDxDYEgz51CgXdzrmV34zsC1gv0chDMkGyrtWYN%2FwpqHG3QI6XYGyoY8zrPdUOHDL3TRsKjhrIWr4VeiH%2Fg3UtM4T5kCiiIuTZ21ZzBDvns5kDny39JElcd%2Bs3mOeXKJHzIm1Zvwq7sUu2e9PyMWRNHLLzvQLPCNuD8E2tVNPfEt&X-Amz-Signature=0db8cf28f90222162c7d1cf9d736da85bf780b6cc95c7e6cf4dd1ae9794d1357&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666HVWCGND%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083900Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDURbZ%2FJnA9k4rASdHIrKGc%2B%2FY9utapAdB9Bs3pMiWn1gIhAK%2BHpHtjuhnQUe6Ie%2BpLhxBMptBgMfscAzU2wIm6l090KogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyEkil7h6LjUFgE4jsq3AMln9yAh80sRGCfTnq9e9vJZJlzWOVCiDhy6fK%2Bsi3UuhozU0nk13hqGQOIF1XATBDo9xtySjdCuxQBsVjYIiY9Lqj7LXcdSIVuIunkEPj%2BA%2FqoRMpT6yfqfJjdUMOA0Zhyr2AaSNQLt9gh29z4PCIZaGS2YyLZnfx%2FADQ3I7zvIUH%2Fp47akaCDEmeVZ3utiSpB8ydmxkRwH9svVkwJ5KNaHyBtX1J7c8vJUm1SqSky5g86%2FvQoeVlhhJKFdRVvjv8Icm5v5BjeSu1AyVCjb%2BqD4pSyBAk%2FNTIc2YaDqRXFzLlawvs%2FGZ357GtM7BJDcAdMwWwjOVGGORJcNub%2F2PnGRvM7jamyQpJNLRBoDlYt0AR9uMRwebBnUfe0SVAlNTtbTvpK3j2aGlM7cfZXaPieBI6aocGTI%2BlWB%2FPIJDPzT0KxbOjTq7fBDNcroNkgmj9Tc75Irx6lQI5gG4Q7I%2BpMsQQky%2Bi1DP5oJfqKLbddfOVhPfdKYsTcr7HBo0Dr0Phqv8EUwqbpGuun6CIhRKQ3JoTN4zEJTG2YRqkXHgYIV58k2%2FbxX8d7Hxb59O2i1tNCOEK5PqeebIRfxfWRaRTqtzT0JIglCBQW2E3hElxGKxHULDpaVTulDB7SJDCQi57OBjqkAfkJ9dx%2FE8X89hGeheVJ1XMKIfmLB86njzhAJbhc%2BmxII3qkOQH0kLokM%2Bueszv1tVatsKAwOJAD9PBjNIBipeuFkj%2F8UGOEg%2B0UIo%2FE5R3DJrw0aA7Hrgd3plynwKZz6EshloidPzLlmF1j%2FoBLMnERCiSWPE%2FLnOF6KsTxulgNl1in8cqjsZzXH%2FGysFQ08N22LnazExMwtRBmu%2BVujypxerUu&X-Amz-Signature=f5552ecc4fa4ea7b537bc565daf031fb0f2a41102232b97a17b434c7220af582&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666HVWCGND%2F20260328%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260328T083900Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjECgaCXVzLXdlc3QtMiJIMEYCIQDURbZ%2FJnA9k4rASdHIrKGc%2B%2FY9utapAdB9Bs3pMiWn1gIhAK%2BHpHtjuhnQUe6Ie%2BpLhxBMptBgMfscAzU2wIm6l090KogECPH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyEkil7h6LjUFgE4jsq3AMln9yAh80sRGCfTnq9e9vJZJlzWOVCiDhy6fK%2Bsi3UuhozU0nk13hqGQOIF1XATBDo9xtySjdCuxQBsVjYIiY9Lqj7LXcdSIVuIunkEPj%2BA%2FqoRMpT6yfqfJjdUMOA0Zhyr2AaSNQLt9gh29z4PCIZaGS2YyLZnfx%2FADQ3I7zvIUH%2Fp47akaCDEmeVZ3utiSpB8ydmxkRwH9svVkwJ5KNaHyBtX1J7c8vJUm1SqSky5g86%2FvQoeVlhhJKFdRVvjv8Icm5v5BjeSu1AyVCjb%2BqD4pSyBAk%2FNTIc2YaDqRXFzLlawvs%2FGZ357GtM7BJDcAdMwWwjOVGGORJcNub%2F2PnGRvM7jamyQpJNLRBoDlYt0AR9uMRwebBnUfe0SVAlNTtbTvpK3j2aGlM7cfZXaPieBI6aocGTI%2BlWB%2FPIJDPzT0KxbOjTq7fBDNcroNkgmj9Tc75Irx6lQI5gG4Q7I%2BpMsQQky%2Bi1DP5oJfqKLbddfOVhPfdKYsTcr7HBo0Dr0Phqv8EUwqbpGuun6CIhRKQ3JoTN4zEJTG2YRqkXHgYIV58k2%2FbxX8d7Hxb59O2i1tNCOEK5PqeebIRfxfWRaRTqtzT0JIglCBQW2E3hElxGKxHULDpaVTulDB7SJDCQi57OBjqkAfkJ9dx%2FE8X89hGeheVJ1XMKIfmLB86njzhAJbhc%2BmxII3qkOQH0kLokM%2Bueszv1tVatsKAwOJAD9PBjNIBipeuFkj%2F8UGOEg%2B0UIo%2FE5R3DJrw0aA7Hrgd3plynwKZz6EshloidPzLlmF1j%2FoBLMnERCiSWPE%2FLnOF6KsTxulgNl1in8cqjsZzXH%2FGysFQ08N22LnazExMwtRBmu%2BVujypxerUu&X-Amz-Signature=3d7ee8a5243ed2d4f86bf961c5ff4675f7c0ff628a36f8bf74a3b0bd039b75c9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
