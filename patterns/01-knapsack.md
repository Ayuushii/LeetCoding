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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664P2ZTWCX%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDRdLpMJAbiRNhwAGr7SSP7pkUkZXbPSHYVqxsN4BYUQgIgZqhhxjqMU1jZygLMGnopw2ZdGRAw7XDfOakIw8Px2EkqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBbDixSlS%2BnQ7N7AqircA8avpg1V1AC3T3yerWzlRvnmd1NOWHgrW6r2ww22yV4uEMY2MEb26Hgqp%2Fcdx6zTQKBmqY5BzDzfuTyf95DDR%2FdrDndGgw2xh1TR0cVORPyzh4icPqEKMP3fZsU%2FwKQTsT28rbMWhZrXt1tdzatfFE77nmv6Ghp%2FjXcQSRB3wIdKdm04Qq0pTlnkRcYX02vPvPzl043sq1HQ8JXtqcs%2FOlTGe56uxVL0WSkkrM8uTiFYTAzabcHgSUB4WTFPKEo0UuAdkweGSoGKgIG89qk1agxnq9im9UqRDUzeL41IUaPLoO1jBW%2FfQIt9Qy035W3lBHHm%2B8deomz4QihFjSgxRWgDDvCfJCYwfrXcxUeZPkf%2BJJxs%2F%2FtY3s60p8TQJDbajMWsKSefhYaq6ee0JT4BZr1RsKoSMYJE1OZu4nuCWW0zuTbGxTTLNRKFsPnQtdAGxy%2FwQgoJuwcyw%2BgNTlBLreJE7lYE4iV5a2JaB0AieENXhXb4mfM3EF8MoqMz7uoNKfsmicwYlKfowGj8uAAYy6gF7CYRSeveB5qB8%2FLIMRfxOEMYAXSezjPsocvPd6D9blY%2FadgnTilK5qUclrWzW0Ll1Qlfvs%2Ff5qUKEhmmC2XN3wiqRBnAOAWNYPCHMJj039QGOqUBnvMxg4lNrbWcsZJ9V2O6OlUOy5ddrSWCARxjEQ2SrW8%2BIl01IeJ46pRB%2FNozWNfhwZ%2Fe0D9SilWetqeiutkyRndorHQyCp8dJEgnWHLUsrWMgphEyQGG%2FYMOG%2B6clNk9%2BlVU7mgStiZfrlbV%2BcS8YL4%2FAEfwkFeFgzqljcqLZobfkSFK03qhVy2kqyqVfeA4xuZytmOT6SbS6lQGueuyWeckFZRG&X-Amz-Signature=0dbc8bb5263851186304de65b75b02cecfdc2def934d8741a6c681ad5af234de&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664P2ZTWCX%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDRdLpMJAbiRNhwAGr7SSP7pkUkZXbPSHYVqxsN4BYUQgIgZqhhxjqMU1jZygLMGnopw2ZdGRAw7XDfOakIw8Px2EkqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBbDixSlS%2BnQ7N7AqircA8avpg1V1AC3T3yerWzlRvnmd1NOWHgrW6r2ww22yV4uEMY2MEb26Hgqp%2Fcdx6zTQKBmqY5BzDzfuTyf95DDR%2FdrDndGgw2xh1TR0cVORPyzh4icPqEKMP3fZsU%2FwKQTsT28rbMWhZrXt1tdzatfFE77nmv6Ghp%2FjXcQSRB3wIdKdm04Qq0pTlnkRcYX02vPvPzl043sq1HQ8JXtqcs%2FOlTGe56uxVL0WSkkrM8uTiFYTAzabcHgSUB4WTFPKEo0UuAdkweGSoGKgIG89qk1agxnq9im9UqRDUzeL41IUaPLoO1jBW%2FfQIt9Qy035W3lBHHm%2B8deomz4QihFjSgxRWgDDvCfJCYwfrXcxUeZPkf%2BJJxs%2F%2FtY3s60p8TQJDbajMWsKSefhYaq6ee0JT4BZr1RsKoSMYJE1OZu4nuCWW0zuTbGxTTLNRKFsPnQtdAGxy%2FwQgoJuwcyw%2BgNTlBLreJE7lYE4iV5a2JaB0AieENXhXb4mfM3EF8MoqMz7uoNKfsmicwYlKfowGj8uAAYy6gF7CYRSeveB5qB8%2FLIMRfxOEMYAXSezjPsocvPd6D9blY%2FadgnTilK5qUclrWzW0Ll1Qlfvs%2Ff5qUKEhmmC2XN3wiqRBnAOAWNYPCHMJj039QGOqUBnvMxg4lNrbWcsZJ9V2O6OlUOy5ddrSWCARxjEQ2SrW8%2BIl01IeJ46pRB%2FNozWNfhwZ%2Fe0D9SilWetqeiutkyRndorHQyCp8dJEgnWHLUsrWMgphEyQGG%2FYMOG%2B6clNk9%2BlVU7mgStiZfrlbV%2BcS8YL4%2FAEfwkFeFgzqljcqLZobfkSFK03qhVy2kqyqVfeA4xuZytmOT6SbS6lQGueuyWeckFZRG&X-Amz-Signature=d8898d70764b2825c4ab2963066b2da617b5bd1cfc58cccba45495abd2745d66&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664P2ZTWCX%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQDRdLpMJAbiRNhwAGr7SSP7pkUkZXbPSHYVqxsN4BYUQgIgZqhhxjqMU1jZygLMGnopw2ZdGRAw7XDfOakIw8Px2EkqiAQIxP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBbDixSlS%2BnQ7N7AqircA8avpg1V1AC3T3yerWzlRvnmd1NOWHgrW6r2ww22yV4uEMY2MEb26Hgqp%2Fcdx6zTQKBmqY5BzDzfuTyf95DDR%2FdrDndGgw2xh1TR0cVORPyzh4icPqEKMP3fZsU%2FwKQTsT28rbMWhZrXt1tdzatfFE77nmv6Ghp%2FjXcQSRB3wIdKdm04Qq0pTlnkRcYX02vPvPzl043sq1HQ8JXtqcs%2FOlTGe56uxVL0WSkkrM8uTiFYTAzabcHgSUB4WTFPKEo0UuAdkweGSoGKgIG89qk1agxnq9im9UqRDUzeL41IUaPLoO1jBW%2FfQIt9Qy035W3lBHHm%2B8deomz4QihFjSgxRWgDDvCfJCYwfrXcxUeZPkf%2BJJxs%2F%2FtY3s60p8TQJDbajMWsKSefhYaq6ee0JT4BZr1RsKoSMYJE1OZu4nuCWW0zuTbGxTTLNRKFsPnQtdAGxy%2FwQgoJuwcyw%2BgNTlBLreJE7lYE4iV5a2JaB0AieENXhXb4mfM3EF8MoqMz7uoNKfsmicwYlKfowGj8uAAYy6gF7CYRSeveB5qB8%2FLIMRfxOEMYAXSezjPsocvPd6D9blY%2FadgnTilK5qUclrWzW0Ll1Qlfvs%2Ff5qUKEhmmC2XN3wiqRBnAOAWNYPCHMJj039QGOqUBnvMxg4lNrbWcsZJ9V2O6OlUOy5ddrSWCARxjEQ2SrW8%2BIl01IeJ46pRB%2FNozWNfhwZ%2Fe0D9SilWetqeiutkyRndorHQyCp8dJEgnWHLUsrWMgphEyQGG%2FYMOG%2B6clNk9%2BlVU7mgStiZfrlbV%2BcS8YL4%2FAEfwkFeFgzqljcqLZobfkSFK03qhVy2kqyqVfeA4xuZytmOT6SbS6lQGueuyWeckFZRG&X-Amz-Signature=96a4a9e82094806359a19d0aee22552427d96640bb71f7b0887d2a4725933414&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663K2SXPNK%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCSpIQgwF2xOf11RfBr4IrxTBxFOSCLlerRQ8K8zVGdOQIhAL8NUi7CuvUM24Fr2iZNNyzVmIQQP0XASvX7nLccCCj7KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwNDCbu3pTowLE1zSIq3AMun4BavkAt0ENL3s2A%2BYHY4Yo%2B8HtHSO6O9%2BZDFCvYCPJcl5iq5c28uJaFmVNAEScdngprrE%2BnM7sySUcU11n235ftNzA0k0LoBm6Ji9AcW4DtuIuD1CO%2FhKW3uaAjZ%2Fj%2F%2BGp6R4UCjp8rm9p3iZ7ZrgYls1pgZ%2FPNyUsNAHO3xDLCWF1tzkGAQ8BgEbjF4nHAPDLZywpakvKZob3x8nOp0lYY%2FvIOj0UFb1BxuDgy9%2BzxVxbDjp9470IZU4LoyHqLiKCBFqXeyW%2Bkfr8zJhxSdMuuilIVMQaoau9Dc6lLu0QaI7KRrYg2uajAdVpWhbF%2FiizWfUOaePHwiQNNmhZ1Scn%2BXLdm6Kbvx2GUV0Otdhp77HrwkDOIUe%2FH9gE%2FPjF5wDh0VRvY%2F0lwJulraZKuLujjwONnURujj%2B%2FOqZlnasPD5vuB2M6PmjBtHvDQqDtIJhWOg6I%2Fm4kX3DSXMLtJJFFybztunqzrNSKL1l0z%2BLJWqjply8bqJIGwMDnLpm%2FamtVDW%2Fy51w4FfV%2FB7lV5kQHLRK6jE5FQ08XIsPh1zmWEeuqNwhGEGAmHl8w2WmlZ4MkH04mwdCBgovQdU1oLkJ%2BUD1U6dwCAkklQXFkOYiU2%2FKoJ56qeZfe9hzCY8t%2FUBjqkAclvwDLzxJ5y%2F3tVMhYP%2ByUKIcRqlp1mkJn4lmUySBc31XSpn%2B7Lx25e8qqTvMCmyIARI08OmZ6%2F%2FyMNC8ASUYrkYpM6n0uUYsJjwr127ZziUaox8LCbA2fgW8KdAqlnZyRCNNMb0rLBl34OG1PObJHSP%2B6H70RZWZjK0Glwb4k6nSY0j8cJeyqhPB3rSPxv6%2B6hDDrxqiByhYmKP%2BknIgwFJYj9&X-Amz-Signature=a927e2fc63b369818ad90e0488940b0116690969e18bfcb1ebcf3a53e8c26e23&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663K2SXPNK%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCSpIQgwF2xOf11RfBr4IrxTBxFOSCLlerRQ8K8zVGdOQIhAL8NUi7CuvUM24Fr2iZNNyzVmIQQP0XASvX7nLccCCj7KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwNDCbu3pTowLE1zSIq3AMun4BavkAt0ENL3s2A%2BYHY4Yo%2B8HtHSO6O9%2BZDFCvYCPJcl5iq5c28uJaFmVNAEScdngprrE%2BnM7sySUcU11n235ftNzA0k0LoBm6Ji9AcW4DtuIuD1CO%2FhKW3uaAjZ%2Fj%2F%2BGp6R4UCjp8rm9p3iZ7ZrgYls1pgZ%2FPNyUsNAHO3xDLCWF1tzkGAQ8BgEbjF4nHAPDLZywpakvKZob3x8nOp0lYY%2FvIOj0UFb1BxuDgy9%2BzxVxbDjp9470IZU4LoyHqLiKCBFqXeyW%2Bkfr8zJhxSdMuuilIVMQaoau9Dc6lLu0QaI7KRrYg2uajAdVpWhbF%2FiizWfUOaePHwiQNNmhZ1Scn%2BXLdm6Kbvx2GUV0Otdhp77HrwkDOIUe%2FH9gE%2FPjF5wDh0VRvY%2F0lwJulraZKuLujjwONnURujj%2B%2FOqZlnasPD5vuB2M6PmjBtHvDQqDtIJhWOg6I%2Fm4kX3DSXMLtJJFFybztunqzrNSKL1l0z%2BLJWqjply8bqJIGwMDnLpm%2FamtVDW%2Fy51w4FfV%2FB7lV5kQHLRK6jE5FQ08XIsPh1zmWEeuqNwhGEGAmHl8w2WmlZ4MkH04mwdCBgovQdU1oLkJ%2BUD1U6dwCAkklQXFkOYiU2%2FKoJ56qeZfe9hzCY8t%2FUBjqkAclvwDLzxJ5y%2F3tVMhYP%2ByUKIcRqlp1mkJn4lmUySBc31XSpn%2B7Lx25e8qqTvMCmyIARI08OmZ6%2F%2FyMNC8ASUYrkYpM6n0uUYsJjwr127ZziUaox8LCbA2fgW8KdAqlnZyRCNNMb0rLBl34OG1PObJHSP%2B6H70RZWZjK0Glwb4k6nSY0j8cJeyqhPB3rSPxv6%2B6hDDrxqiByhYmKP%2BknIgwFJYj9&X-Amz-Signature=a5d1740ad6e2f60d7ce1ac6c3fb683ec07647363700252772028392ff3718403&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663K2SXPNK%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCSpIQgwF2xOf11RfBr4IrxTBxFOSCLlerRQ8K8zVGdOQIhAL8NUi7CuvUM24Fr2iZNNyzVmIQQP0XASvX7nLccCCj7KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwNDCbu3pTowLE1zSIq3AMun4BavkAt0ENL3s2A%2BYHY4Yo%2B8HtHSO6O9%2BZDFCvYCPJcl5iq5c28uJaFmVNAEScdngprrE%2BnM7sySUcU11n235ftNzA0k0LoBm6Ji9AcW4DtuIuD1CO%2FhKW3uaAjZ%2Fj%2F%2BGp6R4UCjp8rm9p3iZ7ZrgYls1pgZ%2FPNyUsNAHO3xDLCWF1tzkGAQ8BgEbjF4nHAPDLZywpakvKZob3x8nOp0lYY%2FvIOj0UFb1BxuDgy9%2BzxVxbDjp9470IZU4LoyHqLiKCBFqXeyW%2Bkfr8zJhxSdMuuilIVMQaoau9Dc6lLu0QaI7KRrYg2uajAdVpWhbF%2FiizWfUOaePHwiQNNmhZ1Scn%2BXLdm6Kbvx2GUV0Otdhp77HrwkDOIUe%2FH9gE%2FPjF5wDh0VRvY%2F0lwJulraZKuLujjwONnURujj%2B%2FOqZlnasPD5vuB2M6PmjBtHvDQqDtIJhWOg6I%2Fm4kX3DSXMLtJJFFybztunqzrNSKL1l0z%2BLJWqjply8bqJIGwMDnLpm%2FamtVDW%2Fy51w4FfV%2FB7lV5kQHLRK6jE5FQ08XIsPh1zmWEeuqNwhGEGAmHl8w2WmlZ4MkH04mwdCBgovQdU1oLkJ%2BUD1U6dwCAkklQXFkOYiU2%2FKoJ56qeZfe9hzCY8t%2FUBjqkAclvwDLzxJ5y%2F3tVMhYP%2ByUKIcRqlp1mkJn4lmUySBc31XSpn%2B7Lx25e8qqTvMCmyIARI08OmZ6%2F%2FyMNC8ASUYrkYpM6n0uUYsJjwr127ZziUaox8LCbA2fgW8KdAqlnZyRCNNMb0rLBl34OG1PObJHSP%2B6H70RZWZjK0Glwb4k6nSY0j8cJeyqhPB3rSPxv6%2B6hDDrxqiByhYmKP%2BknIgwFJYj9&X-Amz-Signature=72f5f7cdce131fbeb0c8b54fc8c2669c3172181029830b266ccc59874295d9f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663K2SXPNK%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCSpIQgwF2xOf11RfBr4IrxTBxFOSCLlerRQ8K8zVGdOQIhAL8NUi7CuvUM24Fr2iZNNyzVmIQQP0XASvX7nLccCCj7KogECMT%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgwNDCbu3pTowLE1zSIq3AMun4BavkAt0ENL3s2A%2BYHY4Yo%2B8HtHSO6O9%2BZDFCvYCPJcl5iq5c28uJaFmVNAEScdngprrE%2BnM7sySUcU11n235ftNzA0k0LoBm6Ji9AcW4DtuIuD1CO%2FhKW3uaAjZ%2Fj%2F%2BGp6R4UCjp8rm9p3iZ7ZrgYls1pgZ%2FPNyUsNAHO3xDLCWF1tzkGAQ8BgEbjF4nHAPDLZywpakvKZob3x8nOp0lYY%2FvIOj0UFb1BxuDgy9%2BzxVxbDjp9470IZU4LoyHqLiKCBFqXeyW%2Bkfr8zJhxSdMuuilIVMQaoau9Dc6lLu0QaI7KRrYg2uajAdVpWhbF%2FiizWfUOaePHwiQNNmhZ1Scn%2BXLdm6Kbvx2GUV0Otdhp77HrwkDOIUe%2FH9gE%2FPjF5wDh0VRvY%2F0lwJulraZKuLujjwONnURujj%2B%2FOqZlnasPD5vuB2M6PmjBtHvDQqDtIJhWOg6I%2Fm4kX3DSXMLtJJFFybztunqzrNSKL1l0z%2BLJWqjply8bqJIGwMDnLpm%2FamtVDW%2Fy51w4FfV%2FB7lV5kQHLRK6jE5FQ08XIsPh1zmWEeuqNwhGEGAmHl8w2WmlZ4MkH04mwdCBgovQdU1oLkJ%2BUD1U6dwCAkklQXFkOYiU2%2FKoJ56qeZfe9hzCY8t%2FUBjqkAclvwDLzxJ5y%2F3tVMhYP%2ByUKIcRqlp1mkJn4lmUySBc31XSpn%2B7Lx25e8qqTvMCmyIARI08OmZ6%2F%2FyMNC8ASUYrkYpM6n0uUYsJjwr127ZziUaox8LCbA2fgW8KdAqlnZyRCNNMb0rLBl34OG1PObJHSP%2B6H70RZWZjK0Glwb4k6nSY0j8cJeyqhPB3rSPxv6%2B6hDDrxqiByhYmKP%2BknIgwFJYj9&X-Amz-Signature=c2e2e05ef0dd96942f04d11ae1a8567e3e76d899e2f68bb0fc94daa3d659d971&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WVRH3VEZ%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123356Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDAkQnpM3O5TGjaLmDkb9wHFiRj8ojkhtojHXrucN6gJAiEA9UbEfr3bSxDJGK8EgKFEE4FWOL14XH7EAdDZncUTVsUqiAQIw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDA19u7B61V7MDTr0NCrcA4rcSHZGY3F6mwQFDFDlxOP7OWpPLNPekqqsb%2Br9p1vtb7nW6LrkgldIfGslIuQ3TZGLrtmtJ%2B00KvTOsLAXqgJAcGL61GbAqIQb0MRZAhvbKF5%2Bj9%2FCCDWtFF11LKvGJlNmb4Sk8vKRP3O%2BYK50v%2BjnQc4gW1RPMg0VV2d3eboiCfaaL95tGth3tnveUF39jUjhdjdrA0ahejjChnEfFyhEPTqkgZxv%2BX8Z7BnYxSzUwbhaoE45TAOB5yrlT2eJP3Tea%2F%2B4P%2FscLDCGFa9P4LUf66Ioi0xpXe%2FnHESnLoEZ1qZYJcVAHKDLcDSdMmJJMgUeSEmxEV1Xm1O%2B2NHOY%2FwGjLQoE%2BTQKnVhgbmIxYnMKDYhuTUdiFUaroWe%2FBUCihJIRQlALj16pECt0AVjmLRjJfhLTOH6FY6n6e8Y6LIp5xoJIb7rXjvV0LA2iqRHwRR22ZpwgZdZv9urRN%2F8Jl2I44AQ5nJ2pZJgQZfVrKwyj9AVUiN%2BSkJ%2F3Ven2OzXJW7DnWE1I0tcKAafjBGbPf6aiW6cW5MCnC%2FT59D7Az98uvuJMPOsrZ5O7GAJJuAU%2F7a1Obb8m6%2F9xabmr1a8CXKgYwc%2F7nvZ1dYrj2TWD4bGi%2BDRDhv8NXR6Enf0MIry39QGOqUBCFrnR%2F5cdr3klFrxjr0PlfQ%2Fg4zVx2cuhRh61hKwf5gF6423JG6La8nqkR4vmnA88ENfHKYRdeIzAI02qj%2BWnuhYf7y6tAZ9IhPtSHtcPi0rZSyL8QFykhJmMzvhOoq7bsyOg8lJWYLujMQtAPlKaW8odxwsPMDdigvMQuxu%2FomS28sjgORsVQTDYIJc4sl2LbKIWfoybywvPP%2Bq0lbNMCUrslqG&X-Amz-Signature=aec1dcdbc2be303e14c070e512d238883bfcaada481c70b45bb489927f80b0b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQ2PULLH%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123357Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEe3WCdZ518jXSKOyRq16B%2FXb3Xm39pt6ykiAUp71y8RAiBFaybVH9Si%2FAWfjWqGlTLHrbeMVJ%2FG1L1A%2FNLCY0spkCqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhDz4JwQLY8QY8hC9KtwDEKzkeVDXf%2BqtnfWJvt1uQttZM9JUmiBXdz9vzthUcskagIsz3%2F3HN6he5KxWLRJ45ggN8bY3xNm%2FG43rwh%2Bz5iYw6uN%2BlRwV%2BDNPrgfyqmAUsJHLVIVW2lDFJWLAcHcHnII3Hz0iLvf%2BywV5WIHU9Z3biQSxdofDGqmsmO%2FCIJIGP8Gaxjl6VUnknXnCHoxlqD07z%2FoaEmsDjtgmCaEax6ZYK4NqTsp5msq%2BXsymbFIRXq5X3POTX1MX9F8970iAtxNb1NcQ0NoRPkJ8HpcukiCpJx5Ue1uoKQzs6as4SNoVyz5oRyleyfCJ1DIF9YLApHOj35k%2Bx1ODrYFdyLzsUpcCt3JBNplS3s7lpsPycHERggluM%2FaK%2FOcKklHg0wq7vJPEPy86nMr84DeD%2FHYtWVjK0HGIpJlxEcegMRYz1%2F3Q4z0HlSnAVYukqMfYDcNzQHE6E%2FJM83r%2B6icbmAtwmQDlDVZHC2Ir8j%2Bf1k77MJuLb7Z6KLcB7jgZYTXBaLCFdN%2FCFj5ieOxlHFKuqTHkcPxGcUHw%2Fv1wKgORCOSKN5J3iJJvxeXrkHikWi1ZtZKtF6uWGmnFAf5aABwLdBEn18T%2BFHON%2B1WY%2BCaGv9v25nVZBjqPXewbUWcXhCMw%2B%2FLf1AY6pgFuIY8cIcFv1Q%2FxSlg5HIDPMooO4nOL2s8goTAuRqM8pWbv7x7wfk0wc7Iy%2BLWLZ8i70vFm%2F8uMYTnlPDk0YhRtMPWJrO9h%2BF2OhF146PtvRhNWM7v1tPKKfSVFNnJPhJ5BhdagCcT29%2FTHmYzYnob8ZDBb9U%2FXBhp4HDxAzP4qBSNmTRhJFJSe80ZthpgNIU8rJ9jy3GHcNoyXd0RHldTYUeKTjVay&X-Amz-Signature=4da70e7bdd130270f45abaeb446f8d74c215538dfd8f000995a43e004b7ee4d4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UQ2PULLH%2F20260902%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260902T123357Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEe3WCdZ518jXSKOyRq16B%2FXb3Xm39pt6ykiAUp71y8RAiBFaybVH9Si%2FAWfjWqGlTLHrbeMVJ%2FG1L1A%2FNLCY0spkCqIBAjE%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMhDz4JwQLY8QY8hC9KtwDEKzkeVDXf%2BqtnfWJvt1uQttZM9JUmiBXdz9vzthUcskagIsz3%2F3HN6he5KxWLRJ45ggN8bY3xNm%2FG43rwh%2Bz5iYw6uN%2BlRwV%2BDNPrgfyqmAUsJHLVIVW2lDFJWLAcHcHnII3Hz0iLvf%2BywV5WIHU9Z3biQSxdofDGqmsmO%2FCIJIGP8Gaxjl6VUnknXnCHoxlqD07z%2FoaEmsDjtgmCaEax6ZYK4NqTsp5msq%2BXsymbFIRXq5X3POTX1MX9F8970iAtxNb1NcQ0NoRPkJ8HpcukiCpJx5Ue1uoKQzs6as4SNoVyz5oRyleyfCJ1DIF9YLApHOj35k%2Bx1ODrYFdyLzsUpcCt3JBNplS3s7lpsPycHERggluM%2FaK%2FOcKklHg0wq7vJPEPy86nMr84DeD%2FHYtWVjK0HGIpJlxEcegMRYz1%2F3Q4z0HlSnAVYukqMfYDcNzQHE6E%2FJM83r%2B6icbmAtwmQDlDVZHC2Ir8j%2Bf1k77MJuLb7Z6KLcB7jgZYTXBaLCFdN%2FCFj5ieOxlHFKuqTHkcPxGcUHw%2Fv1wKgORCOSKN5J3iJJvxeXrkHikWi1ZtZKtF6uWGmnFAf5aABwLdBEn18T%2BFHON%2B1WY%2BCaGv9v25nVZBjqPXewbUWcXhCMw%2B%2FLf1AY6pgFuIY8cIcFv1Q%2FxSlg5HIDPMooO4nOL2s8goTAuRqM8pWbv7x7wfk0wc7Iy%2BLWLZ8i70vFm%2F8uMYTnlPDk0YhRtMPWJrO9h%2BF2OhF146PtvRhNWM7v1tPKKfSVFNnJPhJ5BhdagCcT29%2FTHmYzYnob8ZDBb9U%2FXBhp4HDxAzP4qBSNmTRhJFJSe80ZthpgNIU8rJ9jy3GHcNoyXd0RHldTYUeKTjVay&X-Amz-Signature=0ca830384666295bcdfd4f95cd707722e12e5109bbe9ac75c1896badeee48962&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
