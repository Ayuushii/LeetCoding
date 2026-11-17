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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OUUZ2WO%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIHAB0vRu1gCO9Ebix7FQoUCS0p1NT3AJ7eO4c%2F89IAEbAiEAnJNY%2BhS8KHZjaFBUYb%2B9mK7B4QwWuEO%2FKd0jbT4cHBQqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLgVw5eARjW%2BAaai5SrcA%2F5A62PVluCAvbrKPPStCVh454rs27ppHnvx89lYyd09gP3fCs4G8YfRJ3jTYK6jHAdxPViPnQsFY%2FCd41qDhpayl3TG0cEpmQd0MYKDLHhhaMfpvECxD64%2B5RPVTMlcSEe3slZVMif21vEmmpDOdJDOrdtPrY1moocV4Kbe%2BXV9sAfzHrbPjRtiBqMMXRhJrMVH4GfsrcuejaDfTBh4bcUMIDLerOHXVzIc0o4aa03QSEEkDZvY%2FyteQ8EE17Zcv2r3ti%2FkVICKje%2FLct8N7yl%2BkgAG5MS8s1GCvv71TdH2wdIVLSVtDRO8fxB1w6lY9atysJeTmraRsGRf1j9woUlWGKiMTTjGgpz%2F%2FCWyl0v%2FU38EYGW2HjXrz8Y1DkHpsHASCfMcc%2FKagtcHz5cG2Xmet1WUeFkp5WnepMzKrOoNvHIRiuQ6te4ac3E%2BawMWrMF6ABUUbjPVKObxdYD0u88qa8PI%2Bx5UGNon4ypcjGfF00jUOAMyNgDNJ98YW%2BfJiRs3uwf932pMFl02zlzWCH%2BMmnY5cxINQ5ZNY5lwACkdLw8Dsn0JCdTWfaTSpET4lnWkghUq6MgODoB2hXQm%2BqGSDrmpCIB8w2tt0Co5cilbXJG3rBQQJRuiwv%2FiMOPc8dcGOqUBOCXtrUVSoycn2AfHhf%2Fr60wZbG3AzNVYBc4Cwkp%2Fl1wpGmsYVQgI3rfbFUidJwzkQumWYLw102YC3G2ORWBFa77kqUl5xUZNLlAaMKPVEe9TodiwAJmSvK2MnIe%2FL%2F1%2BFBx5l4HMHAJx1zn9mkaolJg2pxi7jVLOxV0dGTuC2l70hqVGZ4ye196E7ikWBwLKTKmjIa8L9XU4j4JsPxsIgzHa4Hys&X-Amz-Signature=8eb9cd238f5ce09bd1891b416fe25a2c900c875e80f988dc90b69dce49100bd5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OUUZ2WO%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIHAB0vRu1gCO9Ebix7FQoUCS0p1NT3AJ7eO4c%2F89IAEbAiEAnJNY%2BhS8KHZjaFBUYb%2B9mK7B4QwWuEO%2FKd0jbT4cHBQqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLgVw5eARjW%2BAaai5SrcA%2F5A62PVluCAvbrKPPStCVh454rs27ppHnvx89lYyd09gP3fCs4G8YfRJ3jTYK6jHAdxPViPnQsFY%2FCd41qDhpayl3TG0cEpmQd0MYKDLHhhaMfpvECxD64%2B5RPVTMlcSEe3slZVMif21vEmmpDOdJDOrdtPrY1moocV4Kbe%2BXV9sAfzHrbPjRtiBqMMXRhJrMVH4GfsrcuejaDfTBh4bcUMIDLerOHXVzIc0o4aa03QSEEkDZvY%2FyteQ8EE17Zcv2r3ti%2FkVICKje%2FLct8N7yl%2BkgAG5MS8s1GCvv71TdH2wdIVLSVtDRO8fxB1w6lY9atysJeTmraRsGRf1j9woUlWGKiMTTjGgpz%2F%2FCWyl0v%2FU38EYGW2HjXrz8Y1DkHpsHASCfMcc%2FKagtcHz5cG2Xmet1WUeFkp5WnepMzKrOoNvHIRiuQ6te4ac3E%2BawMWrMF6ABUUbjPVKObxdYD0u88qa8PI%2Bx5UGNon4ypcjGfF00jUOAMyNgDNJ98YW%2BfJiRs3uwf932pMFl02zlzWCH%2BMmnY5cxINQ5ZNY5lwACkdLw8Dsn0JCdTWfaTSpET4lnWkghUq6MgODoB2hXQm%2BqGSDrmpCIB8w2tt0Co5cilbXJG3rBQQJRuiwv%2FiMOPc8dcGOqUBOCXtrUVSoycn2AfHhf%2Fr60wZbG3AzNVYBc4Cwkp%2Fl1wpGmsYVQgI3rfbFUidJwzkQumWYLw102YC3G2ORWBFa77kqUl5xUZNLlAaMKPVEe9TodiwAJmSvK2MnIe%2FL%2F1%2BFBx5l4HMHAJx1zn9mkaolJg2pxi7jVLOxV0dGTuC2l70hqVGZ4ye196E7ikWBwLKTKmjIa8L9XU4j4JsPxsIgzHa4Hys&X-Amz-Signature=51ecc026e801f877068503c7e0f47b5c0be2e2bd7e6f8710233ea5decd49b864&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4663OUUZ2WO%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIHAB0vRu1gCO9Ebix7FQoUCS0p1NT3AJ7eO4c%2F89IAEbAiEAnJNY%2BhS8KHZjaFBUYb%2B9mK7B4QwWuEO%2FKd0jbT4cHBQqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDLgVw5eARjW%2BAaai5SrcA%2F5A62PVluCAvbrKPPStCVh454rs27ppHnvx89lYyd09gP3fCs4G8YfRJ3jTYK6jHAdxPViPnQsFY%2FCd41qDhpayl3TG0cEpmQd0MYKDLHhhaMfpvECxD64%2B5RPVTMlcSEe3slZVMif21vEmmpDOdJDOrdtPrY1moocV4Kbe%2BXV9sAfzHrbPjRtiBqMMXRhJrMVH4GfsrcuejaDfTBh4bcUMIDLerOHXVzIc0o4aa03QSEEkDZvY%2FyteQ8EE17Zcv2r3ti%2FkVICKje%2FLct8N7yl%2BkgAG5MS8s1GCvv71TdH2wdIVLSVtDRO8fxB1w6lY9atysJeTmraRsGRf1j9woUlWGKiMTTjGgpz%2F%2FCWyl0v%2FU38EYGW2HjXrz8Y1DkHpsHASCfMcc%2FKagtcHz5cG2Xmet1WUeFkp5WnepMzKrOoNvHIRiuQ6te4ac3E%2BawMWrMF6ABUUbjPVKObxdYD0u88qa8PI%2Bx5UGNon4ypcjGfF00jUOAMyNgDNJ98YW%2BfJiRs3uwf932pMFl02zlzWCH%2BMmnY5cxINQ5ZNY5lwACkdLw8Dsn0JCdTWfaTSpET4lnWkghUq6MgODoB2hXQm%2BqGSDrmpCIB8w2tt0Co5cilbXJG3rBQQJRuiwv%2FiMOPc8dcGOqUBOCXtrUVSoycn2AfHhf%2Fr60wZbG3AzNVYBc4Cwkp%2Fl1wpGmsYVQgI3rfbFUidJwzkQumWYLw102YC3G2ORWBFa77kqUl5xUZNLlAaMKPVEe9TodiwAJmSvK2MnIe%2FL%2F1%2BFBx5l4HMHAJx1zn9mkaolJg2pxi7jVLOxV0dGTuC2l70hqVGZ4ye196E7ikWBwLKTKmjIa8L9XU4j4JsPxsIgzHa4Hys&X-Amz-Signature=77cc4d220fd89309313b27da843470043a03058d80f50e558eaee7e0ea9faff1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3RMLBUW%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIBoSxsgMGobCwtAM%2BH3Roowjf2YFtUAcM6F4rhGq6RlYAiEAxqVB6fkNkhXvv1s29v2N8mZyAu8gbLuNzaa%2FPvqklsAqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHstPmwByDA5jLDH9SrcA%2FQXy4GSEEFKA%2B9kNZbzFf0ZWY9oeq8YF0NZjzojbrmul3g%2BX8uukDVFLyZFfonjxpIAnpBRrrYkEoSiLcShUlJbraAimYeTJFN%2FSIDPkgsNy8jXKWz3gdVxfv4IVUqpXBxVR2j2g621dG7NdGV3jNpRbdc3qfYbPc%2FcSocXBgPpA7jlGc9kQspAMRaTo8CGRNexdd2YMU%2BkEQ4QJB0l9ILCh5FpSbeDVRDAET%2BsJmOJwa5MGAIpCH5L6X5ly3ze%2BG8O%2B4UT8Qs87l33wvR6b%2FP4Mc9WqgjIveZk%2BSwTyZUy6acbelh6sekrATYUUe%2BYtCS3xdL8%2BFH1YKIgO9tGPBj4w9D9AxMi8uspjtMmSToFtZiUMz7f%2BF1WjW%2BNp8y3%2B6hj8Czdxu%2FOoXo1jVjAhgAzaP0My6ZrpwPXYoBsqYjqTBhyY1Whv%2F2ifbL%2BGUKc%2BX6nRjPGqFzvSdG7KeShMIkovBorGuTswrM%2F8o1KcsBLIZM2lu5kchIFL%2FnO3BRtN%2BnzzYjPdZPitHj1qfC7Wf%2Bi%2B5A%2Fb%2FdtHQwiyuah49NbNYlgbE07AQEU%2B8bO1rEfNSpgxhag7oQgsIWzCpjtHLuxoitgnQn9e5qRqI0eTh20GvyGTUPn0dplFOlLMP3a8dcGOqUBV%2BzcWumyAcACrXyGPifbKpFlQjyy0TWy7lGdapfHvXCEBseLD7h55OCzYk9k2nQdOHQI5IIXD0Qh7OgUit1Y7F4XwMNcRUjhN%2BY1jkGpzwfx7j0eW7ULgdQa5MoH8kpG4tVNCyAkSuO5N8Vwgdo%2B9b8lEWshzIvooHgfi3XGMxdEx%2BUJaXUtFLTlFBTG1mN0saDF48NgKU093GHzsQf4BBc1lJVx&X-Amz-Signature=5b5db9f57395569540ef34766d3354cd27aeec681a08831a325e6ec78374ac28&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3RMLBUW%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIBoSxsgMGobCwtAM%2BH3Roowjf2YFtUAcM6F4rhGq6RlYAiEAxqVB6fkNkhXvv1s29v2N8mZyAu8gbLuNzaa%2FPvqklsAqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHstPmwByDA5jLDH9SrcA%2FQXy4GSEEFKA%2B9kNZbzFf0ZWY9oeq8YF0NZjzojbrmul3g%2BX8uukDVFLyZFfonjxpIAnpBRrrYkEoSiLcShUlJbraAimYeTJFN%2FSIDPkgsNy8jXKWz3gdVxfv4IVUqpXBxVR2j2g621dG7NdGV3jNpRbdc3qfYbPc%2FcSocXBgPpA7jlGc9kQspAMRaTo8CGRNexdd2YMU%2BkEQ4QJB0l9ILCh5FpSbeDVRDAET%2BsJmOJwa5MGAIpCH5L6X5ly3ze%2BG8O%2B4UT8Qs87l33wvR6b%2FP4Mc9WqgjIveZk%2BSwTyZUy6acbelh6sekrATYUUe%2BYtCS3xdL8%2BFH1YKIgO9tGPBj4w9D9AxMi8uspjtMmSToFtZiUMz7f%2BF1WjW%2BNp8y3%2B6hj8Czdxu%2FOoXo1jVjAhgAzaP0My6ZrpwPXYoBsqYjqTBhyY1Whv%2F2ifbL%2BGUKc%2BX6nRjPGqFzvSdG7KeShMIkovBorGuTswrM%2F8o1KcsBLIZM2lu5kchIFL%2FnO3BRtN%2BnzzYjPdZPitHj1qfC7Wf%2Bi%2B5A%2Fb%2FdtHQwiyuah49NbNYlgbE07AQEU%2B8bO1rEfNSpgxhag7oQgsIWzCpjtHLuxoitgnQn9e5qRqI0eTh20GvyGTUPn0dplFOlLMP3a8dcGOqUBV%2BzcWumyAcACrXyGPifbKpFlQjyy0TWy7lGdapfHvXCEBseLD7h55OCzYk9k2nQdOHQI5IIXD0Qh7OgUit1Y7F4XwMNcRUjhN%2BY1jkGpzwfx7j0eW7ULgdQa5MoH8kpG4tVNCyAkSuO5N8Vwgdo%2B9b8lEWshzIvooHgfi3XGMxdEx%2BUJaXUtFLTlFBTG1mN0saDF48NgKU093GHzsQf4BBc1lJVx&X-Amz-Signature=67208eaeb6ec39b5c73d91823452d774c93dcfe345a500dba9944c2747e3a88a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3RMLBUW%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIBoSxsgMGobCwtAM%2BH3Roowjf2YFtUAcM6F4rhGq6RlYAiEAxqVB6fkNkhXvv1s29v2N8mZyAu8gbLuNzaa%2FPvqklsAqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHstPmwByDA5jLDH9SrcA%2FQXy4GSEEFKA%2B9kNZbzFf0ZWY9oeq8YF0NZjzojbrmul3g%2BX8uukDVFLyZFfonjxpIAnpBRrrYkEoSiLcShUlJbraAimYeTJFN%2FSIDPkgsNy8jXKWz3gdVxfv4IVUqpXBxVR2j2g621dG7NdGV3jNpRbdc3qfYbPc%2FcSocXBgPpA7jlGc9kQspAMRaTo8CGRNexdd2YMU%2BkEQ4QJB0l9ILCh5FpSbeDVRDAET%2BsJmOJwa5MGAIpCH5L6X5ly3ze%2BG8O%2B4UT8Qs87l33wvR6b%2FP4Mc9WqgjIveZk%2BSwTyZUy6acbelh6sekrATYUUe%2BYtCS3xdL8%2BFH1YKIgO9tGPBj4w9D9AxMi8uspjtMmSToFtZiUMz7f%2BF1WjW%2BNp8y3%2B6hj8Czdxu%2FOoXo1jVjAhgAzaP0My6ZrpwPXYoBsqYjqTBhyY1Whv%2F2ifbL%2BGUKc%2BX6nRjPGqFzvSdG7KeShMIkovBorGuTswrM%2F8o1KcsBLIZM2lu5kchIFL%2FnO3BRtN%2BnzzYjPdZPitHj1qfC7Wf%2Bi%2B5A%2Fb%2FdtHQwiyuah49NbNYlgbE07AQEU%2B8bO1rEfNSpgxhag7oQgsIWzCpjtHLuxoitgnQn9e5qRqI0eTh20GvyGTUPn0dplFOlLMP3a8dcGOqUBV%2BzcWumyAcACrXyGPifbKpFlQjyy0TWy7lGdapfHvXCEBseLD7h55OCzYk9k2nQdOHQI5IIXD0Qh7OgUit1Y7F4XwMNcRUjhN%2BY1jkGpzwfx7j0eW7ULgdQa5MoH8kpG4tVNCyAkSuO5N8Vwgdo%2B9b8lEWshzIvooHgfi3XGMxdEx%2BUJaXUtFLTlFBTG1mN0saDF48NgKU093GHzsQf4BBc1lJVx&X-Amz-Signature=a7c9ee2d5cf178f565c71def7e4223afa855b1af9caf1fef3e066b8d28fe7614&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S3RMLBUW%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172314Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIBoSxsgMGobCwtAM%2BH3Roowjf2YFtUAcM6F4rhGq6RlYAiEAxqVB6fkNkhXvv1s29v2N8mZyAu8gbLuNzaa%2FPvqklsAqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHstPmwByDA5jLDH9SrcA%2FQXy4GSEEFKA%2B9kNZbzFf0ZWY9oeq8YF0NZjzojbrmul3g%2BX8uukDVFLyZFfonjxpIAnpBRrrYkEoSiLcShUlJbraAimYeTJFN%2FSIDPkgsNy8jXKWz3gdVxfv4IVUqpXBxVR2j2g621dG7NdGV3jNpRbdc3qfYbPc%2FcSocXBgPpA7jlGc9kQspAMRaTo8CGRNexdd2YMU%2BkEQ4QJB0l9ILCh5FpSbeDVRDAET%2BsJmOJwa5MGAIpCH5L6X5ly3ze%2BG8O%2B4UT8Qs87l33wvR6b%2FP4Mc9WqgjIveZk%2BSwTyZUy6acbelh6sekrATYUUe%2BYtCS3xdL8%2BFH1YKIgO9tGPBj4w9D9AxMi8uspjtMmSToFtZiUMz7f%2BF1WjW%2BNp8y3%2B6hj8Czdxu%2FOoXo1jVjAhgAzaP0My6ZrpwPXYoBsqYjqTBhyY1Whv%2F2ifbL%2BGUKc%2BX6nRjPGqFzvSdG7KeShMIkovBorGuTswrM%2F8o1KcsBLIZM2lu5kchIFL%2FnO3BRtN%2BnzzYjPdZPitHj1qfC7Wf%2Bi%2B5A%2Fb%2FdtHQwiyuah49NbNYlgbE07AQEU%2B8bO1rEfNSpgxhag7oQgsIWzCpjtHLuxoitgnQn9e5qRqI0eTh20GvyGTUPn0dplFOlLMP3a8dcGOqUBV%2BzcWumyAcACrXyGPifbKpFlQjyy0TWy7lGdapfHvXCEBseLD7h55OCzYk9k2nQdOHQI5IIXD0Qh7OgUit1Y7F4XwMNcRUjhN%2BY1jkGpzwfx7j0eW7ULgdQa5MoH8kpG4tVNCyAkSuO5N8Vwgdo%2B9b8lEWshzIvooHgfi3XGMxdEx%2BUJaXUtFLTlFBTG1mN0saDF48NgKU093GHzsQf4BBc1lJVx&X-Amz-Signature=ace5c855ddd6626a681f7531918aca9dbc23960651b33fd5f775eeb529b058dc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WBVJE47T%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172315Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIQDWb10SSZO1bQm73dLlHIBYT%2F1G%2FqhSlBtC2Ww6PCZZ8AIgVrCig6pXxcUecxkbFZhN0C%2FYTUtzpg07Ftwd3Euo1wMqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCdM%2FOn4%2BFkm8rHC4SrcAx%2BieyAYqlJcjNbRLbuGSEH%2BykpVOWvJtOmFGV98DcO7AOGPFmZAhlHHxIIV0%2F5VgSlcSp8ynpG2tWkgvzf84a%2BRsjYOsDmncrwFiQ2bNJ%2BYXYKYL4n79I3pGjPEKHyJIPo0Yat8dtcpOmiH7Wp%2FZWcKRe7%2BmQVSop9uaRXqhm2ljufJzocPjz6DDLg4uxEOOpD3KhBJrJW3pIMfr2Cc%2F302yhNtZ1biAxuOtkF6rgC871%2FD%2BwmvPLbohhWCwdQPvk%2BpRaZK0i%2BBQNgfK05x8S0UiRnCp8m0Th%2Bqal1JHtjZ3vqyuYvsN8m1Lf4CLMHz4YFZDMJVh8o0a1oLN4an2Nxhf1T8Aw5lcvoZXJIHcSEM%2BVD8NTvQ7Gle4XYltf0el0CyHA8EPx4dgwjGcEGhG9FwuEk96FbWs26Dhbyt9RpcszJW42p%2BvAbWBGgFz15JGYnrOZZBkEgIt%2B5igIjiiSporvRrvc0z2ZQkKTy15jabxRxS13MEynl427JLr2AaCbUTudiofbiiAnIBGF1JrS5%2F8DeGeHpJU%2BC3zUUF37IMbcgOOASwGGU%2F%2B8Gkn5eX9TTpLqFWqTp1Le5oz4y24jONXEpanpo4Z2ISk7f1oWvMlUNaspMipm7Dei8yMODa8dcGOqUBqa4M56AaXVPJUwy3zZ5VndAUsDk%2B4IGZu6pNrKDc7cNL%2F7cuPPQAPSvYx5Il6xQ1yW8xGogPUQQX8lwB%2BVwn6DfHqsaHP9uLbJ4Qber4a3dmWm8TO%2Bft4PulFy92v%2FXF9gkuJhi59IZama27LnQ077lPZz6JO1Hf%2BOUk2DnIxZuY%2BRI0wOM5gwwowkER6fuxOBMYKezSCi%2ByNujJk%2B%2F29kGFm%2FH9&X-Amz-Signature=7b19688d49b3348d3fb35d9e7d1672194c8dc79f72c7c9b5166bb9f99acfbae8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYDPTYAV%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIQDhNXKOH%2B0HLykQQI7F99ka1jqEpEMwun6xo%2F7CPZ0gTQIgdwL%2FVZuuc5St4onezpj6ODkg730u3qhqVkrZaSkh9nQqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPsCwcD39NOC89o4UyrcA5k2az7CRAvJJuntPYNp0B5VGcKpVKingLrDeNFQtgcZC6Ur1WKUybetm4iU7QigDU9FLMqE7AGOUxY4AvzmtQztN6ClxLq%2Bm%2B%2FDv8s9bxGvKceQpoeRvl%2Fl7vJZi5Sl244U%2BiCYUhSJkFmmNNhTBMoSxgArEmyHtYo1ptfwQw1a3m363ymuwQpnYU4Tl%2B5oR9JWfPcKo9ByyeueLW8MtG%2FNf%2F00RuKT4VuVHKBHq%2FuHhWgGVuHEYKA0Mw%2BTfEhFoagtvxo6MzK%2BAq0N53Jxo6hPTELW5Rx6oc9gJ%2Fh9U2HUTQddinaGaT1FVcDiMoWRWaUI67f1Jfk2oUuLYdF7TRHwThcTTtIcfFTTx2KwJQDNNUpSn2%2FN6scK3D3enMK%2Bd5cvrVRlh8gyYzsbHS4VvZsqr4XXsEMGcVVx6w8lcI71pqnc%2BY7xBrlU6uIs0Jtls9CE%2FevP5Yca5EW6CnrJPbsuxiH7AQrnKVwNSvsnxOZHOZ4BhbAypOuBeXO228%2F82hLVEj3kPHta2XwBsKX%2BoQ2vWoRY3lvreVveYlJO%2FByoHM4AAQ357BhQuHjPD44UBVMYjko5AWhazahE4LaFAMSVeh1SucmDDOABc%2F6YOl2o7DVj6hDFOqWXaXrgMLvb8dcGOqUBbfTM3IRLNbgrj3ozd0su65bGJANnvlso7%2B5lSWONUExcHHnN%2FNpxNmD8cH%2BUJXq7aLZb%2B5AbXch5g9xbAX29GUC0NMSnvdxEW0I4Pt42XOTxlteRzGcqDpv2jlUqrEpHj7z0GfcSiAJdCgiYXzNVtM7pDmK5jawGbwHUi22cc6xNud9jEQMPHlDNs80d3UQrpPWf6nE1yAWmYOWxkwxpcg81Y0I7&X-Amz-Signature=96aa446cc83554b58a57d95641092cc2a0663850468c4493ee531a75a19b8bd6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WYDPTYAV%2F20261117%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20261117T172316Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEB8aCXVzLXdlc3QtMiJHMEUCIQDhNXKOH%2B0HLykQQI7F99ka1jqEpEMwun6xo%2F7CPZ0gTQIgdwL%2FVZuuc5St4onezpj6ODkg730u3qhqVkrZaSkh9nQqiAQI6P%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDPsCwcD39NOC89o4UyrcA5k2az7CRAvJJuntPYNp0B5VGcKpVKingLrDeNFQtgcZC6Ur1WKUybetm4iU7QigDU9FLMqE7AGOUxY4AvzmtQztN6ClxLq%2Bm%2B%2FDv8s9bxGvKceQpoeRvl%2Fl7vJZi5Sl244U%2BiCYUhSJkFmmNNhTBMoSxgArEmyHtYo1ptfwQw1a3m363ymuwQpnYU4Tl%2B5oR9JWfPcKo9ByyeueLW8MtG%2FNf%2F00RuKT4VuVHKBHq%2FuHhWgGVuHEYKA0Mw%2BTfEhFoagtvxo6MzK%2BAq0N53Jxo6hPTELW5Rx6oc9gJ%2Fh9U2HUTQddinaGaT1FVcDiMoWRWaUI67f1Jfk2oUuLYdF7TRHwThcTTtIcfFTTx2KwJQDNNUpSn2%2FN6scK3D3enMK%2Bd5cvrVRlh8gyYzsbHS4VvZsqr4XXsEMGcVVx6w8lcI71pqnc%2BY7xBrlU6uIs0Jtls9CE%2FevP5Yca5EW6CnrJPbsuxiH7AQrnKVwNSvsnxOZHOZ4BhbAypOuBeXO228%2F82hLVEj3kPHta2XwBsKX%2BoQ2vWoRY3lvreVveYlJO%2FByoHM4AAQ357BhQuHjPD44UBVMYjko5AWhazahE4LaFAMSVeh1SucmDDOABc%2F6YOl2o7DVj6hDFOqWXaXrgMLvb8dcGOqUBbfTM3IRLNbgrj3ozd0su65bGJANnvlso7%2B5lSWONUExcHHnN%2FNpxNmD8cH%2BUJXq7aLZb%2B5AbXch5g9xbAX29GUC0NMSnvdxEW0I4Pt42XOTxlteRzGcqDpv2jlUqrEpHj7z0GfcSiAJdCgiYXzNVtM7pDmK5jawGbwHUi22cc6xNud9jEQMPHlDNs80d3UQrpPWf6nE1yAWmYOWxkwxpcg81Y0I7&X-Amz-Signature=e0056b9b8d1dd3f328e972fe119cb87b30c2e55a29ef38edfa734d5ea306a39d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
