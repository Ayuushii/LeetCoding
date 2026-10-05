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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YQURCZEQ%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJGMEQCIAQ093nuzb6jGypfYMoIg7jKWXau%2FGXK7%2BRlRallq3FUAiAPgNUrLhVLc3CAoy1p%2FYorS%2BESj8W3%2BwYnEzAsJGDtaCqIBAjf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMcmP41Cdpn5UB4DKOKtwDNE%2BhpYMQzioylv3242xbQ0yIk87uS2Zs7Z3QqHt0UKqrXeyGE32dyB9jh5YxH1Bwal0KSlzem0aCNPwkXkvc0TX1VYkoo9oBOA4%2BaL5qVmMlzRM%2FlURKsMdgbfPThkwG0jBSjBPh4Lps4fbnbuocL9Hiwc82IlTgsxYjRnkc8ikdCqgB1ihRos2AK%2BYYQidFBv6pwJb77b%2B0e40DJD6fYkZWIm7TKh1iQA3XPH0OjKWs0XmxrwUKBHaN8UP%2BsEl7jcI5ms7qIkUNIpkac8%2FMr72VoKZwK9fdtoZzohDNw0rayRhBDjvKrEX3r9uV3LbtDKumOrxQ45mYSvsJHFjJ%2FhmWevOMygcJlq9B3%2BN17UAfSaUDh42tvjKhCIwGw97HSjeHk1IssHbOlXSBvN9r8T5SyISz4YFx0bs6A9rkdI2wsfhutso8w4lQe8TRVsG0TLELs0gmPUc%2BpcR20ydaQiDOtd%2BFpOM2lMxbjo3KDxQuVTUXxJiF%2BSDvyTzwdqRnpf1rFcAYIR%2FgLCpaW%2BC10AQwGwlb7px9V41r02HtBTZRDRo9HQ%2BY85YgLJ3Gh6prAfEzWss%2BvjE9mFHG%2F6iOPz9Afna643MUPPabjZzkXpJ%2F67K3mBt%2B184%2Bnb4wkPSO1gY6pgGOtHLT1a%2BscoM1dokvh6T%2BARhutBdbOZOurorAbWjOOeWwepYafrXYYGH1Hg%2BWGPw%2F%2BIHnLLwwdWbdIUXvBBlN51Igrf1h0wAN1%2Fqig3PAGxOMb5mBxc1W20V3mQlVNm4%2BAtSdYi2%2FxP3WQ7vIhkCkpzyOT1M71DNNPbOJiln4FEva44PX2teI1n4t4eRF0JI5eOmHVE6vxwKfntCvC9%2F9T5O5f6QD&X-Amz-Signature=d52c995cf41ad100054e5c75a3262bcfe3935989815f8c116482d8a2fb4685b2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YQURCZEQ%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJGMEQCIAQ093nuzb6jGypfYMoIg7jKWXau%2FGXK7%2BRlRallq3FUAiAPgNUrLhVLc3CAoy1p%2FYorS%2BESj8W3%2BwYnEzAsJGDtaCqIBAjf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMcmP41Cdpn5UB4DKOKtwDNE%2BhpYMQzioylv3242xbQ0yIk87uS2Zs7Z3QqHt0UKqrXeyGE32dyB9jh5YxH1Bwal0KSlzem0aCNPwkXkvc0TX1VYkoo9oBOA4%2BaL5qVmMlzRM%2FlURKsMdgbfPThkwG0jBSjBPh4Lps4fbnbuocL9Hiwc82IlTgsxYjRnkc8ikdCqgB1ihRos2AK%2BYYQidFBv6pwJb77b%2B0e40DJD6fYkZWIm7TKh1iQA3XPH0OjKWs0XmxrwUKBHaN8UP%2BsEl7jcI5ms7qIkUNIpkac8%2FMr72VoKZwK9fdtoZzohDNw0rayRhBDjvKrEX3r9uV3LbtDKumOrxQ45mYSvsJHFjJ%2FhmWevOMygcJlq9B3%2BN17UAfSaUDh42tvjKhCIwGw97HSjeHk1IssHbOlXSBvN9r8T5SyISz4YFx0bs6A9rkdI2wsfhutso8w4lQe8TRVsG0TLELs0gmPUc%2BpcR20ydaQiDOtd%2BFpOM2lMxbjo3KDxQuVTUXxJiF%2BSDvyTzwdqRnpf1rFcAYIR%2FgLCpaW%2BC10AQwGwlb7px9V41r02HtBTZRDRo9HQ%2BY85YgLJ3Gh6prAfEzWss%2BvjE9mFHG%2F6iOPz9Afna643MUPPabjZzkXpJ%2F67K3mBt%2B184%2Bnb4wkPSO1gY6pgGOtHLT1a%2BscoM1dokvh6T%2BARhutBdbOZOurorAbWjOOeWwepYafrXYYGH1Hg%2BWGPw%2F%2BIHnLLwwdWbdIUXvBBlN51Igrf1h0wAN1%2Fqig3PAGxOMb5mBxc1W20V3mQlVNm4%2BAtSdYi2%2FxP3WQ7vIhkCkpzyOT1M71DNNPbOJiln4FEva44PX2teI1n4t4eRF0JI5eOmHVE6vxwKfntCvC9%2F9T5O5f6QD&X-Amz-Signature=74e9fcad0a0f14a81b92ae7f7f7dfc9cf267ce88466f5bf8e7bd3cbeb6375011&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YQURCZEQ%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJGMEQCIAQ093nuzb6jGypfYMoIg7jKWXau%2FGXK7%2BRlRallq3FUAiAPgNUrLhVLc3CAoy1p%2FYorS%2BESj8W3%2BwYnEzAsJGDtaCqIBAjf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMcmP41Cdpn5UB4DKOKtwDNE%2BhpYMQzioylv3242xbQ0yIk87uS2Zs7Z3QqHt0UKqrXeyGE32dyB9jh5YxH1Bwal0KSlzem0aCNPwkXkvc0TX1VYkoo9oBOA4%2BaL5qVmMlzRM%2FlURKsMdgbfPThkwG0jBSjBPh4Lps4fbnbuocL9Hiwc82IlTgsxYjRnkc8ikdCqgB1ihRos2AK%2BYYQidFBv6pwJb77b%2B0e40DJD6fYkZWIm7TKh1iQA3XPH0OjKWs0XmxrwUKBHaN8UP%2BsEl7jcI5ms7qIkUNIpkac8%2FMr72VoKZwK9fdtoZzohDNw0rayRhBDjvKrEX3r9uV3LbtDKumOrxQ45mYSvsJHFjJ%2FhmWevOMygcJlq9B3%2BN17UAfSaUDh42tvjKhCIwGw97HSjeHk1IssHbOlXSBvN9r8T5SyISz4YFx0bs6A9rkdI2wsfhutso8w4lQe8TRVsG0TLELs0gmPUc%2BpcR20ydaQiDOtd%2BFpOM2lMxbjo3KDxQuVTUXxJiF%2BSDvyTzwdqRnpf1rFcAYIR%2FgLCpaW%2BC10AQwGwlb7px9V41r02HtBTZRDRo9HQ%2BY85YgLJ3Gh6prAfEzWss%2BvjE9mFHG%2F6iOPz9Afna643MUPPabjZzkXpJ%2F67K3mBt%2B184%2Bnb4wkPSO1gY6pgGOtHLT1a%2BscoM1dokvh6T%2BARhutBdbOZOurorAbWjOOeWwepYafrXYYGH1Hg%2BWGPw%2F%2BIHnLLwwdWbdIUXvBBlN51Igrf1h0wAN1%2Fqig3PAGxOMb5mBxc1W20V3mQlVNm4%2BAtSdYi2%2FxP3WQ7vIhkCkpzyOT1M71DNNPbOJiln4FEva44PX2teI1n4t4eRF0JI5eOmHVE6vxwKfntCvC9%2F9T5O5f6QD&X-Amz-Signature=3fbdcdbe4b218bb6d97a6e88727a7e49182005662bac9f0408b4fe202bcedb45&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TDIGV6X%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQDr3DjAqSOZBB%2FYRJkdoW7mSid7c4CXoL8anPTAk7gbigIgdd7l32zLZxd2BG92UUhLFOp9XOqJ3%2F9QwIcXrmSOOykqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL2oVM%2BbpqewflhnwyrcAw6pJOI3ihXQCADdPPsxDcuPVaW%2FlA6d75lqAWZ9TH0fAdSmTM2i1g%2F1TpoSpatGd%2F4yAaNXrpmEH1%2FK%2FxbQHjishP%2BdrNHEZxwsclt4EhDd8Sb7wNnoyYrt3Yv4tdWzxqa0XWk8zB0Dl88Ok14srHwJOEuKLJPUEex6Pn0NDqE3OUaCMgRbz%2FPDhr9LJJurhxEx%2Bemfh%2FE2VqiR2OHplQ4%2FGus5jO3%2BP268uS3rpwat2f%2Fj4rxM8XstkYSnK%2FQFVOPkp9nbMFXLLyM3r34sR42y3nFRkmlXJKpUW%2BVK8rSxdr9pxc%2B%2BDwqL5R%2BIRjlh4ArRLQJ7zhU%2FQI18TFQin%2FJL80cLRE82QeAHkDHFJhTyuPoaaVsS0g9NOgnw%2FgXiTNK%2FqYfeDxb6V3nGREYKAz0YdYiADx1AazODyK6j%2BuYsL9CBQ%2F0w%2FhL1EqVjV8CfHtRAQ%2Fs7WK7WpdC1dnV%2FMiNgTLmjoyZpt15lfeAPMXV7uNiyKPtWBVd6vgF%2FdEZvlwRsP5m9pP%2BVtZXt7O2hr7Cy2Z1o0MddUvzr%2FAWiJ8v7K8y9JCDOxfRQTSe%2BVChAjRYzr9fLGkRRCKNMfvWiTRyN9xZf%2BFiG2VpZXviDsnAdoqZya2jqUh%2BVIJSkMLv0jtYGOqUBXVi70PP9GMnjq1OSODN8Jn4jqL%2F9TxxdNGXFMHdEnWYsebMeGDVzcHybesFcTMbUE5pImxS37c1%2FmkdQANMDu%2F2boeTnf3QkryCzZnEA96TMuORCrxHGZKBUZ81ON2Wg%2FamZ0FqKoR%2BuZWMGDAqBVo5ISLY0o8%2FjH8ExUgwPjHpNtuiDKZBSU2N1YZogztmfrYD4RikGEDaRol960cw7F1z6PPeu&X-Amz-Signature=6150fddd4642f2528fb83d6d4d4d491fe8ceae9dfedfb0dbf81469bef003d696&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TDIGV6X%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQDr3DjAqSOZBB%2FYRJkdoW7mSid7c4CXoL8anPTAk7gbigIgdd7l32zLZxd2BG92UUhLFOp9XOqJ3%2F9QwIcXrmSOOykqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL2oVM%2BbpqewflhnwyrcAw6pJOI3ihXQCADdPPsxDcuPVaW%2FlA6d75lqAWZ9TH0fAdSmTM2i1g%2F1TpoSpatGd%2F4yAaNXrpmEH1%2FK%2FxbQHjishP%2BdrNHEZxwsclt4EhDd8Sb7wNnoyYrt3Yv4tdWzxqa0XWk8zB0Dl88Ok14srHwJOEuKLJPUEex6Pn0NDqE3OUaCMgRbz%2FPDhr9LJJurhxEx%2Bemfh%2FE2VqiR2OHplQ4%2FGus5jO3%2BP268uS3rpwat2f%2Fj4rxM8XstkYSnK%2FQFVOPkp9nbMFXLLyM3r34sR42y3nFRkmlXJKpUW%2BVK8rSxdr9pxc%2B%2BDwqL5R%2BIRjlh4ArRLQJ7zhU%2FQI18TFQin%2FJL80cLRE82QeAHkDHFJhTyuPoaaVsS0g9NOgnw%2FgXiTNK%2FqYfeDxb6V3nGREYKAz0YdYiADx1AazODyK6j%2BuYsL9CBQ%2F0w%2FhL1EqVjV8CfHtRAQ%2Fs7WK7WpdC1dnV%2FMiNgTLmjoyZpt15lfeAPMXV7uNiyKPtWBVd6vgF%2FdEZvlwRsP5m9pP%2BVtZXt7O2hr7Cy2Z1o0MddUvzr%2FAWiJ8v7K8y9JCDOxfRQTSe%2BVChAjRYzr9fLGkRRCKNMfvWiTRyN9xZf%2BFiG2VpZXviDsnAdoqZya2jqUh%2BVIJSkMLv0jtYGOqUBXVi70PP9GMnjq1OSODN8Jn4jqL%2F9TxxdNGXFMHdEnWYsebMeGDVzcHybesFcTMbUE5pImxS37c1%2FmkdQANMDu%2F2boeTnf3QkryCzZnEA96TMuORCrxHGZKBUZ81ON2Wg%2FamZ0FqKoR%2BuZWMGDAqBVo5ISLY0o8%2FjH8ExUgwPjHpNtuiDKZBSU2N1YZogztmfrYD4RikGEDaRol960cw7F1z6PPeu&X-Amz-Signature=9a09dfc8692906083261cf7e77e6cb42153915f48b1e2955161f0d18e828b751&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TDIGV6X%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQDr3DjAqSOZBB%2FYRJkdoW7mSid7c4CXoL8anPTAk7gbigIgdd7l32zLZxd2BG92UUhLFOp9XOqJ3%2F9QwIcXrmSOOykqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL2oVM%2BbpqewflhnwyrcAw6pJOI3ihXQCADdPPsxDcuPVaW%2FlA6d75lqAWZ9TH0fAdSmTM2i1g%2F1TpoSpatGd%2F4yAaNXrpmEH1%2FK%2FxbQHjishP%2BdrNHEZxwsclt4EhDd8Sb7wNnoyYrt3Yv4tdWzxqa0XWk8zB0Dl88Ok14srHwJOEuKLJPUEex6Pn0NDqE3OUaCMgRbz%2FPDhr9LJJurhxEx%2Bemfh%2FE2VqiR2OHplQ4%2FGus5jO3%2BP268uS3rpwat2f%2Fj4rxM8XstkYSnK%2FQFVOPkp9nbMFXLLyM3r34sR42y3nFRkmlXJKpUW%2BVK8rSxdr9pxc%2B%2BDwqL5R%2BIRjlh4ArRLQJ7zhU%2FQI18TFQin%2FJL80cLRE82QeAHkDHFJhTyuPoaaVsS0g9NOgnw%2FgXiTNK%2FqYfeDxb6V3nGREYKAz0YdYiADx1AazODyK6j%2BuYsL9CBQ%2F0w%2FhL1EqVjV8CfHtRAQ%2Fs7WK7WpdC1dnV%2FMiNgTLmjoyZpt15lfeAPMXV7uNiyKPtWBVd6vgF%2FdEZvlwRsP5m9pP%2BVtZXt7O2hr7Cy2Z1o0MddUvzr%2FAWiJ8v7K8y9JCDOxfRQTSe%2BVChAjRYzr9fLGkRRCKNMfvWiTRyN9xZf%2BFiG2VpZXviDsnAdoqZya2jqUh%2BVIJSkMLv0jtYGOqUBXVi70PP9GMnjq1OSODN8Jn4jqL%2F9TxxdNGXFMHdEnWYsebMeGDVzcHybesFcTMbUE5pImxS37c1%2FmkdQANMDu%2F2boeTnf3QkryCzZnEA96TMuORCrxHGZKBUZ81ON2Wg%2FamZ0FqKoR%2BuZWMGDAqBVo5ISLY0o8%2FjH8ExUgwPjHpNtuiDKZBSU2N1YZogztmfrYD4RikGEDaRol960cw7F1z6PPeu&X-Amz-Signature=84b99d77b86dcf91e8b2c234efbc2954fae9de33298c31c565ab13e7c7f396d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662TDIGV6X%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQDr3DjAqSOZBB%2FYRJkdoW7mSid7c4CXoL8anPTAk7gbigIgdd7l32zLZxd2BG92UUhLFOp9XOqJ3%2F9QwIcXrmSOOykqiAQI3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDL2oVM%2BbpqewflhnwyrcAw6pJOI3ihXQCADdPPsxDcuPVaW%2FlA6d75lqAWZ9TH0fAdSmTM2i1g%2F1TpoSpatGd%2F4yAaNXrpmEH1%2FK%2FxbQHjishP%2BdrNHEZxwsclt4EhDd8Sb7wNnoyYrt3Yv4tdWzxqa0XWk8zB0Dl88Ok14srHwJOEuKLJPUEex6Pn0NDqE3OUaCMgRbz%2FPDhr9LJJurhxEx%2Bemfh%2FE2VqiR2OHplQ4%2FGus5jO3%2BP268uS3rpwat2f%2Fj4rxM8XstkYSnK%2FQFVOPkp9nbMFXLLyM3r34sR42y3nFRkmlXJKpUW%2BVK8rSxdr9pxc%2B%2BDwqL5R%2BIRjlh4ArRLQJ7zhU%2FQI18TFQin%2FJL80cLRE82QeAHkDHFJhTyuPoaaVsS0g9NOgnw%2FgXiTNK%2FqYfeDxb6V3nGREYKAz0YdYiADx1AazODyK6j%2BuYsL9CBQ%2F0w%2FhL1EqVjV8CfHtRAQ%2Fs7WK7WpdC1dnV%2FMiNgTLmjoyZpt15lfeAPMXV7uNiyKPtWBVd6vgF%2FdEZvlwRsP5m9pP%2BVtZXt7O2hr7Cy2Z1o0MddUvzr%2FAWiJ8v7K8y9JCDOxfRQTSe%2BVChAjRYzr9fLGkRRCKNMfvWiTRyN9xZf%2BFiG2VpZXviDsnAdoqZya2jqUh%2BVIJSkMLv0jtYGOqUBXVi70PP9GMnjq1OSODN8Jn4jqL%2F9TxxdNGXFMHdEnWYsebMeGDVzcHybesFcTMbUE5pImxS37c1%2FmkdQANMDu%2F2boeTnf3QkryCzZnEA96TMuORCrxHGZKBUZ81ON2Wg%2FamZ0FqKoR%2BuZWMGDAqBVo5ISLY0o8%2FjH8ExUgwPjHpNtuiDKZBSU2N1YZogztmfrYD4RikGEDaRol960cw7F1z6PPeu&X-Amz-Signature=b216831eb70a3049bbed8910e58179ec5d8698eef261f7796f1dc9ed9789f295&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466X3BWILOQ%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164845Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJIMEYCIQCk8g6Pr9PBhlN4RfRlHXizV2nbnDRqwkhxUJDkzhSzGAIhAM4Yuj%2FIXFpyVZnVvYdUfq1cxFhCTquJqMw7nYlw8QIvKogECOD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzWhPR8fh8PCY60lkIq3APP%2Fhmv4tfpJxzN4T8%2BnKsmoZVvj0pMZrEup9kbNfV2ETliFJQqYPiKDz6E2oEVth3guHchTXup8V%2BbtChSO139xFZy86O8AE2YcJbm1mK4fRnF5OL5GdcoqpvebzwONsuS5Qe9Y4QuNnotQGne1bjdrN9gJoSYDbwz6d8fqQdEuSsTr4BRqDaHYz9WJq9KCnigEYmZQrR5UOqB2ExsPnJinbeqyiIOXXm7fsLUejr8iLbDR2R%2FGv8BKXkwez%2FBNOAVOjFsSP5L19GsXCvvOjTn1IQSLU0AG0Suh3bSFAfhJlJGnZbpdM3943qNssbnc%2BJo0njs2lbZKve%2BUDIaFUfeywj5jqh1NPxmM3r2PGpu5Ukoq46Ew34vKQ28Xj7%2FGnMj9ibMlsOgIzmxTX8goeW8AMypHOzAGHBk%2BqeVfvyHpjso5%2FzxC%2B2v7PzWt1UOawkEpupR2WIs7gAbYxeAsZgCZYlL8X%2FUtk0ZoPvGYSUBdgGd14PjcEIZoJf7Tu11iqtxIhkxd2ale99CFGB%2FkCJtVeSFWQmJPWvXmR0ycCfespjjXmaZAIXZpKndVqAfA%2F3c6K9v8lQHHaHmjwES9%2Bu%2BngYszgpPZE04oWmnOUvYiHxCiggxIbTwroprtzDa9o7WBjqkAYDigJtzl%2BUW4ajmR6pbhZhHh13f48bcaAQrbMl6bb4XBcQh%2Bwj2jD%2FIN9zpiOwshwnNJxinOA6%2FmTXMXpV5xarin79q57kVvZ4mUeflx9PViDjyyLmOXUdlKwUz8PoqpHXysQpl70JD7VvlfWEnnlJD0W5Y1N19O3lj3biHXNWcfZZ4WjRdjePsiLuh8r3GMTxw3S%2F2KFtZc8Xdo6%2FdQE9Uof%2Bw&X-Amz-Signature=1ccc38b9032afd7f5ff2cae98dc6e2b349e7072c330d92411667d310971b9ecc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYDAMN36%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQC2p1VwDQYWODIsZ39z9DikA%2B%2BcR4onF2RjZtN6pMSZJQIgCMFz5qKND6D4mxIZ6l8rzj3GcImkmgDy9%2FnwMlo4o4YqiAQI4P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEVsT1sgmQfB6M4EGSrcA1bRmLCQa%2BwNU5WoeEbGT5lbBx%2BaUlXlTscMB6%2BKKtVlSQk678aDLTvbTqqKKuYdmAnXKFd51HRWOdlcnhyRmva%2BsBqTw1m7SQtQHsUnPZU0XOjKooD3iu%2BIFJMYPDPiZh0Ad9ydrQgjnAkzznq%2FyViENkVFNXyvnf%2B41lCjQWV%2FahOtsL%2Bmq4OWFZH3g%2FF09HYBtSBRoSYSE%2BwzZdVvmtgDI2rTYr4z4H2uagA9yXxcUVHUrbPmY%2BRa7ELw6UmRDr8h4E8fWJMcGm0Fg%2BUan%2Fk%2Bk8KnRS528HAJ9NEEauZDbsy9qUQ4hzsv63Nfu%2Bh8Erb9XhlvNFEpSom4cV8fvqVk%2BfOrORc%2FTMxuhbvvRUmLNpQ4PNILId0cUs3VXA52XtnetmM%2FP6%2BY3NZwp7%2B5qNNcijzzy0ULysL4VaieQj5WsbjHtYSHlhzBTSV3MIF0uC%2F6bQerWFDidhZ6h0nQEuv8SahgJHoJpiTmw5T6kN9tJ%2F1Xx0P0blC1KcBhfZM1wOhaFFzUScRu%2BAZ%2FPsC5ApRtp53ecA1kdA8DPV%2FuMYg%2B%2BrEGAR2DchpksySmZHfFPUQvgTQQjYX5mx34O3Uh6xenKZ1bgj7ivhuKvvcBVhWIecJwPyMLqDhY9tJtMKf0jtYGOqUBT9N05sHERDGx2MG7k2qUqgu4e%2BnW9ESZI27aGjl4YMMoSxtE3aS%2BS136Hh%2Fkj376D6F4%2Bs%2B057Vk9SMYN%2BcFxFyRQMWeKeDJR3iK6APpm1XYYsCO4mE0U%2FnMFa26XtAvJYzTOcLkMimHXQjkg%2FLh5nQ401ddWhfueuiNO3XypTPLdvSGGAeTqy5CaIl3LCgzp9jJl1n%2Fk4Fr8b9DJsK3oLBowume&X-Amz-Signature=62bbe166f1ed229f5f9d0405672f1cd4e53e0aaa2170b563c2b2d49ebab11e12&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YYDAMN36%2F20261005%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261005T164846Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEBcaCXVzLXdlc3QtMiJHMEUCIQC2p1VwDQYWODIsZ39z9DikA%2B%2BcR4onF2RjZtN6pMSZJQIgCMFz5qKND6D4mxIZ6l8rzj3GcImkmgDy9%2FnwMlo4o4YqiAQI4P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDEVsT1sgmQfB6M4EGSrcA1bRmLCQa%2BwNU5WoeEbGT5lbBx%2BaUlXlTscMB6%2BKKtVlSQk678aDLTvbTqqKKuYdmAnXKFd51HRWOdlcnhyRmva%2BsBqTw1m7SQtQHsUnPZU0XOjKooD3iu%2BIFJMYPDPiZh0Ad9ydrQgjnAkzznq%2FyViENkVFNXyvnf%2B41lCjQWV%2FahOtsL%2Bmq4OWFZH3g%2FF09HYBtSBRoSYSE%2BwzZdVvmtgDI2rTYr4z4H2uagA9yXxcUVHUrbPmY%2BRa7ELw6UmRDr8h4E8fWJMcGm0Fg%2BUan%2Fk%2Bk8KnRS528HAJ9NEEauZDbsy9qUQ4hzsv63Nfu%2Bh8Erb9XhlvNFEpSom4cV8fvqVk%2BfOrORc%2FTMxuhbvvRUmLNpQ4PNILId0cUs3VXA52XtnetmM%2FP6%2BY3NZwp7%2B5qNNcijzzy0ULysL4VaieQj5WsbjHtYSHlhzBTSV3MIF0uC%2F6bQerWFDidhZ6h0nQEuv8SahgJHoJpiTmw5T6kN9tJ%2F1Xx0P0blC1KcBhfZM1wOhaFFzUScRu%2BAZ%2FPsC5ApRtp53ecA1kdA8DPV%2FuMYg%2B%2BrEGAR2DchpksySmZHfFPUQvgTQQjYX5mx34O3Uh6xenKZ1bgj7ivhuKvvcBVhWIecJwPyMLqDhY9tJtMKf0jtYGOqUBT9N05sHERDGx2MG7k2qUqgu4e%2BnW9ESZI27aGjl4YMMoSxtE3aS%2BS136Hh%2Fkj376D6F4%2Bs%2B057Vk9SMYN%2BcFxFyRQMWeKeDJR3iK6APpm1XYYsCO4mE0U%2FnMFa26XtAvJYzTOcLkMimHXQjkg%2FLh5nQ401ddWhfueuiNO3XypTPLdvSGGAeTqy5CaIl3LCgzp9jJl1n%2Fk4Fr8b9DJsK3oLBowume&X-Amz-Signature=f046bfd553d573ad6379c61136fbb8f04ba65a0cc415c949c095174b7f8a9ae6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
