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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662K2XUCBN%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCdTV4tc7WQ0%2BaAssHh8WPU3AldtJec5n4L6Y9ndT%2FKNgIhANTz6pz5J3O1xQ85TIPazwTjLmQkhqUC3pm46h3jDNPnKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzObOfJfw%2FRLjabzfYq3APCIwckAOMk7hwLRFuyo4jzP5z9mnvSLmTnNkCSQr5dIRwQ1sso1gT7s9RdtV32EfPz2t12VDCyhzLQCLVCCPH6m4STeox2O55PxhKj3fGoHYuK5Y2qvx7J%2FjiaBUOmqVpQdqawFs%2BKVKO5tRqKcQx9CDXaCGMCSxhHPrMGa43hQ6YPHL22CGkzenBSpkMiQalUCd00aL%2FaBtVg8zHk5E4M9ASgRF9hQNtPYydjsBGodXUETXMK083Neilt9S7z9UnkCUsBQ7iPdDQH7QBRNCSKVUsly3HUm6AmPHpXGxKsFMFOEFM5cORWWQXNDTWPxopqJutg8vZOqVR3%2BywXcxJ8muFSdsXxLvfODsnZ0gppfMUYCbY5xO7%2BShBeOl6IWzo9zhblkN4LAhLWKFwoOiirGiTfXqN4elZW%2B2y2GMJSfa9ZLdD%2FSSaGwwG8TgJ%2BnDHQ%2Bp2qoVLXhRHksRmhedEcLUPBD9FizpfGn3veB65Ahgep5gCaFeXUPHeK9R0wGX50xHLa2khcWWdRpMtI341SscKA%2FapHqLFWtaRofG8AsteCZFjyawhoAITofEsb%2FQMDMSO2FAwgkQFyG5aUYI8J8HXcvBVXJvQVmdpqx8WZbXXlvGqovNwwr92dUDD887bPBjqkAQA2jtsjV%2Bfx5rjIuc05cXYdEpY2g2jXn9e0DIzXzGm2bXgct5Kso53riVG%2FLbUgi1ioKbsuD%2BV8kSmZmXPOl1XSxwVT4VUtGlXnUoOmBB8bNiGQfLYAF0XSWiOjuFcx4mOn4q%2Bq1Gvmth%2BAtj6jpnjB00kO43AKDAcPF95Op4olRAJ45IVbKjK6n34ofWCwwf54wsnZ0BVvVH1CzyCIgYYEJiPm&X-Amz-Signature=e26ee39c02a2e082407bcdb56d5ef91d8aac1e1ff6eff570296b110238298cfa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662K2XUCBN%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCdTV4tc7WQ0%2BaAssHh8WPU3AldtJec5n4L6Y9ndT%2FKNgIhANTz6pz5J3O1xQ85TIPazwTjLmQkhqUC3pm46h3jDNPnKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzObOfJfw%2FRLjabzfYq3APCIwckAOMk7hwLRFuyo4jzP5z9mnvSLmTnNkCSQr5dIRwQ1sso1gT7s9RdtV32EfPz2t12VDCyhzLQCLVCCPH6m4STeox2O55PxhKj3fGoHYuK5Y2qvx7J%2FjiaBUOmqVpQdqawFs%2BKVKO5tRqKcQx9CDXaCGMCSxhHPrMGa43hQ6YPHL22CGkzenBSpkMiQalUCd00aL%2FaBtVg8zHk5E4M9ASgRF9hQNtPYydjsBGodXUETXMK083Neilt9S7z9UnkCUsBQ7iPdDQH7QBRNCSKVUsly3HUm6AmPHpXGxKsFMFOEFM5cORWWQXNDTWPxopqJutg8vZOqVR3%2BywXcxJ8muFSdsXxLvfODsnZ0gppfMUYCbY5xO7%2BShBeOl6IWzo9zhblkN4LAhLWKFwoOiirGiTfXqN4elZW%2B2y2GMJSfa9ZLdD%2FSSaGwwG8TgJ%2BnDHQ%2Bp2qoVLXhRHksRmhedEcLUPBD9FizpfGn3veB65Ahgep5gCaFeXUPHeK9R0wGX50xHLa2khcWWdRpMtI341SscKA%2FapHqLFWtaRofG8AsteCZFjyawhoAITofEsb%2FQMDMSO2FAwgkQFyG5aUYI8J8HXcvBVXJvQVmdpqx8WZbXXlvGqovNwwr92dUDD887bPBjqkAQA2jtsjV%2Bfx5rjIuc05cXYdEpY2g2jXn9e0DIzXzGm2bXgct5Kso53riVG%2FLbUgi1ioKbsuD%2BV8kSmZmXPOl1XSxwVT4VUtGlXnUoOmBB8bNiGQfLYAF0XSWiOjuFcx4mOn4q%2Bq1Gvmth%2BAtj6jpnjB00kO43AKDAcPF95Op4olRAJ45IVbKjK6n34ofWCwwf54wsnZ0BVvVH1CzyCIgYYEJiPm&X-Amz-Signature=7933a4bcbddd7f51e72b8eee9df1b2f5435a4bfeaeee13b1251a4715421ec313&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4662K2XUCBN%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCdTV4tc7WQ0%2BaAssHh8WPU3AldtJec5n4L6Y9ndT%2FKNgIhANTz6pz5J3O1xQ85TIPazwTjLmQkhqUC3pm46h3jDNPnKogECKj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzObOfJfw%2FRLjabzfYq3APCIwckAOMk7hwLRFuyo4jzP5z9mnvSLmTnNkCSQr5dIRwQ1sso1gT7s9RdtV32EfPz2t12VDCyhzLQCLVCCPH6m4STeox2O55PxhKj3fGoHYuK5Y2qvx7J%2FjiaBUOmqVpQdqawFs%2BKVKO5tRqKcQx9CDXaCGMCSxhHPrMGa43hQ6YPHL22CGkzenBSpkMiQalUCd00aL%2FaBtVg8zHk5E4M9ASgRF9hQNtPYydjsBGodXUETXMK083Neilt9S7z9UnkCUsBQ7iPdDQH7QBRNCSKVUsly3HUm6AmPHpXGxKsFMFOEFM5cORWWQXNDTWPxopqJutg8vZOqVR3%2BywXcxJ8muFSdsXxLvfODsnZ0gppfMUYCbY5xO7%2BShBeOl6IWzo9zhblkN4LAhLWKFwoOiirGiTfXqN4elZW%2B2y2GMJSfa9ZLdD%2FSSaGwwG8TgJ%2BnDHQ%2Bp2qoVLXhRHksRmhedEcLUPBD9FizpfGn3veB65Ahgep5gCaFeXUPHeK9R0wGX50xHLa2khcWWdRpMtI341SscKA%2FapHqLFWtaRofG8AsteCZFjyawhoAITofEsb%2FQMDMSO2FAwgkQFyG5aUYI8J8HXcvBVXJvQVmdpqx8WZbXXlvGqovNwwr92dUDD887bPBjqkAQA2jtsjV%2Bfx5rjIuc05cXYdEpY2g2jXn9e0DIzXzGm2bXgct5Kso53riVG%2FLbUgi1ioKbsuD%2BV8kSmZmXPOl1XSxwVT4VUtGlXnUoOmBB8bNiGQfLYAF0XSWiOjuFcx4mOn4q%2Bq1Gvmth%2BAtj6jpnjB00kO43AKDAcPF95Op4olRAJ45IVbKjK6n34ofWCwwf54wsnZ0BVvVH1CzyCIgYYEJiPm&X-Amz-Signature=971dc79287cff8cc7434dcc3cac5ed2a13a4c1ca87dc2298beb4418e18106754&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TADA7LVI%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCsDYtR7EjUX1%2Fnii8I6%2BmxpoRNEPYbtjNkrB%2FVNo2YEwIgMvzo8K3kQ90JMlS7AMjGhlhI45i9yOsHUMTAVpSLHZAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJkfzXPSl9v0zfO1JCrcA9eN7Vcsy2KcbiB99Tr%2FWhBDUru2c%2FfMDvX%2BH%2F%2FDemIR%2FTzpqpCFwCdhYlTjbe285ZuC5soIAV3mcu2E0FMZwN0aSb4xQSJuugSLqASLymn2dvdzbtOirjJKS5Cl%2FctDEYAK7ux9eFwro0vegZdYfZNFwvZKyBx8CNntas9pSXMXCu5y%2FogSmYYjuat8U%2BX6vNcf0VqYChwyncJomH57hKEuEN%2B8OZobfClUu9xk8%2F0q3D7WJXd124QCo5Iihb%2FB%2Beh0UwIah992w39xVoEchNPRO4TIkAfP6ItTgPprr6xiPRm1sYrpQBArCzln2N%2BcUWXcvkJaIdvOqj%2FSROu5dmG6gI6hAZKhj3x0eap46dGSZM4MAlSwR4DE5aJh6Xs7ULTSigEnWjvchHS3%2Blr9LmtIREWp7IwaVSokmLWm5WHKWd2OhOrA0ajZmNltvw6s56UeVX6NamuE7QPtzbXlrG2U4vuRwPIP2lCP6%2FwsD87m52FG9ZEQh8pbxl6XUxE0ruWVIzk8Mm9dRG8kvdCkCD%2BNvafSqW2XbJucMJJHnyyZG1xV6lE%2FI%2B5Dgq%2BnMMIBsd%2BHI2WZLigbawMp1QUcxvUOHJcT69rPaqK5%2BKkO4PKZwCwCwWjC%2Bx%2FRe1AxMMzzts8GOqUBW3i8LLgflHQoFnfMLPX%2Feg9ye5RxyRDB17u%2BggnbEz4UDVQfnfTLyvD6NPkUttVuc%2FqqBRqNMsq1bmYbErFgaN6tWwLiQXMES2R2FXCuB675040CTDHUKDm0o0Wf3CHeniCzse5%2FftZQHQDR1%2Fk%2F%2F6YKmB%2BrsY4mVvEGWXnnExmJakHI3voZmCM9xqMSq3jHA1DYtkrRYSogP6abUEd0nLwxGCjZ&X-Amz-Signature=2fbb6aa1797f742aed72fb349237b462e8c8e3dee143b7698f3655e5b30d22ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TADA7LVI%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCsDYtR7EjUX1%2Fnii8I6%2BmxpoRNEPYbtjNkrB%2FVNo2YEwIgMvzo8K3kQ90JMlS7AMjGhlhI45i9yOsHUMTAVpSLHZAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJkfzXPSl9v0zfO1JCrcA9eN7Vcsy2KcbiB99Tr%2FWhBDUru2c%2FfMDvX%2BH%2F%2FDemIR%2FTzpqpCFwCdhYlTjbe285ZuC5soIAV3mcu2E0FMZwN0aSb4xQSJuugSLqASLymn2dvdzbtOirjJKS5Cl%2FctDEYAK7ux9eFwro0vegZdYfZNFwvZKyBx8CNntas9pSXMXCu5y%2FogSmYYjuat8U%2BX6vNcf0VqYChwyncJomH57hKEuEN%2B8OZobfClUu9xk8%2F0q3D7WJXd124QCo5Iihb%2FB%2Beh0UwIah992w39xVoEchNPRO4TIkAfP6ItTgPprr6xiPRm1sYrpQBArCzln2N%2BcUWXcvkJaIdvOqj%2FSROu5dmG6gI6hAZKhj3x0eap46dGSZM4MAlSwR4DE5aJh6Xs7ULTSigEnWjvchHS3%2Blr9LmtIREWp7IwaVSokmLWm5WHKWd2OhOrA0ajZmNltvw6s56UeVX6NamuE7QPtzbXlrG2U4vuRwPIP2lCP6%2FwsD87m52FG9ZEQh8pbxl6XUxE0ruWVIzk8Mm9dRG8kvdCkCD%2BNvafSqW2XbJucMJJHnyyZG1xV6lE%2FI%2B5Dgq%2BnMMIBsd%2BHI2WZLigbawMp1QUcxvUOHJcT69rPaqK5%2BKkO4PKZwCwCwWjC%2Bx%2FRe1AxMMzzts8GOqUBW3i8LLgflHQoFnfMLPX%2Feg9ye5RxyRDB17u%2BggnbEz4UDVQfnfTLyvD6NPkUttVuc%2FqqBRqNMsq1bmYbErFgaN6tWwLiQXMES2R2FXCuB675040CTDHUKDm0o0Wf3CHeniCzse5%2FftZQHQDR1%2Fk%2F%2F6YKmB%2BrsY4mVvEGWXnnExmJakHI3voZmCM9xqMSq3jHA1DYtkrRYSogP6abUEd0nLwxGCjZ&X-Amz-Signature=13f004153ac4207c719cfe7a7241241d033016dcf16ce7a7a5d980542f40cd81&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TADA7LVI%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCsDYtR7EjUX1%2Fnii8I6%2BmxpoRNEPYbtjNkrB%2FVNo2YEwIgMvzo8K3kQ90JMlS7AMjGhlhI45i9yOsHUMTAVpSLHZAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJkfzXPSl9v0zfO1JCrcA9eN7Vcsy2KcbiB99Tr%2FWhBDUru2c%2FfMDvX%2BH%2F%2FDemIR%2FTzpqpCFwCdhYlTjbe285ZuC5soIAV3mcu2E0FMZwN0aSb4xQSJuugSLqASLymn2dvdzbtOirjJKS5Cl%2FctDEYAK7ux9eFwro0vegZdYfZNFwvZKyBx8CNntas9pSXMXCu5y%2FogSmYYjuat8U%2BX6vNcf0VqYChwyncJomH57hKEuEN%2B8OZobfClUu9xk8%2F0q3D7WJXd124QCo5Iihb%2FB%2Beh0UwIah992w39xVoEchNPRO4TIkAfP6ItTgPprr6xiPRm1sYrpQBArCzln2N%2BcUWXcvkJaIdvOqj%2FSROu5dmG6gI6hAZKhj3x0eap46dGSZM4MAlSwR4DE5aJh6Xs7ULTSigEnWjvchHS3%2Blr9LmtIREWp7IwaVSokmLWm5WHKWd2OhOrA0ajZmNltvw6s56UeVX6NamuE7QPtzbXlrG2U4vuRwPIP2lCP6%2FwsD87m52FG9ZEQh8pbxl6XUxE0ruWVIzk8Mm9dRG8kvdCkCD%2BNvafSqW2XbJucMJJHnyyZG1xV6lE%2FI%2B5Dgq%2BnMMIBsd%2BHI2WZLigbawMp1QUcxvUOHJcT69rPaqK5%2BKkO4PKZwCwCwWjC%2Bx%2FRe1AxMMzzts8GOqUBW3i8LLgflHQoFnfMLPX%2Feg9ye5RxyRDB17u%2BggnbEz4UDVQfnfTLyvD6NPkUttVuc%2FqqBRqNMsq1bmYbErFgaN6tWwLiQXMES2R2FXCuB675040CTDHUKDm0o0Wf3CHeniCzse5%2FftZQHQDR1%2Fk%2F%2F6YKmB%2BrsY4mVvEGWXnnExmJakHI3voZmCM9xqMSq3jHA1DYtkrRYSogP6abUEd0nLwxGCjZ&X-Amz-Signature=e7c9c542a9a6b4adfa575812e8298b5e9d2057c2b3175c257abaa96080bb84e1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TADA7LVI%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085949Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCsDYtR7EjUX1%2Fnii8I6%2BmxpoRNEPYbtjNkrB%2FVNo2YEwIgMvzo8K3kQ90JMlS7AMjGhlhI45i9yOsHUMTAVpSLHZAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDJkfzXPSl9v0zfO1JCrcA9eN7Vcsy2KcbiB99Tr%2FWhBDUru2c%2FfMDvX%2BH%2F%2FDemIR%2FTzpqpCFwCdhYlTjbe285ZuC5soIAV3mcu2E0FMZwN0aSb4xQSJuugSLqASLymn2dvdzbtOirjJKS5Cl%2FctDEYAK7ux9eFwro0vegZdYfZNFwvZKyBx8CNntas9pSXMXCu5y%2FogSmYYjuat8U%2BX6vNcf0VqYChwyncJomH57hKEuEN%2B8OZobfClUu9xk8%2F0q3D7WJXd124QCo5Iihb%2FB%2Beh0UwIah992w39xVoEchNPRO4TIkAfP6ItTgPprr6xiPRm1sYrpQBArCzln2N%2BcUWXcvkJaIdvOqj%2FSROu5dmG6gI6hAZKhj3x0eap46dGSZM4MAlSwR4DE5aJh6Xs7ULTSigEnWjvchHS3%2Blr9LmtIREWp7IwaVSokmLWm5WHKWd2OhOrA0ajZmNltvw6s56UeVX6NamuE7QPtzbXlrG2U4vuRwPIP2lCP6%2FwsD87m52FG9ZEQh8pbxl6XUxE0ruWVIzk8Mm9dRG8kvdCkCD%2BNvafSqW2XbJucMJJHnyyZG1xV6lE%2FI%2B5Dgq%2BnMMIBsd%2BHI2WZLigbawMp1QUcxvUOHJcT69rPaqK5%2BKkO4PKZwCwCwWjC%2Bx%2FRe1AxMMzzts8GOqUBW3i8LLgflHQoFnfMLPX%2Feg9ye5RxyRDB17u%2BggnbEz4UDVQfnfTLyvD6NPkUttVuc%2FqqBRqNMsq1bmYbErFgaN6tWwLiQXMES2R2FXCuB675040CTDHUKDm0o0Wf3CHeniCzse5%2FftZQHQDR1%2Fk%2F%2F6YKmB%2BrsY4mVvEGWXnnExmJakHI3voZmCM9xqMSq3jHA1DYtkrRYSogP6abUEd0nLwxGCjZ&X-Amz-Signature=7a79a1efe83e0ece2f4e8b8eeaee64f29b224c4d6b715ec2c6cc89e27d425a93&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46647CGTL2A%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085952Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIDW4fUTJ94UsUuf0eTd1EjXDZrkRDtpON6RvcHPrBuzVAiEA%2FzuVE4Xg629Ph50UWIwD8IKMu95WdLFz7Fe4GJX3aVYqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDNmE9xxTTBfR9VnguyrcAwMOn8xozRV8PPSqMFTlc0EiCjcDKLUzWQWWYNp8n58Q2IVlmL869Vu0UpmMIIfLZj13mqIqFatgef1IN96%2BzuqRk%2BVPsPqFHFA1EAlOIzj2dKhTCDxvatNvG5QCHlTG8gqP2O3jPDkPDUsKHu2kEZuNpUJHpS15bfZCRZB3sL7zgl8usSU9mjyyiDCLv7XwCWfNZSRc3AjrHRSUlfqjooGGayHEv%2BQOqFYu1jKM86SEHVH85Ov0WeLvudjoktgOs1fYYkpN3NgM5oBcFScdRfTwand2QBBHZbHALmYiSXSEw2gaEHVFNLvOTLPyQac0YPBOVa7gW9MtHCDcsMyEvMZlJilmMdrvBl%2B09YxK5wCPGYFqQYHdPXRVue%2FxE4tL629j%2FAzyqGiYM781L3eekmAbu9iLtlTSK7AksO6WdvT4DI23oKgPewd6JWNOP%2F0S0UCgrElTqI2DqoxWzcw7t8MdQ0yw0epKkt1LqHKNRRYXeDO55oasK1SV6q01%2BycPmUbnSqWRwXDxTG5ewAxhFdrq%2F6UKhjEU54kzT2eL%2BCLo39KMwh%2FU9ugn0Qi9F2K8TzyzKTqIygDPojS3n800kNUccyBYQmUjJxbNiPZOUBxThBLbhE5pA0KVrmvNMLTzts8GOqUBIpCefjxsMHMVxq8QTD2LfZetwoPyNzNj2FeVWkqHJveaXeJRlHpMvWNSUI0pesyn3j5WrkvEVqVw5jgJbFHgDiWGwyAhhd681gbMFKPehnSPXFX8RdtTRKW%2F870XsnQXmYsTBlHVUWeM%2BWJy%2Fwa4YiRb1uBT8Nw0U4emBcMDSX%2BVY0V5jRSL1As1Z%2FV63QNgSnMK5YajltTvAqVB7Jt3qsb0eGFg&X-Amz-Signature=7e21bcc6d6c74fda99ae29c6092aeff80c921d486f8236dec1999a63cca9b3e3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667KE3USD5%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC6Lkv3JmgIM3LGSPPq1aO2Baq%2FLsnSo4gdNXvzhewyAAIga%2FlS%2FcxBhDLEuvU3pnA7KYPV7jY%2FM31qvk6hcygOJDAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMieHr8MVaPn8GtHqircA0vGlt6TXn1WmIrU2JmlFSZI05Damva30hvNL5j2HTEw%2Bz9pSHVDqmbXurd6BJs8fMrkR4tu5sOqF8c11m8QItsylBYP0GUP0KSBpmLo0DUCZyLeLfvqT4BNvzo7YNbNQ89IyOJiKTOnffHGGLDa0sX27gcBFIciSwjRPoH4q0%2FFZPtv2iwI2IJ%2FmMM4J8iYKK6YfKW%2FKES85HSbOfyHS1lWbgkUlS9EXT%2BRM%2BaUB%2FVgxXXTIl89g3lRXxAfmt8wbDPdbvpy4ogS7dExYZqyTnsmP9Z0t1wDaR1Tv8aIiJs77oI4xKM5TANm0C8Zdw%2BG%2Bo73otiC%2FggcT0SeYYlQPSooGsgFZovHbddjZXfkdkZCMh7b3js9o5XRE1bFYi%2B%2BjFhJBnLbq7F4Owqpcwcznu9fGe39Uf347O40UgMh79vR2mRiVQisRp8ghTKV%2BxcJHU6mMxS555Su1kjp6HvbOBwbdWaOuYnvLIEoArK61GZhmIb2JHdxayrpL6TAXEdhMwsEPFozY3SDNDgtzVfgmeF%2FTwb2nnOO8fAJ6Vw3pPMqfxqXo9hgMrE9eoZ%2F%2BkLVrhfi%2FYBYZiMb6VyNat1a1N8kHjG7oCIiDQ%2BQgG1dKlRJeLd1u2CpAcVb8plZMKryts8GOqUB2vcwWERKXMXVHRawwoe%2BbB1AUsWAQ%2FUWRS9arTaA9Fscw57n1qsTbKz0hSeVB%2BTDpoIbGTYPF6%2FVUTYbMCoXfQYKmeTTXSi60Cxe2IYuPlMtm3r%2B9FibAfeAaOD6%2FdbfQoTZqUPy7iwJVaQcAIOfEpl%2Fq1QHCBpMxZ1Kv5F3Hb7cAE2ATb5lQgynWfHv03%2BOXXu2559NYN9R9Eu1Vbl1AGR2NW0p&X-Amz-Signature=7ce63bcb9ff9092a5c2ab6ed95a7132f436f076c43d9580baed513da18525c2a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667KE3USD5%2F20260426%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260426T085953Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEN%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQC6Lkv3JmgIM3LGSPPq1aO2Baq%2FLsnSo4gdNXvzhewyAAIga%2FlS%2FcxBhDLEuvU3pnA7KYPV7jY%2FM31qvk6hcygOJDAqiAQIqP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDMieHr8MVaPn8GtHqircA0vGlt6TXn1WmIrU2JmlFSZI05Damva30hvNL5j2HTEw%2Bz9pSHVDqmbXurd6BJs8fMrkR4tu5sOqF8c11m8QItsylBYP0GUP0KSBpmLo0DUCZyLeLfvqT4BNvzo7YNbNQ89IyOJiKTOnffHGGLDa0sX27gcBFIciSwjRPoH4q0%2FFZPtv2iwI2IJ%2FmMM4J8iYKK6YfKW%2FKES85HSbOfyHS1lWbgkUlS9EXT%2BRM%2BaUB%2FVgxXXTIl89g3lRXxAfmt8wbDPdbvpy4ogS7dExYZqyTnsmP9Z0t1wDaR1Tv8aIiJs77oI4xKM5TANm0C8Zdw%2BG%2Bo73otiC%2FggcT0SeYYlQPSooGsgFZovHbddjZXfkdkZCMh7b3js9o5XRE1bFYi%2B%2BjFhJBnLbq7F4Owqpcwcznu9fGe39Uf347O40UgMh79vR2mRiVQisRp8ghTKV%2BxcJHU6mMxS555Su1kjp6HvbOBwbdWaOuYnvLIEoArK61GZhmIb2JHdxayrpL6TAXEdhMwsEPFozY3SDNDgtzVfgmeF%2FTwb2nnOO8fAJ6Vw3pPMqfxqXo9hgMrE9eoZ%2F%2BkLVrhfi%2FYBYZiMb6VyNat1a1N8kHjG7oCIiDQ%2BQgG1dKlRJeLd1u2CpAcVb8plZMKryts8GOqUB2vcwWERKXMXVHRawwoe%2BbB1AUsWAQ%2FUWRS9arTaA9Fscw57n1qsTbKz0hSeVB%2BTDpoIbGTYPF6%2FVUTYbMCoXfQYKmeTTXSi60Cxe2IYuPlMtm3r%2B9FibAfeAaOD6%2FdbfQoTZqUPy7iwJVaQcAIOfEpl%2Fq1QHCBpMxZ1Kv5F3Hb7cAE2ATb5lQgynWfHv03%2BOXXu2559NYN9R9Eu1Vbl1AGR2NW0p&X-Amz-Signature=8fea2148ccbc8e204930d3de40dc51a099e77a435697e4fe4a2b9bf07defe8f0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
