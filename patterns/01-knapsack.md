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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664SHAFICF%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIAQIn1u%2FdqXcdIJZn5xs469QaJQHGY77LYS1I78FBFK2AiAhNOJARluFVULSnGcJ72FcmXMBZyZIXyJs8wrR1LcPAyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8QQUDDEvSOVDykXJKtwDAihJxAj0xbh6l%2FmYMXJ372i7tcG1L8ymH1WC9utqiBEkijiyXEi1FygjBcFQ%2FWBxrKTobCe6EzRwEu27R1RyVIc6iPLfKAXeOV%2BiKusnU7YN6vTIswodGFcdtH5BDtxMgRITRXXs51luZgwiwaamQQ6rUSHWK4vfWlc4nSanTB9HvvlnfN3J47cMAtJiluVqlcUgjnmYQ4emampkwE15qbmMJm7aoKMiPC6sJ8Gh8biiA%2F%2Bd%2F8VRuTAhXatjY9flGjvZHy1SRRIrcj4%2FYHf4Einb0bUsubmWsdlzOIeWkfDVZDegenJGyoqj2GfuOx1erkxedKS8JKxopBSwUz1smSv1ZUlJOsJjnqitE7dM0YXSr4ENCctB1vnSS%2B9qQKdFVuCvPCBnXjQYflIP8yHx0bCINCQpqubvQ6zuUhhn9NKLFihWqJw29JNLw%2Bpwe%2FbOJgpCTNYXVRB1p%2FDLbPbtRfpygNIixlJwKEQ22xm%2FCg5HC9qSM2JzrQOK%2F%2FovCZeTEYeIWk%2FUHtz2NEzF1UzvMclBmkxhYA%2FbYk6XwQe3UwuK3unOZv0QX6f5E5PAvk9bYSvJ03ocZivbn4EpDevrv6sLhJJGWW2A%2FV3%2B9I2uwN95frjEjY6qeyGhV%2FQwkInezQY6pgGbXBrhLVZr9R1X%2BfrSBLHKVNmdzw6Sz2tmxBvq%2F7gUqx1YS4a3sITgYgU6AxPAeG3j%2FYfCReKuajQDaDs9SKj1dL9lFakE9Lg2Q0QGQ52IFn3HstdXSZUnSiEhFG58ZJGLN%2FZYGu0Dixnk%2FvxnGgFX73cqiWDaoVN%2FCP9S%2BWbRf0PrTh7u72JlESxrQgwFkE5Gyv%2F%2Bdh5G1gmy9i%2FIOtEAvV7qM%2BEg&X-Amz-Signature=98bf17c086cb9f6661cade7b9f6b10361084e5b84ba209b4331a85af6c47a37d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664SHAFICF%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIAQIn1u%2FdqXcdIJZn5xs469QaJQHGY77LYS1I78FBFK2AiAhNOJARluFVULSnGcJ72FcmXMBZyZIXyJs8wrR1LcPAyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8QQUDDEvSOVDykXJKtwDAihJxAj0xbh6l%2FmYMXJ372i7tcG1L8ymH1WC9utqiBEkijiyXEi1FygjBcFQ%2FWBxrKTobCe6EzRwEu27R1RyVIc6iPLfKAXeOV%2BiKusnU7YN6vTIswodGFcdtH5BDtxMgRITRXXs51luZgwiwaamQQ6rUSHWK4vfWlc4nSanTB9HvvlnfN3J47cMAtJiluVqlcUgjnmYQ4emampkwE15qbmMJm7aoKMiPC6sJ8Gh8biiA%2F%2Bd%2F8VRuTAhXatjY9flGjvZHy1SRRIrcj4%2FYHf4Einb0bUsubmWsdlzOIeWkfDVZDegenJGyoqj2GfuOx1erkxedKS8JKxopBSwUz1smSv1ZUlJOsJjnqitE7dM0YXSr4ENCctB1vnSS%2B9qQKdFVuCvPCBnXjQYflIP8yHx0bCINCQpqubvQ6zuUhhn9NKLFihWqJw29JNLw%2Bpwe%2FbOJgpCTNYXVRB1p%2FDLbPbtRfpygNIixlJwKEQ22xm%2FCg5HC9qSM2JzrQOK%2F%2FovCZeTEYeIWk%2FUHtz2NEzF1UzvMclBmkxhYA%2FbYk6XwQe3UwuK3unOZv0QX6f5E5PAvk9bYSvJ03ocZivbn4EpDevrv6sLhJJGWW2A%2FV3%2B9I2uwN95frjEjY6qeyGhV%2FQwkInezQY6pgGbXBrhLVZr9R1X%2BfrSBLHKVNmdzw6Sz2tmxBvq%2F7gUqx1YS4a3sITgYgU6AxPAeG3j%2FYfCReKuajQDaDs9SKj1dL9lFakE9Lg2Q0QGQ52IFn3HstdXSZUnSiEhFG58ZJGLN%2FZYGu0Dixnk%2FvxnGgFX73cqiWDaoVN%2FCP9S%2BWbRf0PrTh7u72JlESxrQgwFkE5Gyv%2F%2Bdh5G1gmy9i%2FIOtEAvV7qM%2BEg&X-Amz-Signature=1edcbfa85db8e04eab374e236f4a364afd0bf8e621a637975ba85466abf14dfc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664SHAFICF%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085615Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIAQIn1u%2FdqXcdIJZn5xs469QaJQHGY77LYS1I78FBFK2AiAhNOJARluFVULSnGcJ72FcmXMBZyZIXyJs8wrR1LcPAyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM8QQUDDEvSOVDykXJKtwDAihJxAj0xbh6l%2FmYMXJ372i7tcG1L8ymH1WC9utqiBEkijiyXEi1FygjBcFQ%2FWBxrKTobCe6EzRwEu27R1RyVIc6iPLfKAXeOV%2BiKusnU7YN6vTIswodGFcdtH5BDtxMgRITRXXs51luZgwiwaamQQ6rUSHWK4vfWlc4nSanTB9HvvlnfN3J47cMAtJiluVqlcUgjnmYQ4emampkwE15qbmMJm7aoKMiPC6sJ8Gh8biiA%2F%2Bd%2F8VRuTAhXatjY9flGjvZHy1SRRIrcj4%2FYHf4Einb0bUsubmWsdlzOIeWkfDVZDegenJGyoqj2GfuOx1erkxedKS8JKxopBSwUz1smSv1ZUlJOsJjnqitE7dM0YXSr4ENCctB1vnSS%2B9qQKdFVuCvPCBnXjQYflIP8yHx0bCINCQpqubvQ6zuUhhn9NKLFihWqJw29JNLw%2Bpwe%2FbOJgpCTNYXVRB1p%2FDLbPbtRfpygNIixlJwKEQ22xm%2FCg5HC9qSM2JzrQOK%2F%2FovCZeTEYeIWk%2FUHtz2NEzF1UzvMclBmkxhYA%2FbYk6XwQe3UwuK3unOZv0QX6f5E5PAvk9bYSvJ03ocZivbn4EpDevrv6sLhJJGWW2A%2FV3%2B9I2uwN95frjEjY6qeyGhV%2FQwkInezQY6pgGbXBrhLVZr9R1X%2BfrSBLHKVNmdzw6Sz2tmxBvq%2F7gUqx1YS4a3sITgYgU6AxPAeG3j%2FYfCReKuajQDaDs9SKj1dL9lFakE9Lg2Q0QGQ52IFn3HstdXSZUnSiEhFG58ZJGLN%2FZYGu0Dixnk%2FvxnGgFX73cqiWDaoVN%2FCP9S%2BWbRf0PrTh7u72JlESxrQgwFkE5Gyv%2F%2Bdh5G1gmy9i%2FIOtEAvV7qM%2BEg&X-Amz-Signature=53ab696332dfd4dcdcc213a2b8354fb84131d6541a97bd3ada3986cd174a2b24&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YTW64LK3%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085616Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIHPDnsGkPVMYU2k86kAjsJkzULDerfos%2FjGy%2FazjZxFIAiAXgu0brIbk3ecubWdZMngbYVhzxkYHAk7c4kzcm6OuSyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5wo5EEjY2fNPhKyzKtwDnofXeMwQNa4UFudFT1wNX1Q%2FhvNVsoY1%2BPuA8vNua1GWYELKLbRUd3qGUOHWmec92eTcGq8ZCUi2hfD%2BvgnjaEyfmCUdAFb1kVFXplxeK1CWsAE4Aht%2Fh8Ruf9I2fxUtg9y5U3y1cFmaju2fbPlSCy90AzLve1ws0eEgq6uZqMfsJd3q76J5WtDEH6Dknzj36lZJ%2FGGooHgM%2FOi0%2B5XynJk8bCgeLqn5%2BA2i2WvryJgTRVFvJQ2D6kWvklzZe8prACLwSxR32ASVIml7D1fQP8H60ty%2Bm%2BAW0aQ726mb3R%2BwVG5MAVgp5%2B4UmX945Or77S4xJ1vpv5zq1XdhCtRam37q4DytAhILeybX7b55mT2P33%2Bom%2Ft6JexnTEumRMjSsQUnWOz9DTRDsBuvTxe1zVh4ukQPm2lyLWN3neR1zxhNdybIs3q7tgkVG%2B5fFyUCvJq4AK7I7GXMEGZDMmAi2ydjP7%2BZhd%2FMoy3%2B7FulMxWo%2BGIlMb5IoulEPMhqWm9W%2BBFg5oqAYyHcLyH0b800dTvXwsdbnK5uPxK1xp4RKGEK16ON1xwSSgVhidLCGjKJbQO0AOncXnOgi0KZvZCINAb8x5FUDKoKnTzUCsPWZ4s%2BamXV%2BLYhy2hKjycwgYnezQY6pgHMx2j54FMBIJ8d3dRG%2FUPwxn0oLccIC0ZElHzlyIrEnvRVocHdcqpW7Q8m9WzbmBJjKPPQUKaxzb3zCutCWzWwNZEQ1uzM6G3h6VpPRSdYO%2Fy4f2v%2BzaAtmrLbbKsbWxpltOIt4SUOoPIHu4TdXYyI7CawqrxmgrlRxU2w%2FPVGcUcdWFlAum2Gp6LTMwH9y2t6OAd89aAWLNUdd%2FuEitQ%2Fhce%2B9Css&X-Amz-Signature=d973c8834873b1e6fe1fd841172888d468acc083c52331306f96773cb1b179ef&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YTW64LK3%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085616Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIHPDnsGkPVMYU2k86kAjsJkzULDerfos%2FjGy%2FazjZxFIAiAXgu0brIbk3ecubWdZMngbYVhzxkYHAk7c4kzcm6OuSyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5wo5EEjY2fNPhKyzKtwDnofXeMwQNa4UFudFT1wNX1Q%2FhvNVsoY1%2BPuA8vNua1GWYELKLbRUd3qGUOHWmec92eTcGq8ZCUi2hfD%2BvgnjaEyfmCUdAFb1kVFXplxeK1CWsAE4Aht%2Fh8Ruf9I2fxUtg9y5U3y1cFmaju2fbPlSCy90AzLve1ws0eEgq6uZqMfsJd3q76J5WtDEH6Dknzj36lZJ%2FGGooHgM%2FOi0%2B5XynJk8bCgeLqn5%2BA2i2WvryJgTRVFvJQ2D6kWvklzZe8prACLwSxR32ASVIml7D1fQP8H60ty%2Bm%2BAW0aQ726mb3R%2BwVG5MAVgp5%2B4UmX945Or77S4xJ1vpv5zq1XdhCtRam37q4DytAhILeybX7b55mT2P33%2Bom%2Ft6JexnTEumRMjSsQUnWOz9DTRDsBuvTxe1zVh4ukQPm2lyLWN3neR1zxhNdybIs3q7tgkVG%2B5fFyUCvJq4AK7I7GXMEGZDMmAi2ydjP7%2BZhd%2FMoy3%2B7FulMxWo%2BGIlMb5IoulEPMhqWm9W%2BBFg5oqAYyHcLyH0b800dTvXwsdbnK5uPxK1xp4RKGEK16ON1xwSSgVhidLCGjKJbQO0AOncXnOgi0KZvZCINAb8x5FUDKoKnTzUCsPWZ4s%2BamXV%2BLYhy2hKjycwgYnezQY6pgHMx2j54FMBIJ8d3dRG%2FUPwxn0oLccIC0ZElHzlyIrEnvRVocHdcqpW7Q8m9WzbmBJjKPPQUKaxzb3zCutCWzWwNZEQ1uzM6G3h6VpPRSdYO%2Fy4f2v%2BzaAtmrLbbKsbWxpltOIt4SUOoPIHu4TdXYyI7CawqrxmgrlRxU2w%2FPVGcUcdWFlAum2Gp6LTMwH9y2t6OAd89aAWLNUdd%2FuEitQ%2Fhce%2B9Css&X-Amz-Signature=db5abb5a856f269188e7367257f4d42411df14ad8effb86a763473b9f7acf0aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YTW64LK3%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085616Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIHPDnsGkPVMYU2k86kAjsJkzULDerfos%2FjGy%2FazjZxFIAiAXgu0brIbk3ecubWdZMngbYVhzxkYHAk7c4kzcm6OuSyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5wo5EEjY2fNPhKyzKtwDnofXeMwQNa4UFudFT1wNX1Q%2FhvNVsoY1%2BPuA8vNua1GWYELKLbRUd3qGUOHWmec92eTcGq8ZCUi2hfD%2BvgnjaEyfmCUdAFb1kVFXplxeK1CWsAE4Aht%2Fh8Ruf9I2fxUtg9y5U3y1cFmaju2fbPlSCy90AzLve1ws0eEgq6uZqMfsJd3q76J5WtDEH6Dknzj36lZJ%2FGGooHgM%2FOi0%2B5XynJk8bCgeLqn5%2BA2i2WvryJgTRVFvJQ2D6kWvklzZe8prACLwSxR32ASVIml7D1fQP8H60ty%2Bm%2BAW0aQ726mb3R%2BwVG5MAVgp5%2B4UmX945Or77S4xJ1vpv5zq1XdhCtRam37q4DytAhILeybX7b55mT2P33%2Bom%2Ft6JexnTEumRMjSsQUnWOz9DTRDsBuvTxe1zVh4ukQPm2lyLWN3neR1zxhNdybIs3q7tgkVG%2B5fFyUCvJq4AK7I7GXMEGZDMmAi2ydjP7%2BZhd%2FMoy3%2B7FulMxWo%2BGIlMb5IoulEPMhqWm9W%2BBFg5oqAYyHcLyH0b800dTvXwsdbnK5uPxK1xp4RKGEK16ON1xwSSgVhidLCGjKJbQO0AOncXnOgi0KZvZCINAb8x5FUDKoKnTzUCsPWZ4s%2BamXV%2BLYhy2hKjycwgYnezQY6pgHMx2j54FMBIJ8d3dRG%2FUPwxn0oLccIC0ZElHzlyIrEnvRVocHdcqpW7Q8m9WzbmBJjKPPQUKaxzb3zCutCWzWwNZEQ1uzM6G3h6VpPRSdYO%2Fy4f2v%2BzaAtmrLbbKsbWxpltOIt4SUOoPIHu4TdXYyI7CawqrxmgrlRxU2w%2FPVGcUcdWFlAum2Gp6LTMwH9y2t6OAd89aAWLNUdd%2FuEitQ%2Fhce%2B9Css&X-Amz-Signature=fa6db881738a0f548d7139fb29eb117a48f2eabbff32c5d4f566afa1024ae16c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YTW64LK3%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085616Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJGMEQCIHPDnsGkPVMYU2k86kAjsJkzULDerfos%2FjGy%2FazjZxFIAiAXgu0brIbk3ecubWdZMngbYVhzxkYHAk7c4kzcm6OuSyqIBAjN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5wo5EEjY2fNPhKyzKtwDnofXeMwQNa4UFudFT1wNX1Q%2FhvNVsoY1%2BPuA8vNua1GWYELKLbRUd3qGUOHWmec92eTcGq8ZCUi2hfD%2BvgnjaEyfmCUdAFb1kVFXplxeK1CWsAE4Aht%2Fh8Ruf9I2fxUtg9y5U3y1cFmaju2fbPlSCy90AzLve1ws0eEgq6uZqMfsJd3q76J5WtDEH6Dknzj36lZJ%2FGGooHgM%2FOi0%2B5XynJk8bCgeLqn5%2BA2i2WvryJgTRVFvJQ2D6kWvklzZe8prACLwSxR32ASVIml7D1fQP8H60ty%2Bm%2BAW0aQ726mb3R%2BwVG5MAVgp5%2B4UmX945Or77S4xJ1vpv5zq1XdhCtRam37q4DytAhILeybX7b55mT2P33%2Bom%2Ft6JexnTEumRMjSsQUnWOz9DTRDsBuvTxe1zVh4ukQPm2lyLWN3neR1zxhNdybIs3q7tgkVG%2B5fFyUCvJq4AK7I7GXMEGZDMmAi2ydjP7%2BZhd%2FMoy3%2B7FulMxWo%2BGIlMb5IoulEPMhqWm9W%2BBFg5oqAYyHcLyH0b800dTvXwsdbnK5uPxK1xp4RKGEK16ON1xwSSgVhidLCGjKJbQO0AOncXnOgi0KZvZCINAb8x5FUDKoKnTzUCsPWZ4s%2BamXV%2BLYhy2hKjycwgYnezQY6pgHMx2j54FMBIJ8d3dRG%2FUPwxn0oLccIC0ZElHzlyIrEnvRVocHdcqpW7Q8m9WzbmBJjKPPQUKaxzb3zCutCWzWwNZEQ1uzM6G3h6VpPRSdYO%2Fy4f2v%2BzaAtmrLbbKsbWxpltOIt4SUOoPIHu4TdXYyI7CawqrxmgrlRxU2w%2FPVGcUcdWFlAum2Gp6LTMwH9y2t6OAd89aAWLNUdd%2FuEitQ%2Fhce%2B9Css&X-Amz-Signature=2e8a7a293c4bb26291055392dd1eb4019c9aecac255dacf74a6db73a2b8e62f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XSGM3QV2%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085618Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJHMEUCIGgZOnzGFcNCoC8EG%2BPvOQhcikukbF0xmuO0v7y%2BItfnAiEAxZL%2Bwo8gsblXNfcq90rYFi7dD1NoRhLoaYl57OBuK%2B4qiAQIzf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJMg72RJ%2FQl%2FN7NlkircA3Nq%2Bum0jt1ciH2o1Verb0zhde8nmQ7TMBLcluPkSzid5Mq4cj1Q16SYmFBOtikPr2oAioxuGuusJ%2BRagsjZQvX4IdxHBckJqw9l15j5HDiis%2FhbGlpot6HEVr%2BFDV7hoIcEIIncwDILwgrYVSu7b7a36ZmezB%2BJ6UArO173%2FzDPcafsIzmYfvT4YtDIBEDWBm8XD0TuNxSmX9yZOqY5GG7Mzeuf5T351ZRKtzOPu4j5nV5qe8U6d3%2BhxpnXXXbdT97032t0XRHf0YW4LdpLGtCbmwPAjCQeDJqL9FqkuERqo4Di%2BJa%2BWJ0YD4G1QjlRPqgyTewE%2B%2B0JXY%2BqLWtds0bYjOA2s2AOAJ4YtzQBHuJW8HmpVXS2z5Gv1jpl2n7IkJQdfCw%2BzJ7XaUDnevgubvTNGNUQZ%2FUamhRA5qSoki7dW73fC688rQgr6sXWQFSYlHafMqAqONbH6rETYJnwle0Y1eJzr1ysjvRZIXF3RTi%2B0cWTP9k7QdctFvDdXx6w0vsZeRpR2fUE34XC%2FiWf7JrCoTJebQn8xwX%2BOmZj62qtowdTpQjFkxhCvGkqQ86J3cLpaY3efQkSbF8peu6Uq705AnlTvaCI%2BS%2BiaLhB1BluG4df03yRJziTFMuGMJ6K3s0GOqUB41K%2FY3qv0dXjMfrNOu0JezX8cnozepAMcL4ONJkCtEGFY701v0yg5VeoPv%2BHz6PAuHIKk8m8En87Ed4BySfr6Rl1INm43g7efoUgK3mZlCPTWBxAQ%2Ff6fhTYLHkQcMpXZmfB0EiYtYskcMSnaFxjYF55FlSjW4c2yrrmQLrXon5zzZqgrH%2FdFOW1BqvTEFuZsVA2ukUbzHsULXGF%2FM9P%2BQ3JbrY2&X-Amz-Signature=730b7ae06f51cf516d66ee6d1b5d7a02fbccb5009887cba90985c48cb8840267&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYQ7OIW6%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJIMEYCIQCSU8tRQkjoCny9HTjrrgmtb7De4AWZ9Wp%2FcbLOzD0V%2BgIhALZknD%2FunvOo4OPWzmjhKbqMJKpFFCnX85seCsqVfKYfKogECM3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy8RhSogtKwLMiiXxgq3AOlhOPjw%2BZrMXCOy9u%2FfVd%2BK2mRktzUN53kQDJp11FqlWD43rglUpHK3iUP6oWGdu%2BgwighlJwKIw9dgExAK7%2BBkp3vYlsVt7umGHg%2BKQWy0%2BVLLGdGUPMBQ9MAPnsGzKkKQh%2FMA4FLgoeVqQmVkH35by3LZ8lLlLwBMUhRYT12AKknpv0Nq9oRO2Ce8%2FaOyzRap6Tq4VMd9H203Bu4Idpy6feoKFQwE0jff7eOGYujKwuOkaMYqx3HLHE0gOMhnXdjsLkWbL1KllcYe6VNlZBhD3Pvf6Svuu4GSH2LdVxVyNc%2BP9vpNcgM9HOGI7Ey6iENPVAXU9lzJRb8OdTO%2Fhm1O%2FhAHvejPorPPg8cyCrZMkfPQ%2FGWXzPaRT1gjP0vE6YkJtlVp05%2FBbxSORPRSfgVJFSrxkAMx2pfxRVu2UsbsdyTr7CwZqz81Xe4otjx8GSpQqD8XCmuGFP40OToVB8puQM9adfuej2goFRO2oqJhCkYM3hVUo0ldPmbjcf2vgJ04IcUh%2FgE5CMa%2BTDldfXWYMbxVwkDWYTy79gwoA%2FXciYp%2Fs8xFKeFGp0yVh%2FmyM2FykD0hL0osED9MqbABPWUClKk8fduuJZdE9sWr86jyew5qnxxG7KmTT%2BRcjCFit7NBjqkAbwsToo58KlfIlcXVuWxlIBfCvNmK7q17w0Rl9iftmIUqfLbYfsiSlrKuRY381lvCFAn1PaauQq1oUux8viKK0maP%2Fpa2gQxNcGpIQ01hvlshwKOS7wmYBx8iQ3X%2BJPYAolEQo5cDP7OZ9H0XAfddDBBj%2F%2FIR1tzQ%2FehUYsctJaCWOjlBOVuqqDD07UionHtS2cTPEBCXm9OaWxQ2%2BJmWp90JfDb&X-Amz-Signature=cded66dc79cabef124fd0850336d08dc80ff4d249f06f4598ecb2f7b3d917f83&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RYQ7OIW6%2F20260316%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260316T085619Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAUaCXVzLXdlc3QtMiJIMEYCIQCSU8tRQkjoCny9HTjrrgmtb7De4AWZ9Wp%2FcbLOzD0V%2BgIhALZknD%2FunvOo4OPWzmjhKbqMJKpFFCnX85seCsqVfKYfKogECM3%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igy8RhSogtKwLMiiXxgq3AOlhOPjw%2BZrMXCOy9u%2FfVd%2BK2mRktzUN53kQDJp11FqlWD43rglUpHK3iUP6oWGdu%2BgwighlJwKIw9dgExAK7%2BBkp3vYlsVt7umGHg%2BKQWy0%2BVLLGdGUPMBQ9MAPnsGzKkKQh%2FMA4FLgoeVqQmVkH35by3LZ8lLlLwBMUhRYT12AKknpv0Nq9oRO2Ce8%2FaOyzRap6Tq4VMd9H203Bu4Idpy6feoKFQwE0jff7eOGYujKwuOkaMYqx3HLHE0gOMhnXdjsLkWbL1KllcYe6VNlZBhD3Pvf6Svuu4GSH2LdVxVyNc%2BP9vpNcgM9HOGI7Ey6iENPVAXU9lzJRb8OdTO%2Fhm1O%2FhAHvejPorPPg8cyCrZMkfPQ%2FGWXzPaRT1gjP0vE6YkJtlVp05%2FBbxSORPRSfgVJFSrxkAMx2pfxRVu2UsbsdyTr7CwZqz81Xe4otjx8GSpQqD8XCmuGFP40OToVB8puQM9adfuej2goFRO2oqJhCkYM3hVUo0ldPmbjcf2vgJ04IcUh%2FgE5CMa%2BTDldfXWYMbxVwkDWYTy79gwoA%2FXciYp%2Fs8xFKeFGp0yVh%2FmyM2FykD0hL0osED9MqbABPWUClKk8fduuJZdE9sWr86jyew5qnxxG7KmTT%2BRcjCFit7NBjqkAbwsToo58KlfIlcXVuWxlIBfCvNmK7q17w0Rl9iftmIUqfLbYfsiSlrKuRY381lvCFAn1PaauQq1oUux8viKK0maP%2Fpa2gQxNcGpIQ01hvlshwKOS7wmYBx8iQ3X%2BJPYAolEQo5cDP7OZ9H0XAfddDBBj%2F%2FIR1tzQ%2FehUYsctJaCWOjlBOVuqqDD07UionHtS2cTPEBCXm9OaWxQ2%2BJmWp90JfDb&X-Amz-Signature=7197bb83cb15180d8ad398de407e6c348cbfe058f5864a94f2932d48179e94aa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
