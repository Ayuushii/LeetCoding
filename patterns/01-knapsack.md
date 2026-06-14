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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677BG6CSP%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDSQcVYkJZ1DOxWUnpDRsNpsv73w0TD5CycRvlrDmvB3QIgPShm8UQI%2B6A08w1BXtctdjU71eKVfZY7IE5AvJzhUNUq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDOBkENylY%2B0EFCh0jSrcA%2Bg3Keb9neWCRSiBhRvPUvx5UMfd4eTXCA9qU7wwUxmCcEHiwelSaqNs7jdGY2bGfBrD7lI7592v4Mcl1u%2BywvPwVW9SLHTbwqs1W3dxjpTqRib2L2Q3p9krzFRslb5Sg5AcpWrkyEKLUdCr%2FJxOH21e7WXzWrYXx6MrBOstPk9LqfKEgkqFmq43BPFE1UeDhbLM2ga2ZlVdsHXPi%2B1w6V16UyWcmd%2FxzEgxUvAx5d5zTdk%2F0rfNPmx71Kz2grSxJ9wadW5fgd8j5exhTEi4Trg0Cl24GMQQBGBpW8t%2F%2F%2FjXPnB7gkncbFCiu40%2F4e%2BYEAX60kx07wfP2k2nPnliXoeycE4RKvaLTEw%2FmF1DK%2BMp5W8xWOFGizgbnlzhZlzThVLE3Q8AwU2%2Fo4hNSjoMPY3tVgL9hlSv7Rdwy0NfZUpfgzlmWF1BlfzfGuPT834A%2FlKglOCttLhxD7rDuz0NpVFTRi2HyYWToxrTsK0FKTep8vGwo5O1gRBFyWS7wb5%2F8Qrji7DS17Ntm7YbYjc6yST5Y0IqMJaFTH0YlTqEcPlHdQIDbGxr8%2BWVP3fsE1qWmk7qTzpl6qGKr6gTzEU90f2ljghv8rOphFWgdppQZ%2BB9Z%2FlMMsNlmO2iA2bEMP7GudEGOqUBCEYc0HgX8gjvq69SyK0utWbdUd3Rb9tJnKvuFIaz7LOU1%2BKQHEXlwe%2B1uzhBihlc6XWOKVN1zwAoH4eoyIIUkUwVJpR8X3F5OQFbJ4RGwn72QnDvPNPBtgLGd8Q4Q%2FlKKj7o0IlVYLxYhXjrpHgzkq3HyDuIqQW%2BULeH1O%2BAdXabsMjs8LJOgxfXQceGpft8iBNTK4EJogDuiwrjQvF%2FU%2F28JhUG&X-Amz-Signature=dffcea91d3c7c60adefceff84d653b0ee188eda38f8bdbd07b6c11ad1124d062&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677BG6CSP%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDSQcVYkJZ1DOxWUnpDRsNpsv73w0TD5CycRvlrDmvB3QIgPShm8UQI%2B6A08w1BXtctdjU71eKVfZY7IE5AvJzhUNUq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDOBkENylY%2B0EFCh0jSrcA%2Bg3Keb9neWCRSiBhRvPUvx5UMfd4eTXCA9qU7wwUxmCcEHiwelSaqNs7jdGY2bGfBrD7lI7592v4Mcl1u%2BywvPwVW9SLHTbwqs1W3dxjpTqRib2L2Q3p9krzFRslb5Sg5AcpWrkyEKLUdCr%2FJxOH21e7WXzWrYXx6MrBOstPk9LqfKEgkqFmq43BPFE1UeDhbLM2ga2ZlVdsHXPi%2B1w6V16UyWcmd%2FxzEgxUvAx5d5zTdk%2F0rfNPmx71Kz2grSxJ9wadW5fgd8j5exhTEi4Trg0Cl24GMQQBGBpW8t%2F%2F%2FjXPnB7gkncbFCiu40%2F4e%2BYEAX60kx07wfP2k2nPnliXoeycE4RKvaLTEw%2FmF1DK%2BMp5W8xWOFGizgbnlzhZlzThVLE3Q8AwU2%2Fo4hNSjoMPY3tVgL9hlSv7Rdwy0NfZUpfgzlmWF1BlfzfGuPT834A%2FlKglOCttLhxD7rDuz0NpVFTRi2HyYWToxrTsK0FKTep8vGwo5O1gRBFyWS7wb5%2F8Qrji7DS17Ntm7YbYjc6yST5Y0IqMJaFTH0YlTqEcPlHdQIDbGxr8%2BWVP3fsE1qWmk7qTzpl6qGKr6gTzEU90f2ljghv8rOphFWgdppQZ%2BB9Z%2FlMMsNlmO2iA2bEMP7GudEGOqUBCEYc0HgX8gjvq69SyK0utWbdUd3Rb9tJnKvuFIaz7LOU1%2BKQHEXlwe%2B1uzhBihlc6XWOKVN1zwAoH4eoyIIUkUwVJpR8X3F5OQFbJ4RGwn72QnDvPNPBtgLGd8Q4Q%2FlKKj7o0IlVYLxYhXjrpHgzkq3HyDuIqQW%2BULeH1O%2BAdXabsMjs8LJOgxfXQceGpft8iBNTK4EJogDuiwrjQvF%2FU%2F28JhUG&X-Amz-Signature=1f6f38a5123fbae465ac1648dae3f22719af6031dd9f08b458d68d72b9e52fdb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46677BG6CSP%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104746Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDSQcVYkJZ1DOxWUnpDRsNpsv73w0TD5CycRvlrDmvB3QIgPShm8UQI%2B6A08w1BXtctdjU71eKVfZY7IE5AvJzhUNUq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDOBkENylY%2B0EFCh0jSrcA%2Bg3Keb9neWCRSiBhRvPUvx5UMfd4eTXCA9qU7wwUxmCcEHiwelSaqNs7jdGY2bGfBrD7lI7592v4Mcl1u%2BywvPwVW9SLHTbwqs1W3dxjpTqRib2L2Q3p9krzFRslb5Sg5AcpWrkyEKLUdCr%2FJxOH21e7WXzWrYXx6MrBOstPk9LqfKEgkqFmq43BPFE1UeDhbLM2ga2ZlVdsHXPi%2B1w6V16UyWcmd%2FxzEgxUvAx5d5zTdk%2F0rfNPmx71Kz2grSxJ9wadW5fgd8j5exhTEi4Trg0Cl24GMQQBGBpW8t%2F%2F%2FjXPnB7gkncbFCiu40%2F4e%2BYEAX60kx07wfP2k2nPnliXoeycE4RKvaLTEw%2FmF1DK%2BMp5W8xWOFGizgbnlzhZlzThVLE3Q8AwU2%2Fo4hNSjoMPY3tVgL9hlSv7Rdwy0NfZUpfgzlmWF1BlfzfGuPT834A%2FlKglOCttLhxD7rDuz0NpVFTRi2HyYWToxrTsK0FKTep8vGwo5O1gRBFyWS7wb5%2F8Qrji7DS17Ntm7YbYjc6yST5Y0IqMJaFTH0YlTqEcPlHdQIDbGxr8%2BWVP3fsE1qWmk7qTzpl6qGKr6gTzEU90f2ljghv8rOphFWgdppQZ%2BB9Z%2FlMMsNlmO2iA2bEMP7GudEGOqUBCEYc0HgX8gjvq69SyK0utWbdUd3Rb9tJnKvuFIaz7LOU1%2BKQHEXlwe%2B1uzhBihlc6XWOKVN1zwAoH4eoyIIUkUwVJpR8X3F5OQFbJ4RGwn72QnDvPNPBtgLGd8Q4Q%2FlKKj7o0IlVYLxYhXjrpHgzkq3HyDuIqQW%2BULeH1O%2BAdXabsMjs8LJOgxfXQceGpft8iBNTK4EJogDuiwrjQvF%2FU%2F28JhUG&X-Amz-Signature=e47cd29a817457549bae626ffd1b6f3e9976c167d177b0cea00d7f85edb9efc5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654GJKV3N%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDsZhZiRffNF9yRrO6Ls6jnfCAVGhzd%2BfKvVmx7diYErAIgKk68kL5Uph8c%2FTYvWKa4tFa4VmWcloHyjpoE1DJBET0q%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDFau2tjmf6Wl0bEa%2FyrcA34vWButgD47SM7TunJvyATdk8ARSGcRqpu0SLyS91c4GTrt%2BDDgziN12lTkZrgescAV3%2FGmTuEApiwP0%2Ba7YZuMCoeWkZHcapGAG92xWKp4Isy2kBBpgr%2FNbRBeRSBgee%2BVXUU3yRV1uustC1vM%2F88dJ6g6QzyIpzdj2N8C6dXa9yMpTaQYqhaHsaZ29wnmhd0tomia4gSm4bZ%2FmUuV1ztUQuZpsQUAYGNFbPRwaN7XFA2dxDDwR0cewDuo3CvcbW5ecfvHhJr9j3cfuEx2%2FyYxh6Bj%2BXhVvMAooEc%2BxtlI86n%2F4X9qi3UXPXoG0%2FyMbIHpSb3SAoUSxmlEnxRxIYaq8WsYfrEZzRyD7pGBOWopSFgOJDQh4VSwwQuZdmLaIbe2VA5J0ul%2FX%2FRbOmxj8MojBTBTmkjTOyPDlpJU7pEbEx4e5xQIRLxKXMOekYd6N3ZPmJiMa87Wwg%2Fs4%2FccJsJbJwTLuJ2sXJtml4V6s7%2FQ9fSpwmY8pe3gqh9UHk0hJOtMs08BADeDP0CWhhUWXwKF9nn695b9YR3cFi%2Bp65dxh8ypja%2FJ2XWW79%2FYk%2FRAwnpR1%2Bt55jLHbNNqyjXaGBUJF2NKCe59VEnHE%2F2zz%2FBvLcVDcWJkYv%2FTzNUBMKvFudEGOqUBQJnJLX2Qv%2FsMwJVg43KE%2BlHR9kSs9P2lN3wokk5mklKhPkyxal%2BRCpKriUmi8A%2Ft8c4t5Ag640fWJB%2BTB52VWhoIhsfrL%2FogbSHNKei8g2HPx3Aj%2FVfeRlmbRGb8vv%2BlW6g1ZnWosrzURwCo7iidHmjcdXEAH4Kp%2Bz0mu7zuIdX2nVBoCjvvu27Ab188N35SZjH%2ByJl%2BengevLFx99AsSTo8FGm7&X-Amz-Signature=eaeedb7bdc7585bf2ffce71caaf1498cbaf7f4c4d7f650f0f4a38d5a7d511665&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654GJKV3N%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDsZhZiRffNF9yRrO6Ls6jnfCAVGhzd%2BfKvVmx7diYErAIgKk68kL5Uph8c%2FTYvWKa4tFa4VmWcloHyjpoE1DJBET0q%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDFau2tjmf6Wl0bEa%2FyrcA34vWButgD47SM7TunJvyATdk8ARSGcRqpu0SLyS91c4GTrt%2BDDgziN12lTkZrgescAV3%2FGmTuEApiwP0%2Ba7YZuMCoeWkZHcapGAG92xWKp4Isy2kBBpgr%2FNbRBeRSBgee%2BVXUU3yRV1uustC1vM%2F88dJ6g6QzyIpzdj2N8C6dXa9yMpTaQYqhaHsaZ29wnmhd0tomia4gSm4bZ%2FmUuV1ztUQuZpsQUAYGNFbPRwaN7XFA2dxDDwR0cewDuo3CvcbW5ecfvHhJr9j3cfuEx2%2FyYxh6Bj%2BXhVvMAooEc%2BxtlI86n%2F4X9qi3UXPXoG0%2FyMbIHpSb3SAoUSxmlEnxRxIYaq8WsYfrEZzRyD7pGBOWopSFgOJDQh4VSwwQuZdmLaIbe2VA5J0ul%2FX%2FRbOmxj8MojBTBTmkjTOyPDlpJU7pEbEx4e5xQIRLxKXMOekYd6N3ZPmJiMa87Wwg%2Fs4%2FccJsJbJwTLuJ2sXJtml4V6s7%2FQ9fSpwmY8pe3gqh9UHk0hJOtMs08BADeDP0CWhhUWXwKF9nn695b9YR3cFi%2Bp65dxh8ypja%2FJ2XWW79%2FYk%2FRAwnpR1%2Bt55jLHbNNqyjXaGBUJF2NKCe59VEnHE%2F2zz%2FBvLcVDcWJkYv%2FTzNUBMKvFudEGOqUBQJnJLX2Qv%2FsMwJVg43KE%2BlHR9kSs9P2lN3wokk5mklKhPkyxal%2BRCpKriUmi8A%2Ft8c4t5Ag640fWJB%2BTB52VWhoIhsfrL%2FogbSHNKei8g2HPx3Aj%2FVfeRlmbRGb8vv%2BlW6g1ZnWosrzURwCo7iidHmjcdXEAH4Kp%2Bz0mu7zuIdX2nVBoCjvvu27Ab188N35SZjH%2ByJl%2BengevLFx99AsSTo8FGm7&X-Amz-Signature=a8ab2549348eaf72405ca10e8efd2ed5d4d9533458d764f42057f1da991d895f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654GJKV3N%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDsZhZiRffNF9yRrO6Ls6jnfCAVGhzd%2BfKvVmx7diYErAIgKk68kL5Uph8c%2FTYvWKa4tFa4VmWcloHyjpoE1DJBET0q%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDFau2tjmf6Wl0bEa%2FyrcA34vWButgD47SM7TunJvyATdk8ARSGcRqpu0SLyS91c4GTrt%2BDDgziN12lTkZrgescAV3%2FGmTuEApiwP0%2Ba7YZuMCoeWkZHcapGAG92xWKp4Isy2kBBpgr%2FNbRBeRSBgee%2BVXUU3yRV1uustC1vM%2F88dJ6g6QzyIpzdj2N8C6dXa9yMpTaQYqhaHsaZ29wnmhd0tomia4gSm4bZ%2FmUuV1ztUQuZpsQUAYGNFbPRwaN7XFA2dxDDwR0cewDuo3CvcbW5ecfvHhJr9j3cfuEx2%2FyYxh6Bj%2BXhVvMAooEc%2BxtlI86n%2F4X9qi3UXPXoG0%2FyMbIHpSb3SAoUSxmlEnxRxIYaq8WsYfrEZzRyD7pGBOWopSFgOJDQh4VSwwQuZdmLaIbe2VA5J0ul%2FX%2FRbOmxj8MojBTBTmkjTOyPDlpJU7pEbEx4e5xQIRLxKXMOekYd6N3ZPmJiMa87Wwg%2Fs4%2FccJsJbJwTLuJ2sXJtml4V6s7%2FQ9fSpwmY8pe3gqh9UHk0hJOtMs08BADeDP0CWhhUWXwKF9nn695b9YR3cFi%2Bp65dxh8ypja%2FJ2XWW79%2FYk%2FRAwnpR1%2Bt55jLHbNNqyjXaGBUJF2NKCe59VEnHE%2F2zz%2FBvLcVDcWJkYv%2FTzNUBMKvFudEGOqUBQJnJLX2Qv%2FsMwJVg43KE%2BlHR9kSs9P2lN3wokk5mklKhPkyxal%2BRCpKriUmi8A%2Ft8c4t5Ag640fWJB%2BTB52VWhoIhsfrL%2FogbSHNKei8g2HPx3Aj%2FVfeRlmbRGb8vv%2BlW6g1ZnWosrzURwCo7iidHmjcdXEAH4Kp%2Bz0mu7zuIdX2nVBoCjvvu27Ab188N35SZjH%2ByJl%2BengevLFx99AsSTo8FGm7&X-Amz-Signature=b038d40b460c20cc1f0e75cdd9371bee9542356e189a4bd7445a40fcb0cdfe4a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46654GJKV3N%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDsZhZiRffNF9yRrO6Ls6jnfCAVGhzd%2BfKvVmx7diYErAIgKk68kL5Uph8c%2FTYvWKa4tFa4VmWcloHyjpoE1DJBET0q%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDFau2tjmf6Wl0bEa%2FyrcA34vWButgD47SM7TunJvyATdk8ARSGcRqpu0SLyS91c4GTrt%2BDDgziN12lTkZrgescAV3%2FGmTuEApiwP0%2Ba7YZuMCoeWkZHcapGAG92xWKp4Isy2kBBpgr%2FNbRBeRSBgee%2BVXUU3yRV1uustC1vM%2F88dJ6g6QzyIpzdj2N8C6dXa9yMpTaQYqhaHsaZ29wnmhd0tomia4gSm4bZ%2FmUuV1ztUQuZpsQUAYGNFbPRwaN7XFA2dxDDwR0cewDuo3CvcbW5ecfvHhJr9j3cfuEx2%2FyYxh6Bj%2BXhVvMAooEc%2BxtlI86n%2F4X9qi3UXPXoG0%2FyMbIHpSb3SAoUSxmlEnxRxIYaq8WsYfrEZzRyD7pGBOWopSFgOJDQh4VSwwQuZdmLaIbe2VA5J0ul%2FX%2FRbOmxj8MojBTBTmkjTOyPDlpJU7pEbEx4e5xQIRLxKXMOekYd6N3ZPmJiMa87Wwg%2Fs4%2FccJsJbJwTLuJ2sXJtml4V6s7%2FQ9fSpwmY8pe3gqh9UHk0hJOtMs08BADeDP0CWhhUWXwKF9nn695b9YR3cFi%2Bp65dxh8ypja%2FJ2XWW79%2FYk%2FRAwnpR1%2Bt55jLHbNNqyjXaGBUJF2NKCe59VEnHE%2F2zz%2FBvLcVDcWJkYv%2FTzNUBMKvFudEGOqUBQJnJLX2Qv%2FsMwJVg43KE%2BlHR9kSs9P2lN3wokk5mklKhPkyxal%2BRCpKriUmi8A%2Ft8c4t5Ag640fWJB%2BTB52VWhoIhsfrL%2FogbSHNKei8g2HPx3Aj%2FVfeRlmbRGb8vv%2BlW6g1ZnWosrzURwCo7iidHmjcdXEAH4Kp%2Bz0mu7zuIdX2nVBoCjvvu27Ab188N35SZjH%2ByJl%2BengevLFx99AsSTo8FGm7&X-Amz-Signature=a045d17189e8c72c7d2e9e4c050bbe4b246387e0bb4bbc2a26554e0bc28c19f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VGWRXHBD%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCICkZT9pFVXqCB%2B6j2%2BQEQHC8ZN7TVXfNUVKmpypipAOyAiEAhvlaUlxQkdDUTM6fHf1CfI50J%2F87tczCGB%2BI3UKRFNIq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDPqLpPCmhmppG6tYsircA7sxWZJuDisnuDt1klrRAnoOEEjUHe66o6wbLl4dKXMCduljUr8TpXebzpaQOQF99MKxyTEoEmrEEQAA0vXzUu03WKrGuDdiudvF7h38YQI2WzW%2Bi2kVRgDBbALzdhYyI0SpyCJyaCHIqRzicm6ANqhoMhbptiULF4GtcoAeU5xpI3bOi7pMv%2Bbdo%2FdGn0o7IU1w85zs5oxWXRQQHm0kvBzup7gyeVl1a65HU4Oa6h5d4LRfP4vixq5cTX3JoxKsebGlTEiFUuEv45n9mgsRNgYBTPb7dVrglN4BZYZKRIuRA2Gx5PJiARiWoB0LBy7Z7SKqAKIAxmWHMWYvgSdgMSC836ZY10J6HcWIs9I7Em13uIAbKM1xxqk9OXOIfHl9UJ85waAFt9gAAUHsAyM0%2FQg9KyjISDX8w%2Fp7p59xCTIztJ3aKbB9sfYq7DnOqy9zjeA63WZzAIsb9nZzKEzmNhwy51O%2Fr1eVpBstp5iFvvlA5SwFUPGTA41ZYwzZ4%2B8kmnjgUd9GI1P442OPMOykx4t%2BnC8Zri%2FJT%2BS4Kfb2Cfa5O1SpfbOg8S%2BUsSX1YV2CC2EDN%2FjMHyXSpD0PRILPYmQLfAMyCIEZj0xAd5OwVD8T1rUwv0BRDlKgWJTQMNzFudEGOqUB%2FV4EQKbvQMSV3Rtpm%2BjgA5UpJJl584dFmDoXED%2B%2Fr5rCFhzDcTL45iQoWN9poIiL%2F%2Fl6lV5JQgMQ7YQZXIW%2BAcA9Fugo0skBVLlgIUmYL9VwQ0LxEJPkSr3TlubKn2LBVQZ3jx7Bc3umzQdFmaVp20PqN8kpysDJ5%2BqpkbFumVw4%2BzUHhpG%2FCk1mLmDiTRFygpsS7t4at6XCRd0INN%2FyxfWB0uyn&X-Amz-Signature=5be48e6f34ace828f5b9deab49d4017b714c040490952c506177e8a40ed9d4c6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666QLRSEPF%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDUXascWHOziK8z1MrlKHmEB9IOa2oB9r6YPI8H8en%2BmgIgIMHl%2FRZLMsOn5AhhquTftDSl4SmLYN6YQ2O0Yg%2Bkfloq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDP6hD5vsisI%2FPypafCrcA7602CC3n5QLMxAZXEMlYM12QWw4L2RgsqMetictx7VTOIL3sDt6vWyU%2B0WBwe1MRA6qX3TIpCjpX%2Bw6fMf9AQqLbe%2BiHaZ0OcAQg72JXTelHOJj1ZbXeiOATTg7A9rsdOghFEWXS5LEBU%2FC8NHzDQxGKMC%2BPy1DcyJ8BWyw6VH74qLXjqmR3P4YmZSgshYdN34AdekWe2VlNAwk9slMufVywG%2BFgKt7CO9jfa0YjrI34KmC%2FvCyvWVOQmTp9Mz0SQifr9FGK3G1PADJF%2B6yx1oDJXIEXtzB7E9d%2BzlugaY9hAWIBsRJc9DryGJpbyPtDaX1kEfGmd15CYYULNZ6%2BPPczN3T11WAp%2F2GAXoyxLXW%2FPkZH5qe2HkDw0%2BsJ8dEf4NNaCcTyv0Y9M8S%2FtjQ4bdHl3RenqGj%2Bg%2B6YGhCjQqlHPB%2Bx2X5rRUdg7TLwSoqTAeMfNYNESuw7rzEcPy2Du1yK4XWeSBJff8Zg9rsoPiDDTTiUVddeyVmXHxtTRGUKdzkuu8oFxB%2BAdZZjflQvHazBCVVGHzGLY8c0KlTkxc3uLRxnEPapksamS4ZbLbo4XehdYPQS3G%2BkHwRBVKekHnZmcS9Z2pcBigkJ6u2QbcHg%2FkuMRBpekx1HpKVMIDFudEGOqUBQbf81%2FZJHBU9%2FngobeHaAoOFpT%2F1TO6JYeEG%2BDrhJtf5Ttc0nTSUpziAo%2FY28gNvOtpJle5%2FxJv02vzGVpxnP8%2Bm21VZNLJMCRBDogcw0yj3JjYZ31jtxTj6OPCpSGmrwz8DnaQveAq8kwSsjYSnh5ZgIfjlUPnlQN9aZJdAeWXdScSAliXtZLKbe1wNy7q7AdfSbnVzeOdwZkT9F%2FW8XUw7k50x&X-Amz-Signature=9296fe897b75d4a2196a8ee5ec50492ecafe698927988eb00723babcf0ca675d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4666QLRSEPF%2F20260614%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260614T104747Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEHgaCXVzLXdlc3QtMiJHMEUCIQDUXascWHOziK8z1MrlKHmEB9IOa2oB9r6YPI8H8en%2BmgIgIMHl%2FRZLMsOn5AhhquTftDSl4SmLYN6YQ2O0Yg%2Bkfloq%2FwMIQRAAGgw2Mzc0MjMxODM4MDUiDP6hD5vsisI%2FPypafCrcA7602CC3n5QLMxAZXEMlYM12QWw4L2RgsqMetictx7VTOIL3sDt6vWyU%2B0WBwe1MRA6qX3TIpCjpX%2Bw6fMf9AQqLbe%2BiHaZ0OcAQg72JXTelHOJj1ZbXeiOATTg7A9rsdOghFEWXS5LEBU%2FC8NHzDQxGKMC%2BPy1DcyJ8BWyw6VH74qLXjqmR3P4YmZSgshYdN34AdekWe2VlNAwk9slMufVywG%2BFgKt7CO9jfa0YjrI34KmC%2FvCyvWVOQmTp9Mz0SQifr9FGK3G1PADJF%2B6yx1oDJXIEXtzB7E9d%2BzlugaY9hAWIBsRJc9DryGJpbyPtDaX1kEfGmd15CYYULNZ6%2BPPczN3T11WAp%2F2GAXoyxLXW%2FPkZH5qe2HkDw0%2BsJ8dEf4NNaCcTyv0Y9M8S%2FtjQ4bdHl3RenqGj%2Bg%2B6YGhCjQqlHPB%2Bx2X5rRUdg7TLwSoqTAeMfNYNESuw7rzEcPy2Du1yK4XWeSBJff8Zg9rsoPiDDTTiUVddeyVmXHxtTRGUKdzkuu8oFxB%2BAdZZjflQvHazBCVVGHzGLY8c0KlTkxc3uLRxnEPapksamS4ZbLbo4XehdYPQS3G%2BkHwRBVKekHnZmcS9Z2pcBigkJ6u2QbcHg%2FkuMRBpekx1HpKVMIDFudEGOqUBQbf81%2FZJHBU9%2FngobeHaAoOFpT%2F1TO6JYeEG%2BDrhJtf5Ttc0nTSUpziAo%2FY28gNvOtpJle5%2FxJv02vzGVpxnP8%2Bm21VZNLJMCRBDogcw0yj3JjYZ31jtxTj6OPCpSGmrwz8DnaQveAq8kwSsjYSnh5ZgIfjlUPnlQN9aZJdAeWXdScSAliXtZLKbe1wNy7q7AdfSbnVzeOdwZkT9F%2FW8XUw7k50x&X-Amz-Signature=38af4e876b187f4ea68c89dd64d6e4d353fdaaa88afc9e61ea3fa19a121377a5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
