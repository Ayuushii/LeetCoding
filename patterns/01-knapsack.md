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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMXSPEXR%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9w7XuSAQLqZcd6TVwfgN7JS%2B66%2FCWN8Ch8LFb3Wp4qQIhAIBzm1GqONUxFzk1ilZsi%2BcvbiHD9caDg8hDVnTwhGz4KogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyLioCXFja9aY5X4Ksq3AOytJ9ECsqmII3faNswan3vHuAdN9YlO1Pf0JhljciH6TXAtSuf3RgjUD3108AuM84rit2hh4M%2FwXgJzZHMYQ6znzShXF36i7wSjxMeWkdxoz50HR0rUF9dp8NAkVizFu1RHbxpdZQ%2B7aEETIUYHxYvnxuqwHALugJ%2Fr7sU3q4bpt1CgQlKFzdn3mDRsDaDlZ70EGmX%2B%2BBPnIpt%2B0LDFetuIBbCRAlcncF%2F1gfxuisngJ08QAunrKjvXBNwxGbwSk6eZ9GeISwLDCNIiyBMKbI7aTRB0g2b8YICtYMBa9oeDcx0bnUo%2Fkkj%2FZ74%2FNciVatlLRey1Q9HaSrgzUVbuOxFyxQJ7KE9u2yyOJ1Eok4obCwkquSkUBjqoi4fdYY0gjCv2AGpxAFg4ijflxYGBqr3LrAx8MmzvaiCQXWn%2BwFv58mbb0Op6rY9DtLadyCApzwtnMC4tHujHSr1WEDWuavI0xfqTEHCTn4StkFb4yCt4GRZLLowetg8zw7uoVnbXK6E0uw%2FKjR30NrNIhzc6wX9RbdT8zuXJ94t8EEGU5XZGJ0Fca5Rre37VumnMtvX6VeTr3CB4Z7%2BrUZUxxYRxKlhoeXcAslWjfMJ1c9JIG6xbPVZXJgWIE%2F%2F6zKlCDCSqfLSBjqkAZOgXrMp1vE9EOqGtXyhGSX3Q7zakSR7fGjRiPAHSLexS%2Brz72OtPapm1hiRfjxouF0p1s%2F6T24AXMbjNXAU6kRnLR%2BYaMBF2gicWPZo5HbwbaJGwVa3ri9%2B3yAnNpI8sHLiT7pqK6UizR5CypC6Drp19xQMOfCUULkiqpsP8Z3c%2BEmh0c6zpBTARbaYqIuzE8WKZB5ditZ2MXxIacEXjZDIvYtk&X-Amz-Signature=da9a7c0ade115dbd2abc506805c4b17c85e7b5f6ca08c78adbdcbd57f09879b5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMXSPEXR%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9w7XuSAQLqZcd6TVwfgN7JS%2B66%2FCWN8Ch8LFb3Wp4qQIhAIBzm1GqONUxFzk1ilZsi%2BcvbiHD9caDg8hDVnTwhGz4KogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyLioCXFja9aY5X4Ksq3AOytJ9ECsqmII3faNswan3vHuAdN9YlO1Pf0JhljciH6TXAtSuf3RgjUD3108AuM84rit2hh4M%2FwXgJzZHMYQ6znzShXF36i7wSjxMeWkdxoz50HR0rUF9dp8NAkVizFu1RHbxpdZQ%2B7aEETIUYHxYvnxuqwHALugJ%2Fr7sU3q4bpt1CgQlKFzdn3mDRsDaDlZ70EGmX%2B%2BBPnIpt%2B0LDFetuIBbCRAlcncF%2F1gfxuisngJ08QAunrKjvXBNwxGbwSk6eZ9GeISwLDCNIiyBMKbI7aTRB0g2b8YICtYMBa9oeDcx0bnUo%2Fkkj%2FZ74%2FNciVatlLRey1Q9HaSrgzUVbuOxFyxQJ7KE9u2yyOJ1Eok4obCwkquSkUBjqoi4fdYY0gjCv2AGpxAFg4ijflxYGBqr3LrAx8MmzvaiCQXWn%2BwFv58mbb0Op6rY9DtLadyCApzwtnMC4tHujHSr1WEDWuavI0xfqTEHCTn4StkFb4yCt4GRZLLowetg8zw7uoVnbXK6E0uw%2FKjR30NrNIhzc6wX9RbdT8zuXJ94t8EEGU5XZGJ0Fca5Rre37VumnMtvX6VeTr3CB4Z7%2BrUZUxxYRxKlhoeXcAslWjfMJ1c9JIG6xbPVZXJgWIE%2F%2F6zKlCDCSqfLSBjqkAZOgXrMp1vE9EOqGtXyhGSX3Q7zakSR7fGjRiPAHSLexS%2Brz72OtPapm1hiRfjxouF0p1s%2F6T24AXMbjNXAU6kRnLR%2BYaMBF2gicWPZo5HbwbaJGwVa3ri9%2B3yAnNpI8sHLiT7pqK6UizR5CypC6Drp19xQMOfCUULkiqpsP8Z3c%2BEmh0c6zpBTARbaYqIuzE8WKZB5ditZ2MXxIacEXjZDIvYtk&X-Amz-Signature=bfe052b17da7bafe348f6a872e8154f616f74b789e90eee84207b529ee4131b6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XMXSPEXR%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC9w7XuSAQLqZcd6TVwfgN7JS%2B66%2FCWN8Ch8LFb3Wp4qQIhAIBzm1GqONUxFzk1ilZsi%2BcvbiHD9caDg8hDVnTwhGz4KogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgyLioCXFja9aY5X4Ksq3AOytJ9ECsqmII3faNswan3vHuAdN9YlO1Pf0JhljciH6TXAtSuf3RgjUD3108AuM84rit2hh4M%2FwXgJzZHMYQ6znzShXF36i7wSjxMeWkdxoz50HR0rUF9dp8NAkVizFu1RHbxpdZQ%2B7aEETIUYHxYvnxuqwHALugJ%2Fr7sU3q4bpt1CgQlKFzdn3mDRsDaDlZ70EGmX%2B%2BBPnIpt%2B0LDFetuIBbCRAlcncF%2F1gfxuisngJ08QAunrKjvXBNwxGbwSk6eZ9GeISwLDCNIiyBMKbI7aTRB0g2b8YICtYMBa9oeDcx0bnUo%2Fkkj%2FZ74%2FNciVatlLRey1Q9HaSrgzUVbuOxFyxQJ7KE9u2yyOJ1Eok4obCwkquSkUBjqoi4fdYY0gjCv2AGpxAFg4ijflxYGBqr3LrAx8MmzvaiCQXWn%2BwFv58mbb0Op6rY9DtLadyCApzwtnMC4tHujHSr1WEDWuavI0xfqTEHCTn4StkFb4yCt4GRZLLowetg8zw7uoVnbXK6E0uw%2FKjR30NrNIhzc6wX9RbdT8zuXJ94t8EEGU5XZGJ0Fca5Rre37VumnMtvX6VeTr3CB4Z7%2BrUZUxxYRxKlhoeXcAslWjfMJ1c9JIG6xbPVZXJgWIE%2F%2F6zKlCDCSqfLSBjqkAZOgXrMp1vE9EOqGtXyhGSX3Q7zakSR7fGjRiPAHSLexS%2Brz72OtPapm1hiRfjxouF0p1s%2F6T24AXMbjNXAU6kRnLR%2BYaMBF2gicWPZo5HbwbaJGwVa3ri9%2B3yAnNpI8sHLiT7pqK6UizR5CypC6Drp19xQMOfCUULkiqpsP8Z3c%2BEmh0c6zpBTARbaYqIuzE8WKZB5ditZ2MXxIacEXjZDIvYtk&X-Amz-Signature=98b804c03f1cee16e5b38e1ab268765fb9023bfd95295874ecd65924aae7a5ca&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFXZZJYW%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPC8OWCPfwjEidBJe4ZgTLGih6xzee9ZV%2F9xEWR6iYXwIgdv8Yoq7qDmJJIiUonQPdlHOEnznnrk2HFCghllMKk5oqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFC7zLfNXZvu0K67IyrcAwdqOailE9faaATFDD9cuKcBbTYy2zXDjpFQq9fPpsz6Sb05nwUBPu6zNWwtClreEG1OjJDSvfLgf%2BN55Ucwbm0aSrSp%2FXiGLpCm0TNMZsFvu2EH%2FB6501H7iutE4kBI8guTInjNRyTKgYT%2FL3yyX%2FKW8%2FrCD%2BRf9i0ivh9ERfXPqDcBAwMgmjAS7t%2FsTuquS2JP89np1J3JB%2Bf8BJPWbwRCSIcHoayPv%2B3KEmoof1A0WOkSQlCO64gi20eK0P4xHIE0fbrU9dkOeEfWLy8eh%2F8WYndtsmSWW6EzgC6bqr1ZdsCk%2FLLtdIMQqakvmf4whQrYCvuogH8YialdKwu5PldYkNEitj9OWEPl9ewGiTwA9ejxZaQ8rwTZfFk4WSs9%2FAy%2FWQAnkXjRNZR0mRLUvxLxLSFRsnaXXIEnumVqU4cEtfdfFZZtCrZNMYopgNbbmqhU2w8mLPoafB9mXmryWkqiFuLfqrcUTj%2BMCAuay7jz76OD1xfXw3L908ix%2FMUO1AKgR4pq8i3xPnw2Qk%2B44Ib50G%2FR%2Bdk%2Fyzr36XHqpEwuYcXXgGA%2BVuo892rSDV5T%2F6XWTC8MCxTKveIde4edfBZ9nJdLgVzvIz6ho6JuPfItRIoEH39ylvoRMN2sMJGp8tIGOqUBJDu8r4g2ZWElUAdywtJzOFcHahwJOK6Sni94mmwve215dMQT58QMWdGtG6rPiYk6QthCIFEkVbNNVYwl%2BR6kXQx9n860xrCViF6stbfRgwnGcc0VPHtf01Tyq7dRR1OWahDssxGLXU8RzHcYmURv48VKnvsyZVI8jvEpcxtqdUELYfPxPQqGgLFYf30R22HoR%2FZpfsgE6P3kkrDHlKkl1O69ng0y&X-Amz-Signature=c184c9711a742743e12223fd0f3bbf73871a009be0d0c6f6d8282dbf3b4290f4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFXZZJYW%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPC8OWCPfwjEidBJe4ZgTLGih6xzee9ZV%2F9xEWR6iYXwIgdv8Yoq7qDmJJIiUonQPdlHOEnznnrk2HFCghllMKk5oqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFC7zLfNXZvu0K67IyrcAwdqOailE9faaATFDD9cuKcBbTYy2zXDjpFQq9fPpsz6Sb05nwUBPu6zNWwtClreEG1OjJDSvfLgf%2BN55Ucwbm0aSrSp%2FXiGLpCm0TNMZsFvu2EH%2FB6501H7iutE4kBI8guTInjNRyTKgYT%2FL3yyX%2FKW8%2FrCD%2BRf9i0ivh9ERfXPqDcBAwMgmjAS7t%2FsTuquS2JP89np1J3JB%2Bf8BJPWbwRCSIcHoayPv%2B3KEmoof1A0WOkSQlCO64gi20eK0P4xHIE0fbrU9dkOeEfWLy8eh%2F8WYndtsmSWW6EzgC6bqr1ZdsCk%2FLLtdIMQqakvmf4whQrYCvuogH8YialdKwu5PldYkNEitj9OWEPl9ewGiTwA9ejxZaQ8rwTZfFk4WSs9%2FAy%2FWQAnkXjRNZR0mRLUvxLxLSFRsnaXXIEnumVqU4cEtfdfFZZtCrZNMYopgNbbmqhU2w8mLPoafB9mXmryWkqiFuLfqrcUTj%2BMCAuay7jz76OD1xfXw3L908ix%2FMUO1AKgR4pq8i3xPnw2Qk%2B44Ib50G%2FR%2Bdk%2Fyzr36XHqpEwuYcXXgGA%2BVuo892rSDV5T%2F6XWTC8MCxTKveIde4edfBZ9nJdLgVzvIz6ho6JuPfItRIoEH39ylvoRMN2sMJGp8tIGOqUBJDu8r4g2ZWElUAdywtJzOFcHahwJOK6Sni94mmwve215dMQT58QMWdGtG6rPiYk6QthCIFEkVbNNVYwl%2BR6kXQx9n860xrCViF6stbfRgwnGcc0VPHtf01Tyq7dRR1OWahDssxGLXU8RzHcYmURv48VKnvsyZVI8jvEpcxtqdUELYfPxPQqGgLFYf30R22HoR%2FZpfsgE6P3kkrDHlKkl1O69ng0y&X-Amz-Signature=d505ca1c8772f5aa01802ed9f208956f87df847c2e92325c45ccc35b271cbf6c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFXZZJYW%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPC8OWCPfwjEidBJe4ZgTLGih6xzee9ZV%2F9xEWR6iYXwIgdv8Yoq7qDmJJIiUonQPdlHOEnznnrk2HFCghllMKk5oqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFC7zLfNXZvu0K67IyrcAwdqOailE9faaATFDD9cuKcBbTYy2zXDjpFQq9fPpsz6Sb05nwUBPu6zNWwtClreEG1OjJDSvfLgf%2BN55Ucwbm0aSrSp%2FXiGLpCm0TNMZsFvu2EH%2FB6501H7iutE4kBI8guTInjNRyTKgYT%2FL3yyX%2FKW8%2FrCD%2BRf9i0ivh9ERfXPqDcBAwMgmjAS7t%2FsTuquS2JP89np1J3JB%2Bf8BJPWbwRCSIcHoayPv%2B3KEmoof1A0WOkSQlCO64gi20eK0P4xHIE0fbrU9dkOeEfWLy8eh%2F8WYndtsmSWW6EzgC6bqr1ZdsCk%2FLLtdIMQqakvmf4whQrYCvuogH8YialdKwu5PldYkNEitj9OWEPl9ewGiTwA9ejxZaQ8rwTZfFk4WSs9%2FAy%2FWQAnkXjRNZR0mRLUvxLxLSFRsnaXXIEnumVqU4cEtfdfFZZtCrZNMYopgNbbmqhU2w8mLPoafB9mXmryWkqiFuLfqrcUTj%2BMCAuay7jz76OD1xfXw3L908ix%2FMUO1AKgR4pq8i3xPnw2Qk%2B44Ib50G%2FR%2Bdk%2Fyzr36XHqpEwuYcXXgGA%2BVuo892rSDV5T%2F6XWTC8MCxTKveIde4edfBZ9nJdLgVzvIz6ho6JuPfItRIoEH39ylvoRMN2sMJGp8tIGOqUBJDu8r4g2ZWElUAdywtJzOFcHahwJOK6Sni94mmwve215dMQT58QMWdGtG6rPiYk6QthCIFEkVbNNVYwl%2BR6kXQx9n860xrCViF6stbfRgwnGcc0VPHtf01Tyq7dRR1OWahDssxGLXU8RzHcYmURv48VKnvsyZVI8jvEpcxtqdUELYfPxPQqGgLFYf30R22HoR%2FZpfsgE6P3kkrDHlKkl1O69ng0y&X-Amz-Signature=1f1cafae1d55f1cc643cf1bf5cb2d2a865c4e909637c477cbb50e0b6d0337354&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SFXZZJYW%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095151Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIQCPC8OWCPfwjEidBJe4ZgTLGih6xzee9ZV%2F9xEWR6iYXwIgdv8Yoq7qDmJJIiUonQPdlHOEnznnrk2HFCghllMKk5oqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFC7zLfNXZvu0K67IyrcAwdqOailE9faaATFDD9cuKcBbTYy2zXDjpFQq9fPpsz6Sb05nwUBPu6zNWwtClreEG1OjJDSvfLgf%2BN55Ucwbm0aSrSp%2FXiGLpCm0TNMZsFvu2EH%2FB6501H7iutE4kBI8guTInjNRyTKgYT%2FL3yyX%2FKW8%2FrCD%2BRf9i0ivh9ERfXPqDcBAwMgmjAS7t%2FsTuquS2JP89np1J3JB%2Bf8BJPWbwRCSIcHoayPv%2B3KEmoof1A0WOkSQlCO64gi20eK0P4xHIE0fbrU9dkOeEfWLy8eh%2F8WYndtsmSWW6EzgC6bqr1ZdsCk%2FLLtdIMQqakvmf4whQrYCvuogH8YialdKwu5PldYkNEitj9OWEPl9ewGiTwA9ejxZaQ8rwTZfFk4WSs9%2FAy%2FWQAnkXjRNZR0mRLUvxLxLSFRsnaXXIEnumVqU4cEtfdfFZZtCrZNMYopgNbbmqhU2w8mLPoafB9mXmryWkqiFuLfqrcUTj%2BMCAuay7jz76OD1xfXw3L908ix%2FMUO1AKgR4pq8i3xPnw2Qk%2B44Ib50G%2FR%2Bdk%2Fyzr36XHqpEwuYcXXgGA%2BVuo892rSDV5T%2F6XWTC8MCxTKveIde4edfBZ9nJdLgVzvIz6ho6JuPfItRIoEH39ylvoRMN2sMJGp8tIGOqUBJDu8r4g2ZWElUAdywtJzOFcHahwJOK6Sni94mmwve215dMQT58QMWdGtG6rPiYk6QthCIFEkVbNNVYwl%2BR6kXQx9n860xrCViF6stbfRgwnGcc0VPHtf01Tyq7dRR1OWahDssxGLXU8RzHcYmURv48VKnvsyZVI8jvEpcxtqdUELYfPxPQqGgLFYf30R22HoR%2FZpfsgE6P3kkrDHlKkl1O69ng0y&X-Amz-Signature=8a4b968e1bcfa3e327edd2422cf07e8e339de6dd4cc48b9d94cd9367acd2f2eb&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466TE5WMNBM%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095152Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDVQ9DWL2sRdZsF5im5tlTnuuqqKuiF0R1SHFr5LRZeYwIhAIU0KyhwDESpfZiOalPgsAiALD%2BTvgJ9yZWn2sgqBJXBKogECIr%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgxQxMctzia7i21qoxcq3AMx8oyAOnbgsueSBJ1xOZ29ATBF3k3njVXPb4%2F%2FyihhjLAp8jkeah005%2Fs%2F0cXw8maoao9Qa5p5YOhjdZS456qDWOeO61u4bE7fdEWipc50DSg9ai5pOs%2FYT4rO%2BUK1j6mWmvZYLvpZ38gKBS8gK3G3Kx%2BU%2FL%2B5wjTugtpymTwVPi4KPCDuaVYIJKxcRMLFFJbASPBrth45cTe6%2Fc6C%2FWilkZP8k7vHdcM2M1dxLJ9C27b28CuTrn72JatINipDITeHlx3198bW8d2Cd7GwRez1Np73seOR0cDDzEksH7ft3Dt2VHTOCqKLz6JJvRU6outhEd5s1TmcEhq5hXjfO%2BfC9LaQ9oPKw5fSezQI8jfZyXZocmTCkMteMBqPxoRLDNC2eLkzeeneuSdG63PABfwcyGHsdOX%2FYLvvF4WS41IeYw5urlBBZKEUizZC3FA17ZmJaXbsxCaxnHNPhs3ELbn3v9GWQCyI57Qu0xt87G4j20JlDF4m3ZoIaifai3%2FhxKa8jtPvnoparJuPv2ISNMQ6ZUOQEzdayFGuyZ%2ByuzVxljqVdoh1XnlhWB1i%2FblX8xn98Owdw8ky1bXGb4DiZypVTmlkjPhEDSlANtRp0ljtnp8%2FKL11yKyVuAchvTD9qvLSBjqkAe2T3ggHmkXq7OhoQ8bsAvbAeCkOtjbAsn414RLcchm7qwJEJ0ajT%2BrSRYEvDgxY8rgtrCks2PkAibfcYz4swclKes4QzAOc1aGNIQiZeaw5%2FnONWg7ZGCjfFgfO0VOn1KDsLVCeD%2FMtgQ5olyKGfF5U%2FITt6900s%2BDlmZStYFG1tF8bPLOUSWDNTOauOuu1EevxW7tDO%2Bv9snz2ktKwWmTfxkUI&X-Amz-Signature=25716181e55b2a93139c5f07d555d79e2c7459d88ddf8d1a11b7d03da4817b94&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YTLYCD2%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF6td8Xs2DnejNp6ID2JPxe3LeXyJDcFwLlJyotEKnykAiEA8dQD3%2FFgNkiw3YrXpn0ecmtF3365meE1pk5c3pzLYHcqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOOV90MB7sK%2Fmy%2BDxSrcAzhY7hafuhUskj8O6LHNrsrC%2BYZclcAVKD7Roa420yYnU88g8wKzZE3aDRbWqpxvbcCvBIS9zHm4315k8sdFiGowbH4u2mzR9%2BcWdvCy%2F20z15EGUFwiPiV1V3fVldf6%2FjV6uVxlz5gUprqRZQlZHPVOdFVKBMyCi3Zx908oQBG7uKXBikx93chXPZl4%2BwTlaGSVo%2BHvMqFThAR6XXo6iVXRhiDfWPgggPoenrmCAJ0ZY2VljhM%2BRBZhm7nXSCNB9iw%2Bzne0ccrC1PdIyt74DF1VrgYKnGvBTUo1YxlScv0zA%2Frk1kH%2F6Bh9BQTP1xoMhRbYmyoyW1xGiYvRInq7qMCMy84x0pwYfxzxDa%2BQZRVPBv2iQfd1aNNtLBFU0TasYCkgNyZ6huNdcXkotF3Eo1vrUBsodipFCWZccqDA2zzLJGiThZFl%2BHmBlb5k%2Fo7T21e8CDluYloh0h7O9KbMC4fDyxJFwSwgRbM9w873SWzv5caBAFJj9aPYV%2FvcAmjiQ5E2tFv9Xh%2F0F6tExUcFkeIMzlDkIvOwaIDf0n%2F1eZc%2FtmJB5j%2B8P%2BL0xRgFmZScXH78bJYHv1V6VadnAKhGKyvBSHiE3B%2B27TiyBvLA7uApxnaRP4uQN6cN%2FYkrMJOq8tIGOqUBjrfVdzD6syZqG5wmx0EC8g1mxRTDZjOFRyO%2FLqXPiiZlredPIP%2BnsppjcD8AZQ%2FGR9HKx4POYvmR3jOnINEVxmec4WyzIT81z2gi32VnlG%2FQnE54jo%2Fg3rEDrXzGcTLswwHfDMvNYtLe5ncJ6Ykcg5q9ITmfDLY3mTFB%2FRGvZ8GsVWq7m0bvdAv8ptv7Q9vKjfBbtm5DUgykXWu9pWgnYqVcndeo&X-Amz-Signature=81fbb1746a61e0133540cd03fba860164de64edeca43bc7c015e09f92b124521&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664YTLYCD2%2F20260719%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260719T095153Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEMH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIF6td8Xs2DnejNp6ID2JPxe3LeXyJDcFwLlJyotEKnykAiEA8dQD3%2FFgNkiw3YrXpn0ecmtF3365meE1pk5c3pzLYHcqiAQIiv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDOOV90MB7sK%2Fmy%2BDxSrcAzhY7hafuhUskj8O6LHNrsrC%2BYZclcAVKD7Roa420yYnU88g8wKzZE3aDRbWqpxvbcCvBIS9zHm4315k8sdFiGowbH4u2mzR9%2BcWdvCy%2F20z15EGUFwiPiV1V3fVldf6%2FjV6uVxlz5gUprqRZQlZHPVOdFVKBMyCi3Zx908oQBG7uKXBikx93chXPZl4%2BwTlaGSVo%2BHvMqFThAR6XXo6iVXRhiDfWPgggPoenrmCAJ0ZY2VljhM%2BRBZhm7nXSCNB9iw%2Bzne0ccrC1PdIyt74DF1VrgYKnGvBTUo1YxlScv0zA%2Frk1kH%2F6Bh9BQTP1xoMhRbYmyoyW1xGiYvRInq7qMCMy84x0pwYfxzxDa%2BQZRVPBv2iQfd1aNNtLBFU0TasYCkgNyZ6huNdcXkotF3Eo1vrUBsodipFCWZccqDA2zzLJGiThZFl%2BHmBlb5k%2Fo7T21e8CDluYloh0h7O9KbMC4fDyxJFwSwgRbM9w873SWzv5caBAFJj9aPYV%2FvcAmjiQ5E2tFv9Xh%2F0F6tExUcFkeIMzlDkIvOwaIDf0n%2F1eZc%2FtmJB5j%2B8P%2BL0xRgFmZScXH78bJYHv1V6VadnAKhGKyvBSHiE3B%2B27TiyBvLA7uApxnaRP4uQN6cN%2FYkrMJOq8tIGOqUBjrfVdzD6syZqG5wmx0EC8g1mxRTDZjOFRyO%2FLqXPiiZlredPIP%2BnsppjcD8AZQ%2FGR9HKx4POYvmR3jOnINEVxmec4WyzIT81z2gi32VnlG%2FQnE54jo%2Fg3rEDrXzGcTLswwHfDMvNYtLe5ncJ6Ykcg5q9ITmfDLY3mTFB%2FRGvZ8GsVWq7m0bvdAv8ptv7Q9vKjfBbtm5DUgykXWu9pWgnYqVcndeo&X-Amz-Signature=1caeaa42f5c366b6420d287df732bc8e83d264610127f742e4ab4e5e43ba99ea&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
