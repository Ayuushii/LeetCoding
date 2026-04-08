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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XNXJLL5M%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090020Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQCGgpzL160yyQvdsOBGkEr80sNegvNysoJL6IhwhAI%2BOwIgUM7pt6YDJZtJo8rsHKnufmHzT48JvfvZdseLPZXCzfsqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCGYwGfRn5n01E22TyrcA8IPW%2BqsotEGC6txQpy3ypaU4nG31YYZkCc1kSfyIwa9lhH94P3Xb8cXBBGLyueT%2BDj%2BVbnrt83ZEcjYAk023oG7urDfRgejr16geJe8ESVP5raCN%2BSYzxoV%2BxK6iGVxSH5gCSWXzTzqUURn0dmh87i5x64Aj68KHuojtF7r8hCtgXyQw4GeWoJxnhTsp%2F8CCW4YzsrzlCE2DYolYUd3SXP3RpYIlsYqKrlcvRZxZnzfFubgAcon4hGc4S%2FDe51ZqWo%2BibF56BRXPX2ML%2FA4IeBKBTKnCxRuAInDoQwkXV45cUDagbTFXIiBaEd%2Fse00fmmRgVmnPIRXlcLuMcIHAH2bxWTFveNTspLgKBlzpievyZup7fkJmtvkkLs2X7%2BNw9qPCrUgOjSTcDur1G3%2FjtE77Rin%2BiYHmcMV55pPegxY10LzRKIXHVbQybppMqzZxTB5q2OQ8t%2FcO4QbrNMAgkoKcL3G0WqSfyPnem%2FTYv%2BTH9ayeUZyD2%2FMJnOh%2FPQmdZ6X%2Bz8gF5uNj6HdP2J2B5cJT12P8Zuqzs8EkvERR%2FZdovGe0YoThcPqfKkdV0%2BJy%2F8onkh9c6Dc3CXWCP0ySmWf1%2FSfwwh6ZXgYidiK%2B0HjBEAdPyvo10S3DjB5MK2u2M4GOqUBxoJIvjP8EkOIUYTo9r2DTzIQA439wxb%2FWQnjIQ4HSwxia%2FhwoX6TA7CwVZi7MmoqNh93EwepY1xLJZ3xjanw3tpx2cYvSj9qxQ%2BUzFMb1KVSdLXG75KnGxzWngJtPM4wak9usUsUhmmlpRp%2FWtDD6crs6wUW19mSVAhKgXgvhHFkO1Kg%2BOWBbxuVgxC5ZSvhw5aC71dGdWKSwZxKa62u35Ak3shP&X-Amz-Signature=4f5bb161b51d5a7a5d13fcbc6be4d84ae60b1d8784f0d326c00958e259ce445a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XNXJLL5M%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090020Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQCGgpzL160yyQvdsOBGkEr80sNegvNysoJL6IhwhAI%2BOwIgUM7pt6YDJZtJo8rsHKnufmHzT48JvfvZdseLPZXCzfsqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCGYwGfRn5n01E22TyrcA8IPW%2BqsotEGC6txQpy3ypaU4nG31YYZkCc1kSfyIwa9lhH94P3Xb8cXBBGLyueT%2BDj%2BVbnrt83ZEcjYAk023oG7urDfRgejr16geJe8ESVP5raCN%2BSYzxoV%2BxK6iGVxSH5gCSWXzTzqUURn0dmh87i5x64Aj68KHuojtF7r8hCtgXyQw4GeWoJxnhTsp%2F8CCW4YzsrzlCE2DYolYUd3SXP3RpYIlsYqKrlcvRZxZnzfFubgAcon4hGc4S%2FDe51ZqWo%2BibF56BRXPX2ML%2FA4IeBKBTKnCxRuAInDoQwkXV45cUDagbTFXIiBaEd%2Fse00fmmRgVmnPIRXlcLuMcIHAH2bxWTFveNTspLgKBlzpievyZup7fkJmtvkkLs2X7%2BNw9qPCrUgOjSTcDur1G3%2FjtE77Rin%2BiYHmcMV55pPegxY10LzRKIXHVbQybppMqzZxTB5q2OQ8t%2FcO4QbrNMAgkoKcL3G0WqSfyPnem%2FTYv%2BTH9ayeUZyD2%2FMJnOh%2FPQmdZ6X%2Bz8gF5uNj6HdP2J2B5cJT12P8Zuqzs8EkvERR%2FZdovGe0YoThcPqfKkdV0%2BJy%2F8onkh9c6Dc3CXWCP0ySmWf1%2FSfwwh6ZXgYidiK%2B0HjBEAdPyvo10S3DjB5MK2u2M4GOqUBxoJIvjP8EkOIUYTo9r2DTzIQA439wxb%2FWQnjIQ4HSwxia%2FhwoX6TA7CwVZi7MmoqNh93EwepY1xLJZ3xjanw3tpx2cYvSj9qxQ%2BUzFMb1KVSdLXG75KnGxzWngJtPM4wak9usUsUhmmlpRp%2FWtDD6crs6wUW19mSVAhKgXgvhHFkO1Kg%2BOWBbxuVgxC5ZSvhw5aC71dGdWKSwZxKa62u35Ak3shP&X-Amz-Signature=4d6e635fa48f1c0a6992ef04f11cdd9672eb1ea101fc88edc1ced79df67e9a8b&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XNXJLL5M%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090020Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQCGgpzL160yyQvdsOBGkEr80sNegvNysoJL6IhwhAI%2BOwIgUM7pt6YDJZtJo8rsHKnufmHzT48JvfvZdseLPZXCzfsqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDCGYwGfRn5n01E22TyrcA8IPW%2BqsotEGC6txQpy3ypaU4nG31YYZkCc1kSfyIwa9lhH94P3Xb8cXBBGLyueT%2BDj%2BVbnrt83ZEcjYAk023oG7urDfRgejr16geJe8ESVP5raCN%2BSYzxoV%2BxK6iGVxSH5gCSWXzTzqUURn0dmh87i5x64Aj68KHuojtF7r8hCtgXyQw4GeWoJxnhTsp%2F8CCW4YzsrzlCE2DYolYUd3SXP3RpYIlsYqKrlcvRZxZnzfFubgAcon4hGc4S%2FDe51ZqWo%2BibF56BRXPX2ML%2FA4IeBKBTKnCxRuAInDoQwkXV45cUDagbTFXIiBaEd%2Fse00fmmRgVmnPIRXlcLuMcIHAH2bxWTFveNTspLgKBlzpievyZup7fkJmtvkkLs2X7%2BNw9qPCrUgOjSTcDur1G3%2FjtE77Rin%2BiYHmcMV55pPegxY10LzRKIXHVbQybppMqzZxTB5q2OQ8t%2FcO4QbrNMAgkoKcL3G0WqSfyPnem%2FTYv%2BTH9ayeUZyD2%2FMJnOh%2FPQmdZ6X%2Bz8gF5uNj6HdP2J2B5cJT12P8Zuqzs8EkvERR%2FZdovGe0YoThcPqfKkdV0%2BJy%2F8onkh9c6Dc3CXWCP0ySmWf1%2FSfwwh6ZXgYidiK%2B0HjBEAdPyvo10S3DjB5MK2u2M4GOqUBxoJIvjP8EkOIUYTo9r2DTzIQA439wxb%2FWQnjIQ4HSwxia%2FhwoX6TA7CwVZi7MmoqNh93EwepY1xLJZ3xjanw3tpx2cYvSj9qxQ%2BUzFMb1KVSdLXG75KnGxzWngJtPM4wak9usUsUhmmlpRp%2FWtDD6crs6wUW19mSVAhKgXgvhHFkO1Kg%2BOWBbxuVgxC5ZSvhw5aC71dGdWKSwZxKa62u35Ak3shP&X-Amz-Signature=2acd7a3c6e061d536c1822cbafc92652fa22c0fe387bdf400e4e5048ae014207&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QH7XYURN%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDAwLHpdWFkbWHCmhcDTp46DMNXG6i4Qi4YnxWp1HNy1AiARquhX67K0IuHC8PmjvSWQp9IO5rvmsj2Akpla3CYOMCqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz8mZTnqjFpI87W%2B8KtwDsvMmF1AYd00nrk3mDnnss%2B8N3UFjby7btAeh%2F41KC2iCy%2BgDKD7QSsw2YEwJ1u1TPN%2FR4zhLAMuog54ujw9mOQunK6JyUFjOViLW1BT8h3HKyZgpd45aZoYYB3SUvqtbJLM4T7peEhCnocRQOYxUs%2BkeGDFnKZ%2B5JpHiXA0yuMZhLX8NgntNT5XuRMIDCXDIX%2Fk2EtgH4gHvGkMcWv7KppzXIN%2Br9ODAFQS8punShXIkBPd%2BxtnlNX%2Fn4dADRcEQGKCV%2FHucsTbSyI9gNiAFLnQTLCtI5cg7eLdVhuobAsy3kyvIESM1PT8I17jsH%2Bt8%2FXzU%2FlHSctUz11uhBk0SSkwThV3fHeuJT0hAAJFsfkS6c0a9koot%2FWO1lsLHOtXACFTAGgqZDQVURXAJnYFZ3JmbMJlnnlJDm4R98ibGLpnVTOoJQDqIaaanApIWB7zRRu1za5gYhwv%2BEdyyrMzic9ixkY4d5KhGDYu8gO7WqVNUEWzDTNkb9t5UtCnb56o5pRuv8Nc6s%2FiT0RDiEIDAC848rwZEIoEf1ZrQic0LDppRn5NBAuRZxEDqrrZBz7RX%2F3nXcCUyQlhg7DnWFD%2FVbUzDyj46kiXcwv53XEABy5ybmW8q1Iizb12QE%2B0wjq3YzgY6pgFApUOkswB6O%2FB9r12F9wBvtMYO266vhOeS5elo7GcMiJ0IKKgUAGBcYglzVL9WR4i8ABJqponzxrvd9hWTxYbb8utADtgdN59c0llOsyg%2FT4YHSGnOEJB6VslStDnxRfLwVbOAifMfTn07eZ4YIucf3HpbQXlOMvPHBdIpoU%2BAXKTkWDyVAlZcb%2BF2dvo6JMjVYII12RapXUlZs%2BWeVF%2B%2B%2FogiVgml&X-Amz-Signature=ccebdbe2a412788b85a2d114165bf58bf623c94d7797e4af08d2d7361119acae&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QH7XYURN%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDAwLHpdWFkbWHCmhcDTp46DMNXG6i4Qi4YnxWp1HNy1AiARquhX67K0IuHC8PmjvSWQp9IO5rvmsj2Akpla3CYOMCqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz8mZTnqjFpI87W%2B8KtwDsvMmF1AYd00nrk3mDnnss%2B8N3UFjby7btAeh%2F41KC2iCy%2BgDKD7QSsw2YEwJ1u1TPN%2FR4zhLAMuog54ujw9mOQunK6JyUFjOViLW1BT8h3HKyZgpd45aZoYYB3SUvqtbJLM4T7peEhCnocRQOYxUs%2BkeGDFnKZ%2B5JpHiXA0yuMZhLX8NgntNT5XuRMIDCXDIX%2Fk2EtgH4gHvGkMcWv7KppzXIN%2Br9ODAFQS8punShXIkBPd%2BxtnlNX%2Fn4dADRcEQGKCV%2FHucsTbSyI9gNiAFLnQTLCtI5cg7eLdVhuobAsy3kyvIESM1PT8I17jsH%2Bt8%2FXzU%2FlHSctUz11uhBk0SSkwThV3fHeuJT0hAAJFsfkS6c0a9koot%2FWO1lsLHOtXACFTAGgqZDQVURXAJnYFZ3JmbMJlnnlJDm4R98ibGLpnVTOoJQDqIaaanApIWB7zRRu1za5gYhwv%2BEdyyrMzic9ixkY4d5KhGDYu8gO7WqVNUEWzDTNkb9t5UtCnb56o5pRuv8Nc6s%2FiT0RDiEIDAC848rwZEIoEf1ZrQic0LDppRn5NBAuRZxEDqrrZBz7RX%2F3nXcCUyQlhg7DnWFD%2FVbUzDyj46kiXcwv53XEABy5ybmW8q1Iizb12QE%2B0wjq3YzgY6pgFApUOkswB6O%2FB9r12F9wBvtMYO266vhOeS5elo7GcMiJ0IKKgUAGBcYglzVL9WR4i8ABJqponzxrvd9hWTxYbb8utADtgdN59c0llOsyg%2FT4YHSGnOEJB6VslStDnxRfLwVbOAifMfTn07eZ4YIucf3HpbQXlOMvPHBdIpoU%2BAXKTkWDyVAlZcb%2BF2dvo6JMjVYII12RapXUlZs%2BWeVF%2B%2B%2FogiVgml&X-Amz-Signature=2b059d1fe41065c88d87ba264d11546cc2f1eed6bfbaee90307324d9938f2ba9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QH7XYURN%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDAwLHpdWFkbWHCmhcDTp46DMNXG6i4Qi4YnxWp1HNy1AiARquhX67K0IuHC8PmjvSWQp9IO5rvmsj2Akpla3CYOMCqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz8mZTnqjFpI87W%2B8KtwDsvMmF1AYd00nrk3mDnnss%2B8N3UFjby7btAeh%2F41KC2iCy%2BgDKD7QSsw2YEwJ1u1TPN%2FR4zhLAMuog54ujw9mOQunK6JyUFjOViLW1BT8h3HKyZgpd45aZoYYB3SUvqtbJLM4T7peEhCnocRQOYxUs%2BkeGDFnKZ%2B5JpHiXA0yuMZhLX8NgntNT5XuRMIDCXDIX%2Fk2EtgH4gHvGkMcWv7KppzXIN%2Br9ODAFQS8punShXIkBPd%2BxtnlNX%2Fn4dADRcEQGKCV%2FHucsTbSyI9gNiAFLnQTLCtI5cg7eLdVhuobAsy3kyvIESM1PT8I17jsH%2Bt8%2FXzU%2FlHSctUz11uhBk0SSkwThV3fHeuJT0hAAJFsfkS6c0a9koot%2FWO1lsLHOtXACFTAGgqZDQVURXAJnYFZ3JmbMJlnnlJDm4R98ibGLpnVTOoJQDqIaaanApIWB7zRRu1za5gYhwv%2BEdyyrMzic9ixkY4d5KhGDYu8gO7WqVNUEWzDTNkb9t5UtCnb56o5pRuv8Nc6s%2FiT0RDiEIDAC848rwZEIoEf1ZrQic0LDppRn5NBAuRZxEDqrrZBz7RX%2F3nXcCUyQlhg7DnWFD%2FVbUzDyj46kiXcwv53XEABy5ybmW8q1Iizb12QE%2B0wjq3YzgY6pgFApUOkswB6O%2FB9r12F9wBvtMYO266vhOeS5elo7GcMiJ0IKKgUAGBcYglzVL9WR4i8ABJqponzxrvd9hWTxYbb8utADtgdN59c0llOsyg%2FT4YHSGnOEJB6VslStDnxRfLwVbOAifMfTn07eZ4YIucf3HpbQXlOMvPHBdIpoU%2BAXKTkWDyVAlZcb%2BF2dvo6JMjVYII12RapXUlZs%2BWeVF%2B%2B%2FogiVgml&X-Amz-Signature=2270c6d23ea19b413b79a15bd60120c8077a2212b649e2d81a65f7a568ad70fa&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QH7XYURN%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090023Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIDAwLHpdWFkbWHCmhcDTp46DMNXG6i4Qi4YnxWp1HNy1AiARquhX67K0IuHC8PmjvSWQp9IO5rvmsj2Akpla3CYOMCqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMz8mZTnqjFpI87W%2B8KtwDsvMmF1AYd00nrk3mDnnss%2B8N3UFjby7btAeh%2F41KC2iCy%2BgDKD7QSsw2YEwJ1u1TPN%2FR4zhLAMuog54ujw9mOQunK6JyUFjOViLW1BT8h3HKyZgpd45aZoYYB3SUvqtbJLM4T7peEhCnocRQOYxUs%2BkeGDFnKZ%2B5JpHiXA0yuMZhLX8NgntNT5XuRMIDCXDIX%2Fk2EtgH4gHvGkMcWv7KppzXIN%2Br9ODAFQS8punShXIkBPd%2BxtnlNX%2Fn4dADRcEQGKCV%2FHucsTbSyI9gNiAFLnQTLCtI5cg7eLdVhuobAsy3kyvIESM1PT8I17jsH%2Bt8%2FXzU%2FlHSctUz11uhBk0SSkwThV3fHeuJT0hAAJFsfkS6c0a9koot%2FWO1lsLHOtXACFTAGgqZDQVURXAJnYFZ3JmbMJlnnlJDm4R98ibGLpnVTOoJQDqIaaanApIWB7zRRu1za5gYhwv%2BEdyyrMzic9ixkY4d5KhGDYu8gO7WqVNUEWzDTNkb9t5UtCnb56o5pRuv8Nc6s%2FiT0RDiEIDAC848rwZEIoEf1ZrQic0LDppRn5NBAuRZxEDqrrZBz7RX%2F3nXcCUyQlhg7DnWFD%2FVbUzDyj46kiXcwv53XEABy5ybmW8q1Iizb12QE%2B0wjq3YzgY6pgFApUOkswB6O%2FB9r12F9wBvtMYO266vhOeS5elo7GcMiJ0IKKgUAGBcYglzVL9WR4i8ABJqponzxrvd9hWTxYbb8utADtgdN59c0llOsyg%2FT4YHSGnOEJB6VslStDnxRfLwVbOAifMfTn07eZ4YIucf3HpbQXlOMvPHBdIpoU%2BAXKTkWDyVAlZcb%2BF2dvo6JMjVYII12RapXUlZs%2BWeVF%2B%2B%2FogiVgml&X-Amz-Signature=63f0305fa77ff3b7a7fb24ecaf7f493d6fe3288470d7cc78d866d92e3ca313dc&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB46656W2LWCA%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090024Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJGMEQCIFvRliwboG6B%2FP8hF9IYyRibQ62Wle6c44LQ9MoIhCFmAiAG2JoLUEpQ6b9kQV%2BfsxrIdwi8RwLU%2Fu5WrGvnoNu7OSqIBAj6%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMtw9HY4bd69x%2BToYMKtwD12ZYfA5gzuJ3qZxEhaKm%2FK%2FyQZQmpm%2BS1lYhuCXBqfO1fO3W3H4xjaY%2BtSTOHPTt6zW7bIqf4yzSNt7OM1SmtBt%2Bo8H245BlTEcUuwnyI0KAy0pMQB7wIY4B19Rabcox2XBU7M%2BAiu2Bxx5Vck%2ByFatLv88v1RMa05jP76l%2FZCquqUKqIrUGFE%2BoEueVdhQVcH1iYRCEJKlREJPMSe%2FYitE49Ejwq1dKvleksDl5afK5EiYHIEJ%2B0ZmWqXpFZUzsHiO23j%2BasCoPtwyj%2Bp169FEcZoHfgPBgvoaAggdphOwhCjGYH2E2JQmAV6ur6mLxNazbVfgDC2K25Dji47RgKDBIE%2B%2FFtUtZEQ3qJzheopIe0pi8am4B7r6gyoZWMEh8sf%2Fb84mXnF%2FBQaQkU8wkQVCRuvBU0pW6pegPKqHGveNRpS9fFq94sEKLxZ3D2drfTaB%2B1u0T3PMYar3TmL1SofbXg35fQ0Q8AVaXqYxg%2FiHUIDstzmegkYztv4r96y%2B4cYtpj2Tp5H4ZueJ1WRdil7HyPWq5PM3HTi8VMpz%2F%2Fup7u3E18k%2BxtZrWR1%2BfEZAqXP3gSONfmIb9D%2FejMsC8kKECBPyQ6nJBE5oGlGUoRJ1gXFbzIPXKdwiVIngw36zYzgY6pgG8FmT3qbZ3bP8L77Tck32sX%2FYvHlC747YtNKYkW1CZs57XRNFCWQyqeaVOJN8fkT0xmJwSPKYq4L2Xarkb9ijj0XNQqCUO%2B0tkh55yVfwlI5Kpba5VlfZIinfFPimBIrVHGuzgFKF6VRdcZbdyXFPU7Ma3E77WL70GRMjsE0Fb2iecjmGHzLxWwJf7SleCHwTwxyn7TzMmetzRV6jiKAtugww3vuug&X-Amz-Signature=8b7f1983cacb90f92ec694a2184314090e1d5cb94a10c71ee9254360f8824ac0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5XJCG6F%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQDXY%2FW81R4zspcdm9DvChA7vkJjTjq4VKtEEElerHH3hAIgUjTWOdMNhTAtC9WrYHSXAU29CAtfWqsAAeTTBcEY6nUqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKK6F2%2FkUOPXoSnKuSrcA2UnT%2F6NdiT44q3vLIydMNRNDKfJKEUtBZvzxATHvPq8DURpOyymL2jYtej31uO6R%2FeCdJq9O1ILMf%2FrddcLpY0osfloNpgRA7o4ci0s8Q3gpcH%2FopOw4FaRaqQmMTyzF5cqcpEc%2FkYKihWbKHQiEIquiRCEEPJ4MbIM3nwlIIC8Hypk652pzRoCJ8yqGCyqyGkeBCNdzI4BKT42EC4uprBUvom10O%2FFc2LUO6VdRkw%2FK4MC979uKWqDJq7He5JH8F0OojhS6rg%2Bhx45%2BC56hh%2F2rW%2BczIT5O7SbQrgtzYlOEWKVi2VcbFQx%2BO58kbyliIBCZk1QIoUdY0lJ7HfenyindgxIUyVbn%2Fc9bupDvk%2FutuBMch6xNnr60960gXdRNA8NMnzJjYpvSYw8P0O3Xy8432ZCGWuo4qCfbAOPWAVVkGNWJzgWbbExlWmWyHDL5z348TdClijW1XyoGpB%2FygaQ36JH3Si2hMgLbC8F1PKqlu5NGdrssfxNBlts%2BAA3Z2euUYo5KYa4Ai40j%2FwTbeMFcrVkglVRye6KP%2Ftb%2B7cB%2FcKTmO4Mo17Xdm5kcjbyeqfcdRD%2Bh5IeuZktB47QAPfHTdzG6fEmTVQkEEEec3mJuKijwWkHGlzBIM0FMOav2M4GOqUBYii3UEO6kD%2BPZDUHSIoOXkZ%2B4uA6oF%2BFqFKVlwyWujisE4M37JpazoKLLJVI%2BXHfyA9uOdGU8G8M6KkeH%2FizdI85vDT9WHAJtuj4V4%2BrMIX0kPZcTqbBRckP%2FO8o93ivgl2X72xa8SJ68vcptmxBk8Sgz704XGynjsHd5Latj%2BYWU%2BBK1OjQSNYKQN54jmyQJDpZyn82BlHCzywl7OjxZaSJyJ%2F3&X-Amz-Signature=a33b1df20c8cd3ae67cd11ea1340dfc47c98b4fa43129204d12f0631dba373d3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466S5XJCG6F%2F20260408%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260408T090025Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEDEaCXVzLXdlc3QtMiJHMEUCIQDXY%2FW81R4zspcdm9DvChA7vkJjTjq4VKtEEElerHH3hAIgUjTWOdMNhTAtC9WrYHSXAU29CAtfWqsAAeTTBcEY6nUqiAQI%2Bv%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDKK6F2%2FkUOPXoSnKuSrcA2UnT%2F6NdiT44q3vLIydMNRNDKfJKEUtBZvzxATHvPq8DURpOyymL2jYtej31uO6R%2FeCdJq9O1ILMf%2FrddcLpY0osfloNpgRA7o4ci0s8Q3gpcH%2FopOw4FaRaqQmMTyzF5cqcpEc%2FkYKihWbKHQiEIquiRCEEPJ4MbIM3nwlIIC8Hypk652pzRoCJ8yqGCyqyGkeBCNdzI4BKT42EC4uprBUvom10O%2FFc2LUO6VdRkw%2FK4MC979uKWqDJq7He5JH8F0OojhS6rg%2Bhx45%2BC56hh%2F2rW%2BczIT5O7SbQrgtzYlOEWKVi2VcbFQx%2BO58kbyliIBCZk1QIoUdY0lJ7HfenyindgxIUyVbn%2Fc9bupDvk%2FutuBMch6xNnr60960gXdRNA8NMnzJjYpvSYw8P0O3Xy8432ZCGWuo4qCfbAOPWAVVkGNWJzgWbbExlWmWyHDL5z348TdClijW1XyoGpB%2FygaQ36JH3Si2hMgLbC8F1PKqlu5NGdrssfxNBlts%2BAA3Z2euUYo5KYa4Ai40j%2FwTbeMFcrVkglVRye6KP%2Ftb%2B7cB%2FcKTmO4Mo17Xdm5kcjbyeqfcdRD%2Bh5IeuZktB47QAPfHTdzG6fEmTVQkEEEec3mJuKijwWkHGlzBIM0FMOav2M4GOqUBYii3UEO6kD%2BPZDUHSIoOXkZ%2B4uA6oF%2BFqFKVlwyWujisE4M37JpazoKLLJVI%2BXHfyA9uOdGU8G8M6KkeH%2FizdI85vDT9WHAJtuj4V4%2BrMIX0kPZcTqbBRckP%2FO8o93ivgl2X72xa8SJ68vcptmxBk8Sgz704XGynjsHd5Latj%2BYWU%2BBK1OjQSNYKQN54jmyQJDpZyn82BlHCzywl7OjxZaSJyJ%2F3&X-Amz-Signature=9b0df9d996b8a55794be4efb51ca123d408a55ad8da2c206aacbbc2f1dae6215&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
