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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPYKNDN2%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQCiU3pDcVzz9PxTLtwnkid0zya2Igw4urjqehS5l3E3UQIhAP7IXEx9STVn1ZlmXSwbK3INPdqBmH3N3ViB4MFL7L8tKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgznjQR7JXYoQyfdE48q3AOBo%2BBYFcncTR1oMu8F5wuqSbnGdtaXESTIbaT%2B%2Fw3lsJ%2BvIU4o8JpZX6Hm7s8gowI7Q%2F%2BDjQxXIlRhJqQepbZmP3iXOYxZlqtX1fNPnl8l5Y2VHdIPL2aV76%2F8v7gN%2BtOX7Il%2Bh96%2BlLvOBoesrXkhZEG%2FZcTSkB%2FyCfgEjkqZL%2Bezvf5xFuITx0P%2BHGbxZwD7HuOBthIE7CnvsOz7bW2zXC6JLEWn5UyktCmqvtpO1dCLskqBuP7FG9VKaSHnKyIo1FxmD6he8N8ouxjffLiggio%2F2Agb3jIiHzgt47m%2B%2B4u9JJvlmZRlfZg0xE%2FUggYR2GNqhmX6PPPxA4qezxXhc9GrjVKAMlE7fDLPBC3gV2ipT%2Fx3uCFvtVsOF46%2FRXgCNrNXcBFK4gNrWllmuG8PrTQNoC7pyzrpzC1z39mCX2Aj1i2TwFDUyLyb4OPtEs4ONKVM3UG8IwXW469lkESSN9r%2Fh2mEjT7f4o5mCGej3hhbA%2Fk850IBRr37yKbpWLyx9SnLraGJ4kks0Z1sE1EeLkVe9lQvDVAYiX%2Bg9do85fViW5m8fnlOEBJ8%2FAZuLQTjaTD4noWuYA7n08qPSv9lYTCfo4Ig73YEguwaAyY3N67EeY78NAxI8z4eijCTl6rNBjqkARr1Vqm5XN7SNGjspk9xlERGjkh6Vm90W4iqtzK5Z8HM6k%2BFkPdksgYptp1u%2FYumAZSPOXp1zccV1lf9aKtEjacjoMm%2Fck%2Bj8HUCEubwXEBlUd%2FomPPP38cCz1jHUiZC5ZQ8a4EC%2Bay%2FQimGDxZuzwGcQXADWip8PxqaQ%2FnY0Vat4oWWhxrtQCYTRTCyH7l%2FI6ySl8iFX8dIuC%2F1sns2Zcw5Uihw&X-Amz-Signature=a5d203905ac266a69c0c0ddcde18e8e65069d3598de4b07f4dafdbbbde68b401&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPYKNDN2%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQCiU3pDcVzz9PxTLtwnkid0zya2Igw4urjqehS5l3E3UQIhAP7IXEx9STVn1ZlmXSwbK3INPdqBmH3N3ViB4MFL7L8tKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgznjQR7JXYoQyfdE48q3AOBo%2BBYFcncTR1oMu8F5wuqSbnGdtaXESTIbaT%2B%2Fw3lsJ%2BvIU4o8JpZX6Hm7s8gowI7Q%2F%2BDjQxXIlRhJqQepbZmP3iXOYxZlqtX1fNPnl8l5Y2VHdIPL2aV76%2F8v7gN%2BtOX7Il%2Bh96%2BlLvOBoesrXkhZEG%2FZcTSkB%2FyCfgEjkqZL%2Bezvf5xFuITx0P%2BHGbxZwD7HuOBthIE7CnvsOz7bW2zXC6JLEWn5UyktCmqvtpO1dCLskqBuP7FG9VKaSHnKyIo1FxmD6he8N8ouxjffLiggio%2F2Agb3jIiHzgt47m%2B%2B4u9JJvlmZRlfZg0xE%2FUggYR2GNqhmX6PPPxA4qezxXhc9GrjVKAMlE7fDLPBC3gV2ipT%2Fx3uCFvtVsOF46%2FRXgCNrNXcBFK4gNrWllmuG8PrTQNoC7pyzrpzC1z39mCX2Aj1i2TwFDUyLyb4OPtEs4ONKVM3UG8IwXW469lkESSN9r%2Fh2mEjT7f4o5mCGej3hhbA%2Fk850IBRr37yKbpWLyx9SnLraGJ4kks0Z1sE1EeLkVe9lQvDVAYiX%2Bg9do85fViW5m8fnlOEBJ8%2FAZuLQTjaTD4noWuYA7n08qPSv9lYTCfo4Ig73YEguwaAyY3N67EeY78NAxI8z4eijCTl6rNBjqkARr1Vqm5XN7SNGjspk9xlERGjkh6Vm90W4iqtzK5Z8HM6k%2BFkPdksgYptp1u%2FYumAZSPOXp1zccV1lf9aKtEjacjoMm%2Fck%2Bj8HUCEubwXEBlUd%2FomPPP38cCz1jHUiZC5ZQ8a4EC%2Bay%2FQimGDxZuzwGcQXADWip8PxqaQ%2FnY0Vat4oWWhxrtQCYTRTCyH7l%2FI6ySl8iFX8dIuC%2F1sns2Zcw5Uihw&X-Amz-Signature=4aa6f4d19f5d0f0d96b1ba43a0b05a0f371677189a8fbf9cb0f55416528916af&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SPYKNDN2%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJIMEYCIQCiU3pDcVzz9PxTLtwnkid0zya2Igw4urjqehS5l3E3UQIhAP7IXEx9STVn1ZlmXSwbK3INPdqBmH3N3ViB4MFL7L8tKogECOH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgznjQR7JXYoQyfdE48q3AOBo%2BBYFcncTR1oMu8F5wuqSbnGdtaXESTIbaT%2B%2Fw3lsJ%2BvIU4o8JpZX6Hm7s8gowI7Q%2F%2BDjQxXIlRhJqQepbZmP3iXOYxZlqtX1fNPnl8l5Y2VHdIPL2aV76%2F8v7gN%2BtOX7Il%2Bh96%2BlLvOBoesrXkhZEG%2FZcTSkB%2FyCfgEjkqZL%2Bezvf5xFuITx0P%2BHGbxZwD7HuOBthIE7CnvsOz7bW2zXC6JLEWn5UyktCmqvtpO1dCLskqBuP7FG9VKaSHnKyIo1FxmD6he8N8ouxjffLiggio%2F2Agb3jIiHzgt47m%2B%2B4u9JJvlmZRlfZg0xE%2FUggYR2GNqhmX6PPPxA4qezxXhc9GrjVKAMlE7fDLPBC3gV2ipT%2Fx3uCFvtVsOF46%2FRXgCNrNXcBFK4gNrWllmuG8PrTQNoC7pyzrpzC1z39mCX2Aj1i2TwFDUyLyb4OPtEs4ONKVM3UG8IwXW469lkESSN9r%2Fh2mEjT7f4o5mCGej3hhbA%2Fk850IBRr37yKbpWLyx9SnLraGJ4kks0Z1sE1EeLkVe9lQvDVAYiX%2Bg9do85fViW5m8fnlOEBJ8%2FAZuLQTjaTD4noWuYA7n08qPSv9lYTCfo4Ig73YEguwaAyY3N67EeY78NAxI8z4eijCTl6rNBjqkARr1Vqm5XN7SNGjspk9xlERGjkh6Vm90W4iqtzK5Z8HM6k%2BFkPdksgYptp1u%2FYumAZSPOXp1zccV1lf9aKtEjacjoMm%2Fck%2Bj8HUCEubwXEBlUd%2FomPPP38cCz1jHUiZC5ZQ8a4EC%2Bay%2FQimGDxZuzwGcQXADWip8PxqaQ%2FnY0Vat4oWWhxrtQCYTRTCyH7l%2FI6ySl8iFX8dIuC%2F1sns2Zcw5Uihw&X-Amz-Signature=f8175c9d004a1216e7e72eea93aee202b2c294f198813e06d11cc218e46f89ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX2DSFZI%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIGIJgj2plmzNmrqhABH0dLJoobBcDJed7VfnwKYLfCpWAiATv%2FZndFfxa1ma9lFgs7ry3NRGFJJFHe7RQo4r%2BDhvuCqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMBQGSVWs%2BkAT3BobqKtwDjM%2FNPD6uVzWBWCM%2BJad39h8W09N2eAsi29S8%2F5URHtBX3PcMIK3kHaj%2BuJ3HST6sTaoSEpuQbv%2BUhd03kgdBKeoaB9NuLaupVzFC6L9sPVVTpXunrd0CDLVCg1MRqdo6Y8HwdZiLVCnH1eZHLWqpwGm82EsqWg1Wr%2BLGIKhDiceuSqlE8gi8D68f%2BWtumUdMv5njnuI1VLegHQYsHmug6HtuvG0OPnOX6NMjH5Qn%2FPvmNa9CSigGQSq%2BpRVPXACMqbXDB3yk3sXXROFByixxY5IEAV%2BzpscsmlMsGfQcawppjWjZQzN27gteG2FpFCq84DzQdd70zY0H8euauk5aTBe4Vz9PP%2BA6A4k9p5U7Pu0GXQs%2Ft9qEo5Av%2BP733rwWv1Fd1J7k8nDp1F%2FEp9djZnX2THJSyHY%2BSkiR%2F0qP43XbxIQ83D7mIhfWp4FvMpkRQpCXA%2BDnDq0YFC05aRfQUEaUKQ3%2BsfdyiXvd1YJQt78EGLVMiVIxwc413x5AW8WUfHbvWKFg7oTKOw02kjUdwXKrwmzwqWh4POIQlANEm6Rp%2FY2vAAIDQ9MH033qg5VTpiguh3ibFS6jWganJlHaR7CcNjlwfYzGquY1VKb6pjTAq0uhnOLFfkOYEIwwzZaqzQY6pgGmvGOywKEpLbyXchWG1891QL6MLsVxdj0JYnS%2FpKg%2FA0c4E%2FxA0T2gActYiQuowW4C5AeE%2FqzzDW6EhIdXyDftZ2LJZ%2BCuLNmUnDX1iu1QIOggDMvZEjm4ol9wXVaXFm1CoI47fi9Ys5rQW%2ByNNnjR3%2FV0vUXJPKP7vEujt6Hgo%2BFSqlWg47S6BmO4qzmKfMybJTYUsc2TEZ6fVO1uOvqK08CbAng8&X-Amz-Signature=e7b764aaf32bea53fe794dd567bb1f93419cc5f635ffe9988f19a402a396e8ff&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX2DSFZI%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIGIJgj2plmzNmrqhABH0dLJoobBcDJed7VfnwKYLfCpWAiATv%2FZndFfxa1ma9lFgs7ry3NRGFJJFHe7RQo4r%2BDhvuCqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMBQGSVWs%2BkAT3BobqKtwDjM%2FNPD6uVzWBWCM%2BJad39h8W09N2eAsi29S8%2F5URHtBX3PcMIK3kHaj%2BuJ3HST6sTaoSEpuQbv%2BUhd03kgdBKeoaB9NuLaupVzFC6L9sPVVTpXunrd0CDLVCg1MRqdo6Y8HwdZiLVCnH1eZHLWqpwGm82EsqWg1Wr%2BLGIKhDiceuSqlE8gi8D68f%2BWtumUdMv5njnuI1VLegHQYsHmug6HtuvG0OPnOX6NMjH5Qn%2FPvmNa9CSigGQSq%2BpRVPXACMqbXDB3yk3sXXROFByixxY5IEAV%2BzpscsmlMsGfQcawppjWjZQzN27gteG2FpFCq84DzQdd70zY0H8euauk5aTBe4Vz9PP%2BA6A4k9p5U7Pu0GXQs%2Ft9qEo5Av%2BP733rwWv1Fd1J7k8nDp1F%2FEp9djZnX2THJSyHY%2BSkiR%2F0qP43XbxIQ83D7mIhfWp4FvMpkRQpCXA%2BDnDq0YFC05aRfQUEaUKQ3%2BsfdyiXvd1YJQt78EGLVMiVIxwc413x5AW8WUfHbvWKFg7oTKOw02kjUdwXKrwmzwqWh4POIQlANEm6Rp%2FY2vAAIDQ9MH033qg5VTpiguh3ibFS6jWganJlHaR7CcNjlwfYzGquY1VKb6pjTAq0uhnOLFfkOYEIwwzZaqzQY6pgGmvGOywKEpLbyXchWG1891QL6MLsVxdj0JYnS%2FpKg%2FA0c4E%2FxA0T2gActYiQuowW4C5AeE%2FqzzDW6EhIdXyDftZ2LJZ%2BCuLNmUnDX1iu1QIOggDMvZEjm4ol9wXVaXFm1CoI47fi9Ys5rQW%2ByNNnjR3%2FV0vUXJPKP7vEujt6Hgo%2BFSqlWg47S6BmO4qzmKfMybJTYUsc2TEZ6fVO1uOvqK08CbAng8&X-Amz-Signature=2ef3bd35ee7ee2edf6faabb8bac4b41cf1fb705fe426ce04f7c34c7085d842cc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX2DSFZI%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIGIJgj2plmzNmrqhABH0dLJoobBcDJed7VfnwKYLfCpWAiATv%2FZndFfxa1ma9lFgs7ry3NRGFJJFHe7RQo4r%2BDhvuCqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMBQGSVWs%2BkAT3BobqKtwDjM%2FNPD6uVzWBWCM%2BJad39h8W09N2eAsi29S8%2F5URHtBX3PcMIK3kHaj%2BuJ3HST6sTaoSEpuQbv%2BUhd03kgdBKeoaB9NuLaupVzFC6L9sPVVTpXunrd0CDLVCg1MRqdo6Y8HwdZiLVCnH1eZHLWqpwGm82EsqWg1Wr%2BLGIKhDiceuSqlE8gi8D68f%2BWtumUdMv5njnuI1VLegHQYsHmug6HtuvG0OPnOX6NMjH5Qn%2FPvmNa9CSigGQSq%2BpRVPXACMqbXDB3yk3sXXROFByixxY5IEAV%2BzpscsmlMsGfQcawppjWjZQzN27gteG2FpFCq84DzQdd70zY0H8euauk5aTBe4Vz9PP%2BA6A4k9p5U7Pu0GXQs%2Ft9qEo5Av%2BP733rwWv1Fd1J7k8nDp1F%2FEp9djZnX2THJSyHY%2BSkiR%2F0qP43XbxIQ83D7mIhfWp4FvMpkRQpCXA%2BDnDq0YFC05aRfQUEaUKQ3%2BsfdyiXvd1YJQt78EGLVMiVIxwc413x5AW8WUfHbvWKFg7oTKOw02kjUdwXKrwmzwqWh4POIQlANEm6Rp%2FY2vAAIDQ9MH033qg5VTpiguh3ibFS6jWganJlHaR7CcNjlwfYzGquY1VKb6pjTAq0uhnOLFfkOYEIwwzZaqzQY6pgGmvGOywKEpLbyXchWG1891QL6MLsVxdj0JYnS%2FpKg%2FA0c4E%2FxA0T2gActYiQuowW4C5AeE%2FqzzDW6EhIdXyDftZ2LJZ%2BCuLNmUnDX1iu1QIOggDMvZEjm4ol9wXVaXFm1CoI47fi9Ys5rQW%2ByNNnjR3%2FV0vUXJPKP7vEujt6Hgo%2BFSqlWg47S6BmO4qzmKfMybJTYUsc2TEZ6fVO1uOvqK08CbAng8&X-Amz-Signature=69458f4704c5bc3ef42c85ca0e5042ec44634c4a068a1d0d3cb13a4aaa6fa13e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WX2DSFZI%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083710Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJGMEQCIGIJgj2plmzNmrqhABH0dLJoobBcDJed7VfnwKYLfCpWAiATv%2FZndFfxa1ma9lFgs7ry3NRGFJJFHe7RQo4r%2BDhvuCqIBAjh%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMBQGSVWs%2BkAT3BobqKtwDjM%2FNPD6uVzWBWCM%2BJad39h8W09N2eAsi29S8%2F5URHtBX3PcMIK3kHaj%2BuJ3HST6sTaoSEpuQbv%2BUhd03kgdBKeoaB9NuLaupVzFC6L9sPVVTpXunrd0CDLVCg1MRqdo6Y8HwdZiLVCnH1eZHLWqpwGm82EsqWg1Wr%2BLGIKhDiceuSqlE8gi8D68f%2BWtumUdMv5njnuI1VLegHQYsHmug6HtuvG0OPnOX6NMjH5Qn%2FPvmNa9CSigGQSq%2BpRVPXACMqbXDB3yk3sXXROFByixxY5IEAV%2BzpscsmlMsGfQcawppjWjZQzN27gteG2FpFCq84DzQdd70zY0H8euauk5aTBe4Vz9PP%2BA6A4k9p5U7Pu0GXQs%2Ft9qEo5Av%2BP733rwWv1Fd1J7k8nDp1F%2FEp9djZnX2THJSyHY%2BSkiR%2F0qP43XbxIQ83D7mIhfWp4FvMpkRQpCXA%2BDnDq0YFC05aRfQUEaUKQ3%2BsfdyiXvd1YJQt78EGLVMiVIxwc413x5AW8WUfHbvWKFg7oTKOw02kjUdwXKrwmzwqWh4POIQlANEm6Rp%2FY2vAAIDQ9MH033qg5VTpiguh3ibFS6jWganJlHaR7CcNjlwfYzGquY1VKb6pjTAq0uhnOLFfkOYEIwwzZaqzQY6pgGmvGOywKEpLbyXchWG1891QL6MLsVxdj0JYnS%2FpKg%2FA0c4E%2FxA0T2gActYiQuowW4C5AeE%2FqzzDW6EhIdXyDftZ2LJZ%2BCuLNmUnDX1iu1QIOggDMvZEjm4ol9wXVaXFm1CoI47fi9Ys5rQW%2ByNNnjR3%2FV0vUXJPKP7vEujt6Hgo%2BFSqlWg47S6BmO4qzmKfMybJTYUsc2TEZ6fVO1uOvqK08CbAng8&X-Amz-Signature=2c8558554924150b8aac24666ee8d763639739baf9f2ddd992c05a5f9f6123b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662SR3LBHA%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083711Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQCTU%2F2LgGln1eQYj99vP8ivxBLA6oFlBeQMrzKx30vZjAIgQissLmxTOmYp04W0tdAWK38RVbu9WaVAlN73XCk8Q7sqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCAb8d66uiDjbOoynSrcA6liVdo4ijl6qGQzCwOL6MPC5mV67WhWxg4gvJRxgnREQsLcspbxnSIEJB4dYyLB1q4MVcNz5U86FJlCSjwnPGLT8DocuvV%2BA7PQB9wvSXTvxM1Sszcczd2%2B1h9U%2FSs05fu16PkvdIlasUtoKnYpBQZ1AjGHbRu0ZQEjMIMgoUTddD9QIdZ7jSuRlJaLqbXMJY5JZIYonPOXzzIIvQMEHrWwg1MwmaeHDkVzxh99OMZuFeYuFefTyUGjYsTFx9lJ88xLue2gO%2BgTlY1veTtV%2BBTE%2Bi%2B7%2FKxl%2BjUAWF1%2FT6Orh%2FfPpHbCSP3Z28y%2BRywir8OuOT0cAtZ0rOzymrEyLdEa3ytoH4d5lm49dcCrYXlirA9MyriPjCE397kTcVpaB239aKlLu%2Bx%2FzYu5UazWwxXPo54v%2FQjur2ZifbE2zCXSvbmeJMcPQMc0N8RlwiO13K4Qn73YyqeoPLFcyJZaTHeDvTtk5voP3BWOIkVbWh%2BJ3%2BiCj1zpl1SNNUzzRvOly6ofvJynv2ND2kvI1PuhLLnr7H6lxIKlRiY9R3WacZFbcrEcKn1HHoteCW5Xh8VKr1Szl4aBNWyRs%2BGwB%2FqouAKNm2KwV%2B2dSaMKZSdVsXQBJqlG2QMWf2vdjPTEMJWXqs0GOqUBP1p9NYP0Ja9o3v6sH3m8gJJGfYeOTj3rM8ojoKfSgTI2AFf2dYJC63xQdS3UzX6iYbasDJJiVM0h71t8uxaHDIVWgYhQDOP%2ByO37whNMsM3C2H9H1NE0tZMkLqHCNfIV2Oz0gwGJxQsdivJggH%2Bj6z6T0brN4S1GTnhdRBYXsF%2B8KODuv75%2Bcr%2Be1t1UvywBymbL04QrvBG5s97gN68ABNrQ7eYd&X-Amz-Signature=13021cb81033e602171010d23744b4548995cdb0658612173ad5c06010c51762&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U5UKP2NQ%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQCgACc2OGU5xYcvevNPuVcytJ3W%2B%2FgzbaytP4id167msAIgOmjZRUueDiNYq%2F%2BJkZM1Fs1DHnGaxXGmm0rVgmWkThUqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPcEk2ZGfgBlaqAdsSrcA0x26qZaPGvi94xabO8ji08x3CflEWk0GKKOWIOXR%2FaavXt%2F2pzsuX3N%2Fp9Z0v83%2BDeUPDuvHkSG2MN8uEX5lva2%2Be006kHOA4voGwFGT27%2F8zF%2BTAoB1%2B5xThu1VAVpwuBfQLOG5e%2BB4MudlCmk%2BvC5lDLIlIIecovGKQu14tJu9s8RsQ4hettl2LKks9YXe6KZAXTcCyiy4QiOZyGg2sK0RZlvzk%2BDbQeL9tHNfYNWZxPL8Uv1bb%2FbhoB37IZi754Cf3v7wMdM0biC02FVnG4rs2%2FpDbyWW7OMGUvBtkky9TxVrE3CvImSSXxAxj8v3D9M14OHBe0rlnlUyyhxkteDB7KaVbJDfnuIYKZLrao%2BBvs25MTgl5LYeiMj5nhPFoXcji9gxAbyOPssvxPuVv2gitSdlZG0CCtKID8s5uBnCQcAwtesfwJYzoVjHRT1dld2uyFipZrVmOGC0vpNJaHm12OHkiTz5EjDsaXDK1CRhJlDeDnKYqJEKxNTF3sQ8ZPN5AwhaUi8bZOI2X9TevZQsolJgoKIs0J5kA%2FjZzO%2FLpeBsyRakQU%2FIug%2B%2F3Ce3CzBsaKS7zsOJtSjKNUYPte5bp%2BXF98R4YcekDJYXfdxvxk3Q%2Bkx2jSx%2FyW2MMKWqs0GOqUB9MWClGGx4OIX84t%2BInwt21eayDejAyR%2FKDYZBpQUnQkJUP1DTr7fa3EvuS39HcUq3BdA4klP%2BrIcIFm7Q9zZKemKa99Jw19ksZRXUGS7hn0KXNWFN6sWYUw7TlqNx5Tv3g5CrrVvfFLFoF1GdpTHa2EqNjJmi7raBhwds%2F639Lzix%2BcrE3MCyBTziKMMH5IrJl9fv8uxyd4i9YySrd%2FCeQLrMcAN&X-Amz-Signature=e00d2c804b905fd1d1bc688a5f78dc049516244faa015efa51e0ebbdd0fa6024&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466U5UKP2NQ%2F20260306%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260306T083712Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBgaCXVzLXdlc3QtMiJHMEUCIQCgACc2OGU5xYcvevNPuVcytJ3W%2B%2FgzbaytP4id167msAIgOmjZRUueDiNYq%2F%2BJkZM1Fs1DHnGaxXGmm0rVgmWkThUqiAQI4f%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPcEk2ZGfgBlaqAdsSrcA0x26qZaPGvi94xabO8ji08x3CflEWk0GKKOWIOXR%2FaavXt%2F2pzsuX3N%2Fp9Z0v83%2BDeUPDuvHkSG2MN8uEX5lva2%2Be006kHOA4voGwFGT27%2F8zF%2BTAoB1%2B5xThu1VAVpwuBfQLOG5e%2BB4MudlCmk%2BvC5lDLIlIIecovGKQu14tJu9s8RsQ4hettl2LKks9YXe6KZAXTcCyiy4QiOZyGg2sK0RZlvzk%2BDbQeL9tHNfYNWZxPL8Uv1bb%2FbhoB37IZi754Cf3v7wMdM0biC02FVnG4rs2%2FpDbyWW7OMGUvBtkky9TxVrE3CvImSSXxAxj8v3D9M14OHBe0rlnlUyyhxkteDB7KaVbJDfnuIYKZLrao%2BBvs25MTgl5LYeiMj5nhPFoXcji9gxAbyOPssvxPuVv2gitSdlZG0CCtKID8s5uBnCQcAwtesfwJYzoVjHRT1dld2uyFipZrVmOGC0vpNJaHm12OHkiTz5EjDsaXDK1CRhJlDeDnKYqJEKxNTF3sQ8ZPN5AwhaUi8bZOI2X9TevZQsolJgoKIs0J5kA%2FjZzO%2FLpeBsyRakQU%2FIug%2B%2F3Ce3CzBsaKS7zsOJtSjKNUYPte5bp%2BXF98R4YcekDJYXfdxvxk3Q%2Bkx2jSx%2FyW2MMKWqs0GOqUB9MWClGGx4OIX84t%2BInwt21eayDejAyR%2FKDYZBpQUnQkJUP1DTr7fa3EvuS39HcUq3BdA4klP%2BrIcIFm7Q9zZKemKa99Jw19ksZRXUGS7hn0KXNWFN6sWYUw7TlqNx5Tv3g5CrrVvfFLFoF1GdpTHa2EqNjJmi7raBhwds%2F639Lzix%2BcrE3MCyBTziKMMH5IrJl9fv8uxyd4i9YySrd%2FCeQLrMcAN&X-Amz-Signature=aa9ce3657608dddb89f0cb3d157502e5e336eea2f9f13e87bf4ebbd88d3409b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
