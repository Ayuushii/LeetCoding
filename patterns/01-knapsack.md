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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665R47ZBRP%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD4tdI%2B8BOQcWsxzkNhM3Rj18AwBHy5xkNJNG66SOEefgIhAPLAYOmRGfsyZ4aAf%2F3BOU0sYuSAMtiauIO7AVXa1d28KogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzTur1amejQcfa5lE8q3AMVIEjCfEmVyU8CbPYp4W7mG20QoLIKwnlsfPHNf226W%2BvfMBrfFkpSRhuA2lCm9i%2Fj3VHeWCELCWaNDzgc10zFGLYhxGt42ySlbV4uVpzE%2FzHzk1EQKeU0M17UgmTrXz7M1pF8JABbXEbMu4PIuQV1lNbclP6tK1eDVM%2BIQGMcUMGPBYo9UvZGS%2FBsBY5FvVLkIRZtIpFlj93dEDU4ZUEXs0u%2B%2Bvv7JNP02Bpvnj%2BClsq1TNuaaI7gVtGoRZNC%2FdXSHwdoALn6j%2FtUhMvWc7EnRCbK1dA51awm3fWKKdIcogRuyb1IwkjucJsY8UNbZPIuyfpN9A4enmbmX7mO9YJxRx%2BN2W%2BTxdNYQFsbmyvtOEe2ADJXLTV7NXP8ytc7gbDUx9R6HWsh3OvZWEQpt7oJozt%2F7ZlrBPL4g6ZUnKKYIkBfc8De5xjIJ3fnk%2BkcvqDczVeCbKLtNMfmx1Mj%2FTpwIuETE6GRHq4jMZ2AsBJs7HtuQyLtyVsLtz7%2BtJ7cN3H%2BKsBWLtEFyOPhAYEElNVZtlYPtw7IVxCQmdpcmgkQ4kPeAjA6uxk9Ag5EF9VkpRdVmzqT8tXOxUQZXiZjyT6lht5dv0ZKX5I2mvjdYXCuE3Se67tx5PI%2FezY23zCr6avQBjqkAd0UpG1QEeAeFm5dUkYrUj0cRuWH08Q1yQ5YFYh9MWSHsuWWGIc2pJFsoYQfaOxiK1RJRwe1PMjaA0tu8OfQL9HvxxX3RXImrgKj8W8M%2FWyUfyI3YJvmbl6kRlb2AVgamDL5TGKovxYdPlKdNI4WYEjWk4UniSyO66%2BLFebKMdUeW%2Bd5PoWCTx9suMjyYWL9VsW4RkqrmPMjmMQT47zpjt8PT2W3&X-Amz-Signature=be6d72f82e7b430d6e1e69d437d142cc5b1c50eff2b56247b0ad6fc26360e2c3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665R47ZBRP%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD4tdI%2B8BOQcWsxzkNhM3Rj18AwBHy5xkNJNG66SOEefgIhAPLAYOmRGfsyZ4aAf%2F3BOU0sYuSAMtiauIO7AVXa1d28KogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzTur1amejQcfa5lE8q3AMVIEjCfEmVyU8CbPYp4W7mG20QoLIKwnlsfPHNf226W%2BvfMBrfFkpSRhuA2lCm9i%2Fj3VHeWCELCWaNDzgc10zFGLYhxGt42ySlbV4uVpzE%2FzHzk1EQKeU0M17UgmTrXz7M1pF8JABbXEbMu4PIuQV1lNbclP6tK1eDVM%2BIQGMcUMGPBYo9UvZGS%2FBsBY5FvVLkIRZtIpFlj93dEDU4ZUEXs0u%2B%2Bvv7JNP02Bpvnj%2BClsq1TNuaaI7gVtGoRZNC%2FdXSHwdoALn6j%2FtUhMvWc7EnRCbK1dA51awm3fWKKdIcogRuyb1IwkjucJsY8UNbZPIuyfpN9A4enmbmX7mO9YJxRx%2BN2W%2BTxdNYQFsbmyvtOEe2ADJXLTV7NXP8ytc7gbDUx9R6HWsh3OvZWEQpt7oJozt%2F7ZlrBPL4g6ZUnKKYIkBfc8De5xjIJ3fnk%2BkcvqDczVeCbKLtNMfmx1Mj%2FTpwIuETE6GRHq4jMZ2AsBJs7HtuQyLtyVsLtz7%2BtJ7cN3H%2BKsBWLtEFyOPhAYEElNVZtlYPtw7IVxCQmdpcmgkQ4kPeAjA6uxk9Ag5EF9VkpRdVmzqT8tXOxUQZXiZjyT6lht5dv0ZKX5I2mvjdYXCuE3Se67tx5PI%2FezY23zCr6avQBjqkAd0UpG1QEeAeFm5dUkYrUj0cRuWH08Q1yQ5YFYh9MWSHsuWWGIc2pJFsoYQfaOxiK1RJRwe1PMjaA0tu8OfQL9HvxxX3RXImrgKj8W8M%2FWyUfyI3YJvmbl6kRlb2AVgamDL5TGKovxYdPlKdNI4WYEjWk4UniSyO66%2BLFebKMdUeW%2Bd5PoWCTx9suMjyYWL9VsW4RkqrmPMjmMQT47zpjt8PT2W3&X-Amz-Signature=e77192c0777dd4f4e59ceb48da430acb8553338cb246d85295d9c95fd2c9d143&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665R47ZBRP%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQD4tdI%2B8BOQcWsxzkNhM3Rj18AwBHy5xkNJNG66SOEefgIhAPLAYOmRGfsyZ4aAf%2F3BOU0sYuSAMtiauIO7AVXa1d28KogECLz%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzTur1amejQcfa5lE8q3AMVIEjCfEmVyU8CbPYp4W7mG20QoLIKwnlsfPHNf226W%2BvfMBrfFkpSRhuA2lCm9i%2Fj3VHeWCELCWaNDzgc10zFGLYhxGt42ySlbV4uVpzE%2FzHzk1EQKeU0M17UgmTrXz7M1pF8JABbXEbMu4PIuQV1lNbclP6tK1eDVM%2BIQGMcUMGPBYo9UvZGS%2FBsBY5FvVLkIRZtIpFlj93dEDU4ZUEXs0u%2B%2Bvv7JNP02Bpvnj%2BClsq1TNuaaI7gVtGoRZNC%2FdXSHwdoALn6j%2FtUhMvWc7EnRCbK1dA51awm3fWKKdIcogRuyb1IwkjucJsY8UNbZPIuyfpN9A4enmbmX7mO9YJxRx%2BN2W%2BTxdNYQFsbmyvtOEe2ADJXLTV7NXP8ytc7gbDUx9R6HWsh3OvZWEQpt7oJozt%2F7ZlrBPL4g6ZUnKKYIkBfc8De5xjIJ3fnk%2BkcvqDczVeCbKLtNMfmx1Mj%2FTpwIuETE6GRHq4jMZ2AsBJs7HtuQyLtyVsLtz7%2BtJ7cN3H%2BKsBWLtEFyOPhAYEElNVZtlYPtw7IVxCQmdpcmgkQ4kPeAjA6uxk9Ag5EF9VkpRdVmzqT8tXOxUQZXiZjyT6lht5dv0ZKX5I2mvjdYXCuE3Se67tx5PI%2FezY23zCr6avQBjqkAd0UpG1QEeAeFm5dUkYrUj0cRuWH08Q1yQ5YFYh9MWSHsuWWGIc2pJFsoYQfaOxiK1RJRwe1PMjaA0tu8OfQL9HvxxX3RXImrgKj8W8M%2FWyUfyI3YJvmbl6kRlb2AVgamDL5TGKovxYdPlKdNI4WYEjWk4UniSyO66%2BLFebKMdUeW%2Bd5PoWCTx9suMjyYWL9VsW4RkqrmPMjmMQT47zpjt8PT2W3&X-Amz-Signature=b3c6996fdfcefdfd226b322a06c08b155300dc69d88aa3784c5a071cb7c917f9&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T65QHM5P%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHvOpN2eT39SxOuqACXcre5cR81GiSsvw77Va5T3xE2jAiEA8wc035U7Vv2TFIbrkbmz4%2BaFkGeDshEzPM2G0R5XIKIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDbmza6q%2FX6kx%2FOCrircA1PralZDJdchWz%2Fh%2BA%2BzAWWQycsMoVZiNPzOvbFyOiOea%2Bcj9c0hXOa0%2BecH%2Bnt%2F0ntwL3LjTH6nee5JRAZLVEbMBSwz6Kj3O2gSleTPdv1oFIqQpciWrgs2L%2BYLlsYk5sbYys8g8N4cAFwREd6e0PvhljETR6b%2Fr%2FWwgSoW2fFqm8JACdRyeq%2FJhytEni72GmjY89OUrntjtn%2FJPShpnFw1u%2BmPZ3FHfBvaJ2CikQoRI7vl%2B6qHIzPYeS4CSn9Aq%2BBm1OOzCy7ysS0ho34G76XAg1fgVUvQfyLJMCmuP4VoA3DBHiXJ7lTwjhj0Y7DC8HzMfCqcEWsIxE2sEVlILeeDJQa23%2BdiCfrFqsonIDOUpoeUOeq9JQcFqEV5%2FCzPRpgV60y7jnA8DBWByh%2BAucL9C%2BKDqO2o%2BxaguqlNxp8biddXW6U46pfd0D09sctD2%2BSBJbjZ5Pou9Nlplqtkddj6qe7hE4gf4AiGKH0xdkVERTUYctvCSLuQGjnUQT5Z77aUFEaQCFxNaynZpD4G0tIyeTeaCEMj6JcyIIPSLBQZfM3aZdzBdPfYKNCpoWtnWrYrcX5UBlvz6MKqKaJFvSWvBnhX%2BRMLNjcEz%2FOBAheOFHKCxun8TBfdCEj9MMHnq9AGOqUBVbtn7jDbfUsSj4U%2FEBtFfEH69DlsxH0R6W47QXoZbfPMWjaXULPrxpZ8xeYmZubu66DUC%2FE%2BouNu7lna4Qh4N46%2FQAvpyxIMxgsOf%2BT0xZg44onAPr8qcO0pl6u59h8CT9pf2g9mU%2Bin0K25n71JPBcKxAwd52kvnFoZFR%2BdBp%2FrxLo3uAAflGWrKt5Le7AHVN9LEMhM8U7nZKnth8MZxaYVdNrd&X-Amz-Signature=41f096c90161b8158aa516baf3d616eb834d9ee5a2d2b0ba35076436151d2092&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T65QHM5P%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHvOpN2eT39SxOuqACXcre5cR81GiSsvw77Va5T3xE2jAiEA8wc035U7Vv2TFIbrkbmz4%2BaFkGeDshEzPM2G0R5XIKIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDbmza6q%2FX6kx%2FOCrircA1PralZDJdchWz%2Fh%2BA%2BzAWWQycsMoVZiNPzOvbFyOiOea%2Bcj9c0hXOa0%2BecH%2Bnt%2F0ntwL3LjTH6nee5JRAZLVEbMBSwz6Kj3O2gSleTPdv1oFIqQpciWrgs2L%2BYLlsYk5sbYys8g8N4cAFwREd6e0PvhljETR6b%2Fr%2FWwgSoW2fFqm8JACdRyeq%2FJhytEni72GmjY89OUrntjtn%2FJPShpnFw1u%2BmPZ3FHfBvaJ2CikQoRI7vl%2B6qHIzPYeS4CSn9Aq%2BBm1OOzCy7ysS0ho34G76XAg1fgVUvQfyLJMCmuP4VoA3DBHiXJ7lTwjhj0Y7DC8HzMfCqcEWsIxE2sEVlILeeDJQa23%2BdiCfrFqsonIDOUpoeUOeq9JQcFqEV5%2FCzPRpgV60y7jnA8DBWByh%2BAucL9C%2BKDqO2o%2BxaguqlNxp8biddXW6U46pfd0D09sctD2%2BSBJbjZ5Pou9Nlplqtkddj6qe7hE4gf4AiGKH0xdkVERTUYctvCSLuQGjnUQT5Z77aUFEaQCFxNaynZpD4G0tIyeTeaCEMj6JcyIIPSLBQZfM3aZdzBdPfYKNCpoWtnWrYrcX5UBlvz6MKqKaJFvSWvBnhX%2BRMLNjcEz%2FOBAheOFHKCxun8TBfdCEj9MMHnq9AGOqUBVbtn7jDbfUsSj4U%2FEBtFfEH69DlsxH0R6W47QXoZbfPMWjaXULPrxpZ8xeYmZubu66DUC%2FE%2BouNu7lna4Qh4N46%2FQAvpyxIMxgsOf%2BT0xZg44onAPr8qcO0pl6u59h8CT9pf2g9mU%2Bin0K25n71JPBcKxAwd52kvnFoZFR%2BdBp%2FrxLo3uAAflGWrKt5Le7AHVN9LEMhM8U7nZKnth8MZxaYVdNrd&X-Amz-Signature=56ecba773957d9f84055b9d012ae18130b7c39f53af3b9726b0fdeab2015eea2&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T65QHM5P%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHvOpN2eT39SxOuqACXcre5cR81GiSsvw77Va5T3xE2jAiEA8wc035U7Vv2TFIbrkbmz4%2BaFkGeDshEzPM2G0R5XIKIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDbmza6q%2FX6kx%2FOCrircA1PralZDJdchWz%2Fh%2BA%2BzAWWQycsMoVZiNPzOvbFyOiOea%2Bcj9c0hXOa0%2BecH%2Bnt%2F0ntwL3LjTH6nee5JRAZLVEbMBSwz6Kj3O2gSleTPdv1oFIqQpciWrgs2L%2BYLlsYk5sbYys8g8N4cAFwREd6e0PvhljETR6b%2Fr%2FWwgSoW2fFqm8JACdRyeq%2FJhytEni72GmjY89OUrntjtn%2FJPShpnFw1u%2BmPZ3FHfBvaJ2CikQoRI7vl%2B6qHIzPYeS4CSn9Aq%2BBm1OOzCy7ysS0ho34G76XAg1fgVUvQfyLJMCmuP4VoA3DBHiXJ7lTwjhj0Y7DC8HzMfCqcEWsIxE2sEVlILeeDJQa23%2BdiCfrFqsonIDOUpoeUOeq9JQcFqEV5%2FCzPRpgV60y7jnA8DBWByh%2BAucL9C%2BKDqO2o%2BxaguqlNxp8biddXW6U46pfd0D09sctD2%2BSBJbjZ5Pou9Nlplqtkddj6qe7hE4gf4AiGKH0xdkVERTUYctvCSLuQGjnUQT5Z77aUFEaQCFxNaynZpD4G0tIyeTeaCEMj6JcyIIPSLBQZfM3aZdzBdPfYKNCpoWtnWrYrcX5UBlvz6MKqKaJFvSWvBnhX%2BRMLNjcEz%2FOBAheOFHKCxun8TBfdCEj9MMHnq9AGOqUBVbtn7jDbfUsSj4U%2FEBtFfEH69DlsxH0R6W47QXoZbfPMWjaXULPrxpZ8xeYmZubu66DUC%2FE%2BouNu7lna4Qh4N46%2FQAvpyxIMxgsOf%2BT0xZg44onAPr8qcO0pl6u59h8CT9pf2g9mU%2Bin0K25n71JPBcKxAwd52kvnFoZFR%2BdBp%2FrxLo3uAAflGWrKt5Le7AHVN9LEMhM8U7nZKnth8MZxaYVdNrd&X-Amz-Signature=2a31939138f88061311e22de0e7c2bbeaacd26111ad59b119bd242eb369ec66f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466T65QHM5P%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHvOpN2eT39SxOuqACXcre5cR81GiSsvw77Va5T3xE2jAiEA8wc035U7Vv2TFIbrkbmz4%2BaFkGeDshEzPM2G0R5XIKIqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDDbmza6q%2FX6kx%2FOCrircA1PralZDJdchWz%2Fh%2BA%2BzAWWQycsMoVZiNPzOvbFyOiOea%2Bcj9c0hXOa0%2BecH%2Bnt%2F0ntwL3LjTH6nee5JRAZLVEbMBSwz6Kj3O2gSleTPdv1oFIqQpciWrgs2L%2BYLlsYk5sbYys8g8N4cAFwREd6e0PvhljETR6b%2Fr%2FWwgSoW2fFqm8JACdRyeq%2FJhytEni72GmjY89OUrntjtn%2FJPShpnFw1u%2BmPZ3FHfBvaJ2CikQoRI7vl%2B6qHIzPYeS4CSn9Aq%2BBm1OOzCy7ysS0ho34G76XAg1fgVUvQfyLJMCmuP4VoA3DBHiXJ7lTwjhj0Y7DC8HzMfCqcEWsIxE2sEVlILeeDJQa23%2BdiCfrFqsonIDOUpoeUOeq9JQcFqEV5%2FCzPRpgV60y7jnA8DBWByh%2BAucL9C%2BKDqO2o%2BxaguqlNxp8biddXW6U46pfd0D09sctD2%2BSBJbjZ5Pou9Nlplqtkddj6qe7hE4gf4AiGKH0xdkVERTUYctvCSLuQGjnUQT5Z77aUFEaQCFxNaynZpD4G0tIyeTeaCEMj6JcyIIPSLBQZfM3aZdzBdPfYKNCpoWtnWrYrcX5UBlvz6MKqKaJFvSWvBnhX%2BRMLNjcEz%2FOBAheOFHKCxun8TBfdCEj9MMHnq9AGOqUBVbtn7jDbfUsSj4U%2FEBtFfEH69DlsxH0R6W47QXoZbfPMWjaXULPrxpZ8xeYmZubu66DUC%2FE%2BouNu7lna4Qh4N46%2FQAvpyxIMxgsOf%2BT0xZg44onAPr8qcO0pl6u59h8CT9pf2g9mU%2Bin0K25n71JPBcKxAwd52kvnFoZFR%2BdBp%2FrxLo3uAAflGWrKt5Le7AHVN9LEMhM8U7nZKnth8MZxaYVdNrd&X-Amz-Signature=658539f0daf7d15acdb7228a25f9328503138ea95a863cf82f8d0f409f88e189&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QIEFCGMR%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114307Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFgA0SWmFTieoYf%2BHILsUjKuP9BvXJ4emnm0fiYw9w04AiEA3R%2F%2Bz9CdZNhpd%2FgrxwlzYR1BzECUx9PLs%2FKtaEjtpRcqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDFvD2I076MPd96SS%2FircA1EPagscdBxGnGRORU6riI4W%2BsLBJ2KlxpD6MbBK4esxxALcZ4iz%2B2y3V1%2F97yH4uzPT7aEbSQPy8%2BLfSZ9d7dBVY3XnFuT9UdHb2KNjoNgOJJ7E%2BjW0AZXGIgEhWo0RrP4QQuI1qHPsNM4rTqoj2Ig%2FU6IvkGDbre0QVsfN9eSmLF6RwGd82Ol343uu1ndFvQU%2BEmsBNqu7ncesTSGx7BEL%2F3hyZaWAkPe4dr2d6%2BCv7lxCcpYkzPdD1HrtnT6IWlyBglYVCUBMC6goZJxG369eE2ZDOJ%2B%2FP0pEmdIEAaXFC9NAN9ksIU0Ywvjo0J8vIi7eOoBp7biJQShWqOSAzeF4QZTyVMA24B1enlfwGvHGoGjmerVewm38XkBPhKN2ohsL1fAI5g5IeN4mJiCncGqO70mJ8yTXeHN8bNDn3Tjy2QshmzDvYA8PRghOFWRpgSdUYdTvioWjw8TCSLH03dBUiRGE%2Fslw3vwuIB0kkIipmZgPWFp%2BrLTt5e6O9Z0J%2BaYoNdXxBeh7O4CNChDZzPsQCJ%2B8I97JL%2Bt7BHfZymWuuySwi2B4yaxncAKh12n7q5WirrCNnFiBS24cSGkq13J5ckOBd3eGukoYJaC7wKVYZOGjKPbBznppirjyMOfnq9AGOqUBhpg%2B5I2dKGpY%2BCCt%2BAu%2FkuUIBtpOWFF%2Fcv3wpxNJXHQdoav9ag1HU3Njkao0DjCjEdvUZPOqLqeXJOkc%2Bguexd1F8t04sf3gCb90rJuVzWHz3lWOoZQMjbXn%2BprYGqI%2B6JN0MkGjpMYO5TRPmLOqrU0xEwPXBmVd60TmacteqpJCB3ujCu%2FwYWMTGslAcCGu3Hwku8QaW8iosUXZRMGPX0DnyA%2Bj&X-Amz-Signature=18e7a1e8f749c1a65fd2b8a1c815829a75992d8dc8847ebe7b49cb42b435dba5&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QN3MELMB%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114308Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgwptlFdmYCnWv4b9pFNGjnaqDPCa3r7oBq3ZdrSGT6AiEA6jrK1%2Fz5h69wSDVJO9usZQoSAWEwXxbk0Ap1HHx%2FYpMqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHAXzx24f7vC2sNwKyrcAxCNaVIstjteiVR6HqB7HR902Xi2GUiPOhty0fA%2B%2BbzM%2FAOyBfVt%2FPojsVayQHw5Z%2FcAuPBoO3K3Uv6jQhFUEq23ANv9Q4obs2l5hYUvmrLkHebVjLfJYXj9CAYTLMJfXIlD%2B31Fojeke7ox3Erw04vjhmDdGBeDX5ZCChbBNM32CoqDTfy6G2b0LILU%2BDbHqIQo1JPyZiZCYvMPDE69Gh3he7dNOWLAVDr57lPIlG1LE1H%2FtdBkL3AiZnUXuxvgcqOalwtNpQdVV1xQbZknEOwgZTOJWhwYsViDOQD8rPi5%2B7wVOOecB1g%2F62npwr2IWDsp5585EqkaRNceN4ONUojFn1kJgngd8bbXceiiIJ7QEGX3a2AZcbxpmrd2%2F9abkumzenzPA%2Fl40%2FnYkPhQ0g%2FClA6SavLjqSHNIQnxdW98dX%2FSnwCLTf06Kxby4vVNvR6JjJPqjgEzd9hgG3mvcsRGFE%2F1R6i3wBTv6jT1GF9oC61lDtQvHEOvIDlx1FhT%2FTmZPQ0kJVsoqP3JA3bIZ%2F81TBAesjMqlbcU1Wn%2BSQeaA%2FrESSw0g30Lrdf32GQSiZXAMD6QpAXqiLCEOU%2FuZvnWKgC0w4TSi58o7Re4Q5SEa9%2BZCW1M%2FcbEH0rBMOjnq9AGOqUBs%2FS%2BMPUhPaqNJd5ll3JhweZLj1GTqqLmBvCj4wRpdgKQ34mIDEUynGnEfNeZdrmGnf%2FwFl83sCRcZRgzo7tbizqBKSpNnw9KFAoDhu%2B7XF8n0r5Y4HBIv0o91oCnHnp5F%2BfuAhY9zc5XrJi%2BXAzprdDG1INoqB7v55gE3cdOvpVyR8e0XUefJ1kMSISJPcLqPzLFfyTW5gbrosyUQeVQI4Pk8Y3G&X-Amz-Signature=b1a719ac2e64d439f8525733773c1620c9e459950a5b917e488192d84c6278f8&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466QN3MELMB%2F20260518%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260518T114308Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEPP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIHgwptlFdmYCnWv4b9pFNGjnaqDPCa3r7oBq3ZdrSGT6AiEA6jrK1%2Fz5h69wSDVJO9usZQoSAWEwXxbk0Ap1HHx%2FYpMqiAQIvP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHAXzx24f7vC2sNwKyrcAxCNaVIstjteiVR6HqB7HR902Xi2GUiPOhty0fA%2B%2BbzM%2FAOyBfVt%2FPojsVayQHw5Z%2FcAuPBoO3K3Uv6jQhFUEq23ANv9Q4obs2l5hYUvmrLkHebVjLfJYXj9CAYTLMJfXIlD%2B31Fojeke7ox3Erw04vjhmDdGBeDX5ZCChbBNM32CoqDTfy6G2b0LILU%2BDbHqIQo1JPyZiZCYvMPDE69Gh3he7dNOWLAVDr57lPIlG1LE1H%2FtdBkL3AiZnUXuxvgcqOalwtNpQdVV1xQbZknEOwgZTOJWhwYsViDOQD8rPi5%2B7wVOOecB1g%2F62npwr2IWDsp5585EqkaRNceN4ONUojFn1kJgngd8bbXceiiIJ7QEGX3a2AZcbxpmrd2%2F9abkumzenzPA%2Fl40%2FnYkPhQ0g%2FClA6SavLjqSHNIQnxdW98dX%2FSnwCLTf06Kxby4vVNvR6JjJPqjgEzd9hgG3mvcsRGFE%2F1R6i3wBTv6jT1GF9oC61lDtQvHEOvIDlx1FhT%2FTmZPQ0kJVsoqP3JA3bIZ%2F81TBAesjMqlbcU1Wn%2BSQeaA%2FrESSw0g30Lrdf32GQSiZXAMD6QpAXqiLCEOU%2FuZvnWKgC0w4TSi58o7Re4Q5SEa9%2BZCW1M%2FcbEH0rBMOjnq9AGOqUBs%2FS%2BMPUhPaqNJd5ll3JhweZLj1GTqqLmBvCj4wRpdgKQ34mIDEUynGnEfNeZdrmGnf%2FwFl83sCRcZRgzo7tbizqBKSpNnw9KFAoDhu%2B7XF8n0r5Y4HBIv0o91oCnHnp5F%2BfuAhY9zc5XrJi%2BXAzprdDG1INoqB7v55gE3cdOvpVyR8e0XUefJ1kMSISJPcLqPzLFfyTW5gbrosyUQeVQI4Pk8Y3G&X-Amz-Signature=ec28db578ba8942a28ba8377b6d85a108918ce41257e92ca7b2d68c68b2fd8ee&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
