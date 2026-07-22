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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664IGEVX6N%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCJG8YgM7NVO%2FYmjZriE0RfxlNxBT5B6pRCxgJwEsMHigIgPhBCVI1xb9fHTvK3nL6VuaYc6AwzC3SDG6z50RE7QjUqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCs3pvczOg1Heg2kMCrcA9zJqVQE5KXkKNpjbYBQW%2BsIpORIhR8l2teSh9C%2F4te%2FFkdivzLTTfHfOqDGMXnCVr33P5YsB9ZAJbIvub5KSNuxcuh3OFNKC%2FZO3d3i4x%2BXaGk5MjxZHkPsjoZmqpjUxWYkwGlwRVbAmUsqjrHmhywZjjZwK3qdNIgf%2BiZ01XkCxdkEEyt%2FNWDm3nWnPtudTFwlOjjJ7yWV7dhAfWISU1n0328f1Ik2wNgGkGjnVDz6%2BobwumIw7LgtdbvLPM8TEe6WK1JwJnVzRB0IK7fNusMfNEC9eRUuNKqr7EP51AIuEoJoZqLdtvPdTf5%2Bmh3GVqS8iIa4yUE3CqCwSLugvIahK8syh6DjIxB8D5XRphfNDbU8wVUaapsz5S2KQ3HZtzJoLVeaZWp5g6WzFJBXW1qbJb31fOdEOmns0PnU1jKqwz0%2B4CmNmZv5%2FWSoCeN8wOb0jovqeolf07lOUbLuTKmEL6nvpJx0ShVrU2dsiFZ4F4pr9Gj8uD1TiwMUqs82Z%2BAnI4bRdwxigV18XxJItJXsPkij%2FE25mVocWBu7fQhQZaYkXz1qykLFUB7rlKFr5SkYe7BcFhGw9U1bL9mAP4KlhSSTVSMBL7Ti3vN5UkWLEk%2FTxzg%2Bx%2Fq9D3TqMPyKgtMGOqUBT%2F84t08TT27U9m%2FEOvAfKfrwz2T%2FKcfDA8yJOp6OmK5eJsmdbzUdu7xbxMtMEkNRt1UagoPW%2B2jtnft12WUFMDmKljuy2IH09iPMqZddO4OMGcf2HaV%2BA4g%2FXXiUmejuf6GZJA015Y86xwHIniBcnd1NNyEsLICQuJ6qku54ctNtg7MYOqJ3xfyt4S0dyD37BVVN16znYQugtx%2B6VKQhoWO10oPe&X-Amz-Signature=f032b6b8341b023de7235b181fe1f75b08202f31d4fa7da16dd782f9a06e409a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664IGEVX6N%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCJG8YgM7NVO%2FYmjZriE0RfxlNxBT5B6pRCxgJwEsMHigIgPhBCVI1xb9fHTvK3nL6VuaYc6AwzC3SDG6z50RE7QjUqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCs3pvczOg1Heg2kMCrcA9zJqVQE5KXkKNpjbYBQW%2BsIpORIhR8l2teSh9C%2F4te%2FFkdivzLTTfHfOqDGMXnCVr33P5YsB9ZAJbIvub5KSNuxcuh3OFNKC%2FZO3d3i4x%2BXaGk5MjxZHkPsjoZmqpjUxWYkwGlwRVbAmUsqjrHmhywZjjZwK3qdNIgf%2BiZ01XkCxdkEEyt%2FNWDm3nWnPtudTFwlOjjJ7yWV7dhAfWISU1n0328f1Ik2wNgGkGjnVDz6%2BobwumIw7LgtdbvLPM8TEe6WK1JwJnVzRB0IK7fNusMfNEC9eRUuNKqr7EP51AIuEoJoZqLdtvPdTf5%2Bmh3GVqS8iIa4yUE3CqCwSLugvIahK8syh6DjIxB8D5XRphfNDbU8wVUaapsz5S2KQ3HZtzJoLVeaZWp5g6WzFJBXW1qbJb31fOdEOmns0PnU1jKqwz0%2B4CmNmZv5%2FWSoCeN8wOb0jovqeolf07lOUbLuTKmEL6nvpJx0ShVrU2dsiFZ4F4pr9Gj8uD1TiwMUqs82Z%2BAnI4bRdwxigV18XxJItJXsPkij%2FE25mVocWBu7fQhQZaYkXz1qykLFUB7rlKFr5SkYe7BcFhGw9U1bL9mAP4KlhSSTVSMBL7Ti3vN5UkWLEk%2FTxzg%2Bx%2Fq9D3TqMPyKgtMGOqUBT%2F84t08TT27U9m%2FEOvAfKfrwz2T%2FKcfDA8yJOp6OmK5eJsmdbzUdu7xbxMtMEkNRt1UagoPW%2B2jtnft12WUFMDmKljuy2IH09iPMqZddO4OMGcf2HaV%2BA4g%2FXXiUmejuf6GZJA015Y86xwHIniBcnd1NNyEsLICQuJ6qku54ctNtg7MYOqJ3xfyt4S0dyD37BVVN16znYQugtx%2B6VKQhoWO10oPe&X-Amz-Signature=2953d3bd39495825abbc624ec29578d519cf3a7edbc3f6912a70ca54c4c48599&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664IGEVX6N%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCJG8YgM7NVO%2FYmjZriE0RfxlNxBT5B6pRCxgJwEsMHigIgPhBCVI1xb9fHTvK3nL6VuaYc6AwzC3SDG6z50RE7QjUqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCs3pvczOg1Heg2kMCrcA9zJqVQE5KXkKNpjbYBQW%2BsIpORIhR8l2teSh9C%2F4te%2FFkdivzLTTfHfOqDGMXnCVr33P5YsB9ZAJbIvub5KSNuxcuh3OFNKC%2FZO3d3i4x%2BXaGk5MjxZHkPsjoZmqpjUxWYkwGlwRVbAmUsqjrHmhywZjjZwK3qdNIgf%2BiZ01XkCxdkEEyt%2FNWDm3nWnPtudTFwlOjjJ7yWV7dhAfWISU1n0328f1Ik2wNgGkGjnVDz6%2BobwumIw7LgtdbvLPM8TEe6WK1JwJnVzRB0IK7fNusMfNEC9eRUuNKqr7EP51AIuEoJoZqLdtvPdTf5%2Bmh3GVqS8iIa4yUE3CqCwSLugvIahK8syh6DjIxB8D5XRphfNDbU8wVUaapsz5S2KQ3HZtzJoLVeaZWp5g6WzFJBXW1qbJb31fOdEOmns0PnU1jKqwz0%2B4CmNmZv5%2FWSoCeN8wOb0jovqeolf07lOUbLuTKmEL6nvpJx0ShVrU2dsiFZ4F4pr9Gj8uD1TiwMUqs82Z%2BAnI4bRdwxigV18XxJItJXsPkij%2FE25mVocWBu7fQhQZaYkXz1qykLFUB7rlKFr5SkYe7BcFhGw9U1bL9mAP4KlhSSTVSMBL7Ti3vN5UkWLEk%2FTxzg%2Bx%2Fq9D3TqMPyKgtMGOqUBT%2F84t08TT27U9m%2FEOvAfKfrwz2T%2FKcfDA8yJOp6OmK5eJsmdbzUdu7xbxMtMEkNRt1UagoPW%2B2jtnft12WUFMDmKljuy2IH09iPMqZddO4OMGcf2HaV%2BA4g%2FXXiUmejuf6GZJA015Y86xwHIniBcnd1NNyEsLICQuJ6qku54ctNtg7MYOqJ3xfyt4S0dyD37BVVN16znYQugtx%2B6VKQhoWO10oPe&X-Amz-Signature=6ff60351f037f57ca6ab3af07771a50dae3048b08eed08ce36588f62a71b60d9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF74EQX7%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQDItfo%2BqH62nG%2BDYOXXXM%2BjWe43LHR%2FHdVKgpeD0Cth%2BAIgXi8Pr%2BaI9xQnrJfJUBCtSNAYHkNNOnYla%2BGgzmhfzRYqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIsvanjfognZnz1CMyrcA%2Byi6RVJ3xS2v2Ei33sBLkLGQ4ofMjCws1TFZ%2F6Qcd98Yy%2Fznz32Gvc3yY3UT9CFsmDHVpGqAreVsdoi%2FPXR8%2BlMEcudoBf2jFlIn%2BBFCetAXH3QTAXiJlCf7hBr%2BPd7eXSDqJw3mTeLoOmmGe2sLfeaaWwR52tA8hq6fB%2BAvRNQOgs8Y3a%2Bsm09SZmiV14GLT44QgLCkW8q6oGFGLHtMGOma1atxLWMSa9Hw59HGrjxLdl3Zef1z5d57gihxL7NMPCIvrdG0cNm92pX6QopRYN7u8qLLPi9DQlvBAJHFx8johX7uzX%2FD57yuz8I%2BPToAN1TabtY7V1ZIj7qXulunytmSa7bjaouUGql5Boe2PNrv%2Be8%2BSKo0GCCEPkBCKYcdzCsgqBuJ7VLPIIdp68bUtLR%2FrrbBxOYn2iHLH3G9e87GziRu5TuFtduF9xDFW6LalXvxcRoaPAI3hU2iEsdFJEdi0hATy8MXKVNGqYySV9WJhs0zKm%2BmVAM%2F8EL9phDiMavlMz0SmG4oYPaJUN4RkAjSWmcNc18nwq6RiCXYh8pNdLbdfdWm9fvMMNMU21kRrsnab2rKy%2BUtTPZztBmY60aOmVV%2Fs1lE9FdrrDYYvONosjQ9ad9QlKUYcyXMPuKgtMGOqUBZR56EYvfr5%2FGC7KBQMTunwjUfsJcDtS%2B%2BD8rl0OnPLgL5TsIp3avSkPMU9cNuXw3hTOhCnOdOycMCiLwLIQShC8jA%2Fd6UwY9q4wBZiBH4DdO2o6INCWO7N4ebK0H46yEVuORqySKc%2FTprN9T9I5t7Mcq04aBtTn%2BXq1XR7xx4E51iZ2Ddd19YL4sXSo1Fb2WAeSWp%2FTBswYEaXtgzXFWDMK013xJ&X-Amz-Signature=2fbca5d9db2f3c23383b2361fcfbde4408eba5852f4c67df8db86cd00026412e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF74EQX7%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQDItfo%2BqH62nG%2BDYOXXXM%2BjWe43LHR%2FHdVKgpeD0Cth%2BAIgXi8Pr%2BaI9xQnrJfJUBCtSNAYHkNNOnYla%2BGgzmhfzRYqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIsvanjfognZnz1CMyrcA%2Byi6RVJ3xS2v2Ei33sBLkLGQ4ofMjCws1TFZ%2F6Qcd98Yy%2Fznz32Gvc3yY3UT9CFsmDHVpGqAreVsdoi%2FPXR8%2BlMEcudoBf2jFlIn%2BBFCetAXH3QTAXiJlCf7hBr%2BPd7eXSDqJw3mTeLoOmmGe2sLfeaaWwR52tA8hq6fB%2BAvRNQOgs8Y3a%2Bsm09SZmiV14GLT44QgLCkW8q6oGFGLHtMGOma1atxLWMSa9Hw59HGrjxLdl3Zef1z5d57gihxL7NMPCIvrdG0cNm92pX6QopRYN7u8qLLPi9DQlvBAJHFx8johX7uzX%2FD57yuz8I%2BPToAN1TabtY7V1ZIj7qXulunytmSa7bjaouUGql5Boe2PNrv%2Be8%2BSKo0GCCEPkBCKYcdzCsgqBuJ7VLPIIdp68bUtLR%2FrrbBxOYn2iHLH3G9e87GziRu5TuFtduF9xDFW6LalXvxcRoaPAI3hU2iEsdFJEdi0hATy8MXKVNGqYySV9WJhs0zKm%2BmVAM%2F8EL9phDiMavlMz0SmG4oYPaJUN4RkAjSWmcNc18nwq6RiCXYh8pNdLbdfdWm9fvMMNMU21kRrsnab2rKy%2BUtTPZztBmY60aOmVV%2Fs1lE9FdrrDYYvONosjQ9ad9QlKUYcyXMPuKgtMGOqUBZR56EYvfr5%2FGC7KBQMTunwjUfsJcDtS%2B%2BD8rl0OnPLgL5TsIp3avSkPMU9cNuXw3hTOhCnOdOycMCiLwLIQShC8jA%2Fd6UwY9q4wBZiBH4DdO2o6INCWO7N4ebK0H46yEVuORqySKc%2FTprN9T9I5t7Mcq04aBtTn%2BXq1XR7xx4E51iZ2Ddd19YL4sXSo1Fb2WAeSWp%2FTBswYEaXtgzXFWDMK013xJ&X-Amz-Signature=00bc013800bb8bbf88baf302bac2b8530265ac33858bc0395a997ea904f948f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF74EQX7%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQDItfo%2BqH62nG%2BDYOXXXM%2BjWe43LHR%2FHdVKgpeD0Cth%2BAIgXi8Pr%2BaI9xQnrJfJUBCtSNAYHkNNOnYla%2BGgzmhfzRYqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIsvanjfognZnz1CMyrcA%2Byi6RVJ3xS2v2Ei33sBLkLGQ4ofMjCws1TFZ%2F6Qcd98Yy%2Fznz32Gvc3yY3UT9CFsmDHVpGqAreVsdoi%2FPXR8%2BlMEcudoBf2jFlIn%2BBFCetAXH3QTAXiJlCf7hBr%2BPd7eXSDqJw3mTeLoOmmGe2sLfeaaWwR52tA8hq6fB%2BAvRNQOgs8Y3a%2Bsm09SZmiV14GLT44QgLCkW8q6oGFGLHtMGOma1atxLWMSa9Hw59HGrjxLdl3Zef1z5d57gihxL7NMPCIvrdG0cNm92pX6QopRYN7u8qLLPi9DQlvBAJHFx8johX7uzX%2FD57yuz8I%2BPToAN1TabtY7V1ZIj7qXulunytmSa7bjaouUGql5Boe2PNrv%2Be8%2BSKo0GCCEPkBCKYcdzCsgqBuJ7VLPIIdp68bUtLR%2FrrbBxOYn2iHLH3G9e87GziRu5TuFtduF9xDFW6LalXvxcRoaPAI3hU2iEsdFJEdi0hATy8MXKVNGqYySV9WJhs0zKm%2BmVAM%2F8EL9phDiMavlMz0SmG4oYPaJUN4RkAjSWmcNc18nwq6RiCXYh8pNdLbdfdWm9fvMMNMU21kRrsnab2rKy%2BUtTPZztBmY60aOmVV%2Fs1lE9FdrrDYYvONosjQ9ad9QlKUYcyXMPuKgtMGOqUBZR56EYvfr5%2FGC7KBQMTunwjUfsJcDtS%2B%2BD8rl0OnPLgL5TsIp3avSkPMU9cNuXw3hTOhCnOdOycMCiLwLIQShC8jA%2Fd6UwY9q4wBZiBH4DdO2o6INCWO7N4ebK0H46yEVuORqySKc%2FTprN9T9I5t7Mcq04aBtTn%2BXq1XR7xx4E51iZ2Ddd19YL4sXSo1Fb2WAeSWp%2FTBswYEaXtgzXFWDMK013xJ&X-Amz-Signature=5fc9adaf2ee36595cfcbc059e248a3a3ea8e4ee944eb5bd6ec85d1232d4a458b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466UF74EQX7%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQDItfo%2BqH62nG%2BDYOXXXM%2BjWe43LHR%2FHdVKgpeD0Cth%2BAIgXi8Pr%2BaI9xQnrJfJUBCtSNAYHkNNOnYla%2BGgzmhfzRYqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDIsvanjfognZnz1CMyrcA%2Byi6RVJ3xS2v2Ei33sBLkLGQ4ofMjCws1TFZ%2F6Qcd98Yy%2Fznz32Gvc3yY3UT9CFsmDHVpGqAreVsdoi%2FPXR8%2BlMEcudoBf2jFlIn%2BBFCetAXH3QTAXiJlCf7hBr%2BPd7eXSDqJw3mTeLoOmmGe2sLfeaaWwR52tA8hq6fB%2BAvRNQOgs8Y3a%2Bsm09SZmiV14GLT44QgLCkW8q6oGFGLHtMGOma1atxLWMSa9Hw59HGrjxLdl3Zef1z5d57gihxL7NMPCIvrdG0cNm92pX6QopRYN7u8qLLPi9DQlvBAJHFx8johX7uzX%2FD57yuz8I%2BPToAN1TabtY7V1ZIj7qXulunytmSa7bjaouUGql5Boe2PNrv%2Be8%2BSKo0GCCEPkBCKYcdzCsgqBuJ7VLPIIdp68bUtLR%2FrrbBxOYn2iHLH3G9e87GziRu5TuFtduF9xDFW6LalXvxcRoaPAI3hU2iEsdFJEdi0hATy8MXKVNGqYySV9WJhs0zKm%2BmVAM%2F8EL9phDiMavlMz0SmG4oYPaJUN4RkAjSWmcNc18nwq6RiCXYh8pNdLbdfdWm9fvMMNMU21kRrsnab2rKy%2BUtTPZztBmY60aOmVV%2Fs1lE9FdrrDYYvONosjQ9ad9QlKUYcyXMPuKgtMGOqUBZR56EYvfr5%2FGC7KBQMTunwjUfsJcDtS%2B%2BD8rl0OnPLgL5TsIp3avSkPMU9cNuXw3hTOhCnOdOycMCiLwLIQShC8jA%2Fd6UwY9q4wBZiBH4DdO2o6INCWO7N4ebK0H46yEVuORqySKc%2FTprN9T9I5t7Mcq04aBtTn%2BXq1XR7xx4E51iZ2Ddd19YL4sXSo1Fb2WAeSWp%2FTBswYEaXtgzXFWDMK013xJ&X-Amz-Signature=69f89b8fcab8981396a1fef628796219174f59945e6450aa25ace8ab9e5f67a9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QQ6NN25C%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQDRAvZQ0pZZQzMBUvW75IWJdOMC7zqURioRW7Dowz5H0wIgGd8dcT9TSB1PxLEy1Wx9b3E59KAGsJUTu5UsKbXEU5QqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHfetQ6zvvAlJCTr0ircA8JehXB8DOwsGHwz9SZe31Mkj8ZzzE1tG3FFilDTuYimxL5WUxpjlts%2FqFjkKTLijs45Hac9ee8wwFCN6i4vFx2NtUNGxPswaXpY2Tb8n4IXZ8eFtZBnTVKPe6tr0x%2FgjfhUJ47C7Ah8s%2Bo0DsjJMDy%2FhXaQ%2BKQr%2F9bJbfcHC13xESHKAAuI9%2BgT9lk8xqoXmtYSfP3CZ%2FfK3XaBByOmvQcHWVERnTw%2BsrCDqzShp2NtRs3WqdzBaycN5st9wXIMJd4nlJLuXRRiWRgD6vOuHd0OI5uKpqirZOtaUUczdo606xTM%2BlPViwFtJjCsRUKclAWYwveXmjR1QXu583avJ%2FodPEuNRjudYs9mKhi4MXdI%2BUiySnjEFu9g48tDhimilKGFsekWWPanE7EkJGSDoIYxOYi5f82hKj8jYkT7%2BbOB5JbNkAbmaTdqqtV%2B2YuuY56AlN1nI%2FL0zhLLNu5e8%2FxIeVZhT31b0AEfVcNnuQXysMylB7b4DN8RKuz%2FCeas7OurtFcQlokIjGLGQNvVAv0IH9yjmBY0ickru7VvdDn%2Bi5jogzJJSzo%2BHrPLFJMQ73LAA%2BJKT0vWsovSBXZ1FBxFrFW%2BI5QjU25L6L%2Bwb5fZ%2F5EUZqQNMd4ihZzwMOKHgtMGOqUBcN2mDg5gaCN%2BoBQ40ycIe6LOcxDkybhAFsN9CDL8CTBdzCCNGoFork1BSWYOgP%2BnGA19qaomhJuiOBg9jq7TOB5JhcHmXCHCn7K2xmwVNLYFyfODx%2BKA1suFCB1qiQ0NMa3KmSVakcg0AXqi9PUIStaEHuX5m%2Bom1q5FkQ3z%2FXM3X2wKjlx6dg2BGrWtWsoAelbeafR4eXdBbyXuTDr10KqDGF5i&X-Amz-Signature=0a2425e66fa3c2ebe41f36d36046a1eba536d2ac2ff70ed5b54ab4e6d6419816&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHJZBUTM%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCTdw7xGrPmgTQC61M6PhgE4q4JNCXwZ6Sail3WKdquZQIgfKTvGpJ%2FOZlB65Gb6sHVWCTY4rPNL52t0TKfIv6Xt8QqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC1tgUHYG%2FtTX%2Frd7SrcA7rdAcWkRQrjMDpFLcCHQEZtcFAkRaQJdoPVvRhprGjk3VE4k%2FWLuggI5wSipn7xMZ0kA%2BED7iGL17e3l1s%2FUmeQbAfCYKLAhrarW%2Bs8RdrProjFN5FQwJ4MKshCXQPfYtyBcMsT9w6XL2IDUOrpVIKBDwFngOnrkhxF7vaoxRP%2B3BmQyGbsYizRa0SQFR5A%2Fv%2B3mwdKVh3N5QuT40%2BKHp2lWC8aXpz9Wn1LUYDPT54tX%2FMsWSKmmmMAoKfaNpfl6PPgS4edNuHLwxru6b%2Bt%2F2gQDnovapAgFzWLwltJu%2BMG2U4BCj8QBa6BorI1UlmcOwIDC6cEOFjOOyuR7BqeX7qKfV0mVp%2B4PHanEGAlCkZGxCrpv908swxmUkGaKxT9SsaauqBDmcsMY0ZLdgXbA4VcMjdAINcuBS31ilgiPBpISwS2MhIj15J7nfo4%2FjSEBKkIOpJDZk48zBIzBiQR6F7nElMjFaDmSMlgp%2Fnm%2BQ10tp0qRC%2BRxFacFyWE%2Bb9prfXLRWSSmBd7qhPSX6DqHuH%2B%2BpyNtx16hG3OX%2FUdE5H0iSo6fFqNQ0q1x7fzJ2cQaBX4pnaFA9xrsxkbfashR7sheKSL8iTsd9%2BDFKYWDYbpcJh0encDlB9gsQoWMPSIgtMGOqUBkTPho%2BIJRjJidZmgRbcNd3GUnw%2B6%2BLk2Y3JUfT9C5TKZeR3EqL2EF%2FHAY2dRgZBELN1n0ZxyILQYFIG3llhipi7D29kiih8zdph2ml%2BETh1CAZAddrp64bUCQy9ugbSTyYaL2UgxvVE8kiIGokQ6uT0iK1yL7WdQ02awyWlgKTSr3RnJh%2Bzqt6WHQWa%2FuSr7xwkf7%2BKSRTL4r%2FEm5xYIhCc5GrW4&X-Amz-Signature=56bc78aa551fe46bea5e769def12d520aefb80dfeb2841fdd4889db91825394c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466YHJZBUTM%2F20260722%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260722T102343Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEAkaCXVzLXdlc3QtMiJHMEUCIQCTdw7xGrPmgTQC61M6PhgE4q4JNCXwZ6Sail3WKdquZQIgfKTvGpJ%2FOZlB65Gb6sHVWCTY4rPNL52t0TKfIv6Xt8QqiAQI0v%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDC1tgUHYG%2FtTX%2Frd7SrcA7rdAcWkRQrjMDpFLcCHQEZtcFAkRaQJdoPVvRhprGjk3VE4k%2FWLuggI5wSipn7xMZ0kA%2BED7iGL17e3l1s%2FUmeQbAfCYKLAhrarW%2Bs8RdrProjFN5FQwJ4MKshCXQPfYtyBcMsT9w6XL2IDUOrpVIKBDwFngOnrkhxF7vaoxRP%2B3BmQyGbsYizRa0SQFR5A%2Fv%2B3mwdKVh3N5QuT40%2BKHp2lWC8aXpz9Wn1LUYDPT54tX%2FMsWSKmmmMAoKfaNpfl6PPgS4edNuHLwxru6b%2Bt%2F2gQDnovapAgFzWLwltJu%2BMG2U4BCj8QBa6BorI1UlmcOwIDC6cEOFjOOyuR7BqeX7qKfV0mVp%2B4PHanEGAlCkZGxCrpv908swxmUkGaKxT9SsaauqBDmcsMY0ZLdgXbA4VcMjdAINcuBS31ilgiPBpISwS2MhIj15J7nfo4%2FjSEBKkIOpJDZk48zBIzBiQR6F7nElMjFaDmSMlgp%2Fnm%2BQ10tp0qRC%2BRxFacFyWE%2Bb9prfXLRWSSmBd7qhPSX6DqHuH%2B%2BpyNtx16hG3OX%2FUdE5H0iSo6fFqNQ0q1x7fzJ2cQaBX4pnaFA9xrsxkbfashR7sheKSL8iTsd9%2BDFKYWDYbpcJh0encDlB9gsQoWMPSIgtMGOqUBkTPho%2BIJRjJidZmgRbcNd3GUnw%2B6%2BLk2Y3JUfT9C5TKZeR3EqL2EF%2FHAY2dRgZBELN1n0ZxyILQYFIG3llhipi7D29kiih8zdph2ml%2BETh1CAZAddrp64bUCQy9ugbSTyYaL2UgxvVE8kiIGokQ6uT0iK1yL7WdQ02awyWlgKTSr3RnJh%2Bzqt6WHQWa%2FuSr7xwkf7%2BKSRTL4r%2FEm5xYIhCc5GrW4&X-Amz-Signature=f9ff594b28c7b764382cc18e639c72260ddf6e8c8e222893d5036b7aadab6fee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
