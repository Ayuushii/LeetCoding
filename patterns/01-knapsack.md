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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SV2B6XYK%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDwlfVXXDx6FR%2BWQ2iAu1osp9FlPInDUnjlllpPG7EQLgIhALBweL9cXl1cWv26VeGyboi%2FvNU%2FzKtSQfGopGuPMdlTKv8DCFgQABoMNjM3NDIzMTgzODA1IgwlGbIaQIc568PwGTgq3ANzrATTnLZPl%2FgoFOkdHfv2SlcVbh8L8AIP05zVv38qhqZNvOn6s9%2BKjnsVJGb3LbsKGFjEUPs%2FR3%2B0AbxrvFPNuPzUkSk5Wc7p46OtEyCm3tvkfdEY7dfI5wreJlwefXAS3b8sLKA60r2CzVxfPhI2qmno7YN2fEJX6%2BfwJPww96Fwj40P%2BsZQ%2BSq6xjYylNrZFR2mvxH52DAFY2fVCi7MXulGmn2bHZZpAYE2scHyhybuU%2F8%2Bib6Gbup6EI6G2lTmCDfBthepIbT3qUuGoLrc5Np8xBI4aMwVzzvuf2sfOpwrryIDwYp9cMuvwRM%2BPyEvj084iyP9RRBAXXo2ivkP9fW16TXDw4bgBdbGFjQPZOf5fz1hi%2F%2B4GQEL4s6GN5INiiQz3yWxR1LWjJHG02r7Q%2BH9%2B8RxQLpJSAoQzMr7MswMt0faLkeEpD3Vq4qKtm9hK%2Bv01NsA%2B7SrKrl0BolWDjAWK%2F%2Fpx0aABBx82MOyVfYhOlsjwqaW3f%2BIe3EiPxBi5l8t%2B6nUcsEZBIJXue%2Fa29Qw4bsnVZ4fTQXqUVq4OTK2FTpuoIYd8PWhdl75QhQ2RWuo6zKorYIkclIm9vEPn6fZu4tz5cnrwzkjt3JcRGrTwxlPyN7x8LHURzCx67jVBjqkATGXXTzp5owg%2FdEgGH8Nscebi6gnV%2F%2FjlMFCtgx7FMpI%2Bv%2F5i%2B69gj%2ByFNhlP0r8SnPY0Hp4P6OypvLfQ4Vn7VjxASyv7m%2BKZIByureDz%2FNVzU7bAEieKLPqt2S9QvYVGmJWMHGK3wrgLI7O2o0chTCJ1PuXrdAfQIjFHuH%2FuaaYU1x8SKkhrS78qR2KK1sBJwwTep%2F2N6ScwT%2FDx7BrbUHDBfWl&X-Amz-Signature=ea29547ab170fe79619be228bdef083f86970492a49fd087c256702b00532282&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SV2B6XYK%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDwlfVXXDx6FR%2BWQ2iAu1osp9FlPInDUnjlllpPG7EQLgIhALBweL9cXl1cWv26VeGyboi%2FvNU%2FzKtSQfGopGuPMdlTKv8DCFgQABoMNjM3NDIzMTgzODA1IgwlGbIaQIc568PwGTgq3ANzrATTnLZPl%2FgoFOkdHfv2SlcVbh8L8AIP05zVv38qhqZNvOn6s9%2BKjnsVJGb3LbsKGFjEUPs%2FR3%2B0AbxrvFPNuPzUkSk5Wc7p46OtEyCm3tvkfdEY7dfI5wreJlwefXAS3b8sLKA60r2CzVxfPhI2qmno7YN2fEJX6%2BfwJPww96Fwj40P%2BsZQ%2BSq6xjYylNrZFR2mvxH52DAFY2fVCi7MXulGmn2bHZZpAYE2scHyhybuU%2F8%2Bib6Gbup6EI6G2lTmCDfBthepIbT3qUuGoLrc5Np8xBI4aMwVzzvuf2sfOpwrryIDwYp9cMuvwRM%2BPyEvj084iyP9RRBAXXo2ivkP9fW16TXDw4bgBdbGFjQPZOf5fz1hi%2F%2B4GQEL4s6GN5INiiQz3yWxR1LWjJHG02r7Q%2BH9%2B8RxQLpJSAoQzMr7MswMt0faLkeEpD3Vq4qKtm9hK%2Bv01NsA%2B7SrKrl0BolWDjAWK%2F%2Fpx0aABBx82MOyVfYhOlsjwqaW3f%2BIe3EiPxBi5l8t%2B6nUcsEZBIJXue%2Fa29Qw4bsnVZ4fTQXqUVq4OTK2FTpuoIYd8PWhdl75QhQ2RWuo6zKorYIkclIm9vEPn6fZu4tz5cnrwzkjt3JcRGrTwxlPyN7x8LHURzCx67jVBjqkATGXXTzp5owg%2FdEgGH8Nscebi6gnV%2F%2FjlMFCtgx7FMpI%2Bv%2F5i%2B69gj%2ByFNhlP0r8SnPY0Hp4P6OypvLfQ4Vn7VjxASyv7m%2BKZIByureDz%2FNVzU7bAEieKLPqt2S9QvYVGmJWMHGK3wrgLI7O2o0chTCJ1PuXrdAfQIjFHuH%2FuaaYU1x8SKkhrS78qR2KK1sBJwwTep%2F2N6ScwT%2FDx7BrbUHDBfWl&X-Amz-Signature=308ff589c8e16836e0faf92c22fa744d1c900f9644662ad5b9e2ac15feb2abc4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SV2B6XYK%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121714Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDwlfVXXDx6FR%2BWQ2iAu1osp9FlPInDUnjlllpPG7EQLgIhALBweL9cXl1cWv26VeGyboi%2FvNU%2FzKtSQfGopGuPMdlTKv8DCFgQABoMNjM3NDIzMTgzODA1IgwlGbIaQIc568PwGTgq3ANzrATTnLZPl%2FgoFOkdHfv2SlcVbh8L8AIP05zVv38qhqZNvOn6s9%2BKjnsVJGb3LbsKGFjEUPs%2FR3%2B0AbxrvFPNuPzUkSk5Wc7p46OtEyCm3tvkfdEY7dfI5wreJlwefXAS3b8sLKA60r2CzVxfPhI2qmno7YN2fEJX6%2BfwJPww96Fwj40P%2BsZQ%2BSq6xjYylNrZFR2mvxH52DAFY2fVCi7MXulGmn2bHZZpAYE2scHyhybuU%2F8%2Bib6Gbup6EI6G2lTmCDfBthepIbT3qUuGoLrc5Np8xBI4aMwVzzvuf2sfOpwrryIDwYp9cMuvwRM%2BPyEvj084iyP9RRBAXXo2ivkP9fW16TXDw4bgBdbGFjQPZOf5fz1hi%2F%2B4GQEL4s6GN5INiiQz3yWxR1LWjJHG02r7Q%2BH9%2B8RxQLpJSAoQzMr7MswMt0faLkeEpD3Vq4qKtm9hK%2Bv01NsA%2B7SrKrl0BolWDjAWK%2F%2Fpx0aABBx82MOyVfYhOlsjwqaW3f%2BIe3EiPxBi5l8t%2B6nUcsEZBIJXue%2Fa29Qw4bsnVZ4fTQXqUVq4OTK2FTpuoIYd8PWhdl75QhQ2RWuo6zKorYIkclIm9vEPn6fZu4tz5cnrwzkjt3JcRGrTwxlPyN7x8LHURzCx67jVBjqkATGXXTzp5owg%2FdEgGH8Nscebi6gnV%2F%2FjlMFCtgx7FMpI%2Bv%2F5i%2B69gj%2ByFNhlP0r8SnPY0Hp4P6OypvLfQ4Vn7VjxASyv7m%2BKZIByureDz%2FNVzU7bAEieKLPqt2S9QvYVGmJWMHGK3wrgLI7O2o0chTCJ1PuXrdAfQIjFHuH%2FuaaYU1x8SKkhrS78qR2KK1sBJwwTep%2F2N6ScwT%2FDx7BrbUHDBfWl&X-Amz-Signature=e7701c42860e2fc1aac2ed27b69d3f0372b199e55e9869d2e7bfe7ceadcdbeb4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAGFFCBR%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICULSi9TKXfrwaug5KN4%2FCjen0jsewPJ7Of5RNt%2FYoUxAiAzT%2B2BWx0wKGf7M488sYlpQ4YUjNAtCOUTKpL7o0OTEyr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIMnhMRsF940W6StDxDKtwDZAm7E%2FPqlQBBlWzJh8%2FKyZB5Ar4fudeLo3JBXNJVpeDkgUu%2FSVS1bkrEdiqScI9ktTU2%2BSQGwAQdeG5adJ%2B7nfSpE5gPVrlVPkX70TD8ezwE9Jre7at1BGusbMEjJa3yhUz3gV0KJCIQ5MaVyCwSQiPNM75%2BEQtkR1crVq0DwCi880eRv89TBrL1dOJcCKlNeMLQJqhYmF2zgRutSKyZvus4L2BLkYW68EBrwYhVe9Iy9brxmXY%2Fo2tSr92VsNTjtwEnMXQ%2BZAx9fmN%2Bt2x3KxAGQPjMrJ%2FmtWyj4mxrGqxM0LNte0wFbfB7XbwnitLGDUOVzMqMY7JKZxtxiQPfdCUdxmUCNURvsJFO3rQUAB7UP672VZxZ5t1tx7YOUDmWa%2BEo7LaXB%2B3BwMXkr1j1xFRp4skq3MYdO4bBMfFSoQusUJQJ10gtfMPHavb4Xuuz%2Bdk9xT%2Bxp0tWuI9PSuPjDWtyq89sRxOGz5R%2FigEQlzu%2BqvYhkThygNpK6oX7mtsVoUg%2B8hTaJSiSlqvZGmZofjCt19MFqzSmVISR%2FS8EOdD8CvT33vwl7aciNF4G8aWWEX4w0OeIHG5xpF7EuUhNcAcE9Y2xaZaBUtCEZ5p6JhZcrsAFWROcubx124wwnvC41QY6pgHm6qpf2Qs2kMP0NQ9WrNkKOvDRe2RZAmcIoaAPm4unEmPdn2siGAGprpSrlOimFpN%2Ftv%2FavzpjqyuBOX%2B6voMGcZ%2F7B3GPI7rn9eTrwutD9uMBXtnUBOupe0s%2BneG68HKN28wCNP2m%2FgIO5qz%2FPm8keUS147DvqcQWxtHJ5NQBlZv%2BqzIYBPnImqmbD%2Fyhla5wjtkowljpXtz7xbvHaejqWHIXMHIW&X-Amz-Signature=517914cc47e75d344047eaf4434c8c9d88f3a6a5425a25611d903b88485de410&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAGFFCBR%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICULSi9TKXfrwaug5KN4%2FCjen0jsewPJ7Of5RNt%2FYoUxAiAzT%2B2BWx0wKGf7M488sYlpQ4YUjNAtCOUTKpL7o0OTEyr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIMnhMRsF940W6StDxDKtwDZAm7E%2FPqlQBBlWzJh8%2FKyZB5Ar4fudeLo3JBXNJVpeDkgUu%2FSVS1bkrEdiqScI9ktTU2%2BSQGwAQdeG5adJ%2B7nfSpE5gPVrlVPkX70TD8ezwE9Jre7at1BGusbMEjJa3yhUz3gV0KJCIQ5MaVyCwSQiPNM75%2BEQtkR1crVq0DwCi880eRv89TBrL1dOJcCKlNeMLQJqhYmF2zgRutSKyZvus4L2BLkYW68EBrwYhVe9Iy9brxmXY%2Fo2tSr92VsNTjtwEnMXQ%2BZAx9fmN%2Bt2x3KxAGQPjMrJ%2FmtWyj4mxrGqxM0LNte0wFbfB7XbwnitLGDUOVzMqMY7JKZxtxiQPfdCUdxmUCNURvsJFO3rQUAB7UP672VZxZ5t1tx7YOUDmWa%2BEo7LaXB%2B3BwMXkr1j1xFRp4skq3MYdO4bBMfFSoQusUJQJ10gtfMPHavb4Xuuz%2Bdk9xT%2Bxp0tWuI9PSuPjDWtyq89sRxOGz5R%2FigEQlzu%2BqvYhkThygNpK6oX7mtsVoUg%2B8hTaJSiSlqvZGmZofjCt19MFqzSmVISR%2FS8EOdD8CvT33vwl7aciNF4G8aWWEX4w0OeIHG5xpF7EuUhNcAcE9Y2xaZaBUtCEZ5p6JhZcrsAFWROcubx124wwnvC41QY6pgHm6qpf2Qs2kMP0NQ9WrNkKOvDRe2RZAmcIoaAPm4unEmPdn2siGAGprpSrlOimFpN%2Ftv%2FavzpjqyuBOX%2B6voMGcZ%2F7B3GPI7rn9eTrwutD9uMBXtnUBOupe0s%2BneG68HKN28wCNP2m%2FgIO5qz%2FPm8keUS147DvqcQWxtHJ5NQBlZv%2BqzIYBPnImqmbD%2Fyhla5wjtkowljpXtz7xbvHaejqWHIXMHIW&X-Amz-Signature=25fb69e5dd874c8b2ee214806c29028b29a1cac5f8cd325a0480e21946841dbc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAGFFCBR%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICULSi9TKXfrwaug5KN4%2FCjen0jsewPJ7Of5RNt%2FYoUxAiAzT%2B2BWx0wKGf7M488sYlpQ4YUjNAtCOUTKpL7o0OTEyr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIMnhMRsF940W6StDxDKtwDZAm7E%2FPqlQBBlWzJh8%2FKyZB5Ar4fudeLo3JBXNJVpeDkgUu%2FSVS1bkrEdiqScI9ktTU2%2BSQGwAQdeG5adJ%2B7nfSpE5gPVrlVPkX70TD8ezwE9Jre7at1BGusbMEjJa3yhUz3gV0KJCIQ5MaVyCwSQiPNM75%2BEQtkR1crVq0DwCi880eRv89TBrL1dOJcCKlNeMLQJqhYmF2zgRutSKyZvus4L2BLkYW68EBrwYhVe9Iy9brxmXY%2Fo2tSr92VsNTjtwEnMXQ%2BZAx9fmN%2Bt2x3KxAGQPjMrJ%2FmtWyj4mxrGqxM0LNte0wFbfB7XbwnitLGDUOVzMqMY7JKZxtxiQPfdCUdxmUCNURvsJFO3rQUAB7UP672VZxZ5t1tx7YOUDmWa%2BEo7LaXB%2B3BwMXkr1j1xFRp4skq3MYdO4bBMfFSoQusUJQJ10gtfMPHavb4Xuuz%2Bdk9xT%2Bxp0tWuI9PSuPjDWtyq89sRxOGz5R%2FigEQlzu%2BqvYhkThygNpK6oX7mtsVoUg%2B8hTaJSiSlqvZGmZofjCt19MFqzSmVISR%2FS8EOdD8CvT33vwl7aciNF4G8aWWEX4w0OeIHG5xpF7EuUhNcAcE9Y2xaZaBUtCEZ5p6JhZcrsAFWROcubx124wwnvC41QY6pgHm6qpf2Qs2kMP0NQ9WrNkKOvDRe2RZAmcIoaAPm4unEmPdn2siGAGprpSrlOimFpN%2Ftv%2FavzpjqyuBOX%2B6voMGcZ%2F7B3GPI7rn9eTrwutD9uMBXtnUBOupe0s%2BneG68HKN28wCNP2m%2FgIO5qz%2FPm8keUS147DvqcQWxtHJ5NQBlZv%2BqzIYBPnImqmbD%2Fyhla5wjtkowljpXtz7xbvHaejqWHIXMHIW&X-Amz-Signature=9098f7f2ee1e14adad871bdcb976d22d4980614f359195e62f2fcb0678e45d4e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466WAGFFCBR%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCICULSi9TKXfrwaug5KN4%2FCjen0jsewPJ7Of5RNt%2FYoUxAiAzT%2B2BWx0wKGf7M488sYlpQ4YUjNAtCOUTKpL7o0OTEyr%2FAwhZEAAaDDYzNzQyMzE4MzgwNSIMnhMRsF940W6StDxDKtwDZAm7E%2FPqlQBBlWzJh8%2FKyZB5Ar4fudeLo3JBXNJVpeDkgUu%2FSVS1bkrEdiqScI9ktTU2%2BSQGwAQdeG5adJ%2B7nfSpE5gPVrlVPkX70TD8ezwE9Jre7at1BGusbMEjJa3yhUz3gV0KJCIQ5MaVyCwSQiPNM75%2BEQtkR1crVq0DwCi880eRv89TBrL1dOJcCKlNeMLQJqhYmF2zgRutSKyZvus4L2BLkYW68EBrwYhVe9Iy9brxmXY%2Fo2tSr92VsNTjtwEnMXQ%2BZAx9fmN%2Bt2x3KxAGQPjMrJ%2FmtWyj4mxrGqxM0LNte0wFbfB7XbwnitLGDUOVzMqMY7JKZxtxiQPfdCUdxmUCNURvsJFO3rQUAB7UP672VZxZ5t1tx7YOUDmWa%2BEo7LaXB%2B3BwMXkr1j1xFRp4skq3MYdO4bBMfFSoQusUJQJ10gtfMPHavb4Xuuz%2Bdk9xT%2Bxp0tWuI9PSuPjDWtyq89sRxOGz5R%2FigEQlzu%2BqvYhkThygNpK6oX7mtsVoUg%2B8hTaJSiSlqvZGmZofjCt19MFqzSmVISR%2FS8EOdD8CvT33vwl7aciNF4G8aWWEX4w0OeIHG5xpF7EuUhNcAcE9Y2xaZaBUtCEZ5p6JhZcrsAFWROcubx124wwnvC41QY6pgHm6qpf2Qs2kMP0NQ9WrNkKOvDRe2RZAmcIoaAPm4unEmPdn2siGAGprpSrlOimFpN%2Ftv%2FavzpjqyuBOX%2B6voMGcZ%2F7B3GPI7rn9eTrwutD9uMBXtnUBOupe0s%2BneG68HKN28wCNP2m%2FgIO5qz%2FPm8keUS147DvqcQWxtHJ5NQBlZv%2BqzIYBPnImqmbD%2Fyhla5wjtkowljpXtz7xbvHaejqWHIXMHIW&X-Amz-Signature=058597bc97973c89c871977b1ba37cb47a3d7dc8d2d7732bc11bb526abe870b8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466SV6DMNOM%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEJD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC7ryJZsrT54jFhXM2S64uIO%2FVKcukQWL4W%2FDi2UtlEfwIhAJlYa3K%2FZ%2FH%2Bo2BjqLOt%2BZzha1%2BFBg18BiUHA3t7yZacKv8DCFgQABoMNjM3NDIzMTgzODA1IgxsZIK5VQnAvZLtjB0q3ANjxc2v0jtGKb0jwwEkXqgSMKXP9koCcBtPF2ydXA%2B%2BomQ%2FXAHTi%2BF7SMM3YD%2Bq8kU4mnzIDHF28ksXLv%2F6W7xdj5oEkyC3gyFzXrLwLP68L12IQ%2BmYE4v8CkX1F6kGUIeOJpJ4ew6StX4YXBuwirSP8qHW6jQRZmEFb9pKB4cGfR%2Fg72m6UbGvDQXAA5t3PshONSeWKRjhqhNRIeinnCaIHzSRZh03LDSL8x285ujj2iD9m2PdHW0jeEhE9xabhHCH47fVL%2BwBiu2lkmHB%2FsB1NiloOB1SxdLnplLQWojLdn%2B3UlB23o6%2BlgI89QbPfGEwXyNBfJS3zw%2B%2ByotkoLk3v1VFKvYVKI3veom%2FN8F570gcxd0Cra7BmUKIseZcD1HEFEbow2CUV5C6elZgpsNMk6DXAeYY6LR0C%2Fu%2BJRE35XoKhXzCBRyy8v6fe7liaA%2B3ZIstG2tTVt0J9SHE0FaRxgYnTyC7uDY%2FB%2FlMKzKeh5IwDjP5FjCHYmhDzye1eoF8UU2yWIMlKH%2B94%2B%2FaTLipnmHyUoHCuP%2FOxxcTu1%2BJmBPum7w0SLYogg6yb%2FHVrPvxKODbzIRq2idMIJN4EKlUPhrEi7bCT%2BC0feYNelcTdIoDE0KcUr4E2WPP8zCq77jVBjqkAekNha1v0T%2B%2FzRSTe2KMpdxTtEweDvzTLbIJeXHlIwSlAsc9Z%2FDg%2FcXjnzkdp85c3fl2Q8pUeTspnbKVHSmSTut1G5eEV8XNzi1SSwwbPEq74YS9tsjgNzkIr7z7ciHANOASxEp5skCMKkdyxahWerI3XlND47FfB5bIMAcMaofmXUHTM%2F%2B05Sj4wj8ZiHU%2FLXl7BWi%2F7Qt4it4th4jPuAGCbUOj&X-Amz-Signature=30d1226cd21ba203e64005b2fd87504b7bda54c9a8a30ca077d0612abda61514&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXEVG6WB%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCWjYhI796hCGID2h9e5CjkbwpShDwmjhshC43kVIzzowIhAL%2BzCl1%2Ffv8Ob5n%2BNAVYxy8MbmcG2fYAEGN9RSQCbsYPKv8DCFgQABoMNjM3NDIzMTgzODA1IgxOijlKhjsIt6c0QVYq3AOhF3YXIzw1Um%2BEqLjMpRh3PjGG58BQ3z6HVgfsQr8AXnIuKaPDXUkjmS8%2BKti7vNfyRc1iiOh781c77bAnDcETtNpXuL7CfQiYlsdnsunHGfwHIsYi6%2BFM5LnOwJY7CL4wh%2BTHCUYxfOyxxQWoZSQrBK2W7B%2B%2FVWXUU6HYaI00pW8EbwDcgdvAxPhNh03ONaAPC7sSHIqJTRU5d1QeIjUkMX5nbYtQrFg2omP3WBluGlgWzVjUtT3UaRQDcc%2BVzLdhHhDxOgkag5pMGvJc9BvjzbgKRBe%2BArd6Bitldk5ahsWwC7Jw6WtdRhSLmKNSjjK9v1%2FiIVXTqjr8VRnaX5jrw%2BPQLg2w2AQyeVn7EaD2ah6fdDUlncTCw7gk%2FbL3WxAV0MlkfMUx1PHBAT2U3rlFTzj3rkkuVWNg%2FeDcffkDz4HIU%2B629pCib8ib62WEF08i41Io3Ehn59Ss3aYuoz%2BR3a37s9CCvhS4L81i74O7HD89daKzWNj59NZakekfv79QMn9EpWzUBsutH7mNPVtDPeJm1q9d87bgbqLyzG7HAquWBf9nE46gdSfIISkuIwc17Hls%2FvEJ%2Fss%2FjbjxysAN3I6%2FSql6i7BBXBw5FeL0dGHtYXKvIyVOErJZNzCW5rjVBjqkAdqsei%2BXqhhnYpB1xWD3tXrumJPAgIXpBKFLQpEE8wUFU6zaGaEb4m%2F14s33NWSks%2FU2ZuIqMVNqhu6KlRCPF6gf8DkNgkDcuUjfNdE%2BD%2BHlmcS%2BBelBKqrTP93kM7%2B2DLi1d1zfABV%2FM5KsPGLEOWhnKaTYCgxl6Z3zQcRafGTZca1j4ONFVwk7AbwOMWaj8eh46mvaE8KJ8LzPH8N1riUpqMFD&X-Amz-Signature=d3da21409448212b9a04603bf30e3f8c5fbdaf02b5a0d3d1585fd146ef608fe4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466RXEVG6WB%2F20260919%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260919T121715Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEI%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCWjYhI796hCGID2h9e5CjkbwpShDwmjhshC43kVIzzowIhAL%2BzCl1%2Ffv8Ob5n%2BNAVYxy8MbmcG2fYAEGN9RSQCbsYPKv8DCFgQABoMNjM3NDIzMTgzODA1IgxOijlKhjsIt6c0QVYq3AOhF3YXIzw1Um%2BEqLjMpRh3PjGG58BQ3z6HVgfsQr8AXnIuKaPDXUkjmS8%2BKti7vNfyRc1iiOh781c77bAnDcETtNpXuL7CfQiYlsdnsunHGfwHIsYi6%2BFM5LnOwJY7CL4wh%2BTHCUYxfOyxxQWoZSQrBK2W7B%2B%2FVWXUU6HYaI00pW8EbwDcgdvAxPhNh03ONaAPC7sSHIqJTRU5d1QeIjUkMX5nbYtQrFg2omP3WBluGlgWzVjUtT3UaRQDcc%2BVzLdhHhDxOgkag5pMGvJc9BvjzbgKRBe%2BArd6Bitldk5ahsWwC7Jw6WtdRhSLmKNSjjK9v1%2FiIVXTqjr8VRnaX5jrw%2BPQLg2w2AQyeVn7EaD2ah6fdDUlncTCw7gk%2FbL3WxAV0MlkfMUx1PHBAT2U3rlFTzj3rkkuVWNg%2FeDcffkDz4HIU%2B629pCib8ib62WEF08i41Io3Ehn59Ss3aYuoz%2BR3a37s9CCvhS4L81i74O7HD89daKzWNj59NZakekfv79QMn9EpWzUBsutH7mNPVtDPeJm1q9d87bgbqLyzG7HAquWBf9nE46gdSfIISkuIwc17Hls%2FvEJ%2Fss%2FjbjxysAN3I6%2FSql6i7BBXBw5FeL0dGHtYXKvIyVOErJZNzCW5rjVBjqkAdqsei%2BXqhhnYpB1xWD3tXrumJPAgIXpBKFLQpEE8wUFU6zaGaEb4m%2F14s33NWSks%2FU2ZuIqMVNqhu6KlRCPF6gf8DkNgkDcuUjfNdE%2BD%2BHlmcS%2BBelBKqrTP93kM7%2B2DLi1d1zfABV%2FM5KsPGLEOWhnKaTYCgxl6Z3zQcRafGTZca1j4ONFVwk7AbwOMWaj8eh46mvaE8KJ8LzPH8N1riUpqMFD&X-Amz-Signature=dfd383d73672df227ff202142cbd2882c082dd3c6ae8e51447a3ca2c2401c2b9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
