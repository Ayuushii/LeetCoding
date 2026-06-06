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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667O4SZEJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCn5yMuJE2W%2F8%2BnVJFp4CSwCn39DotW0EhdRyFXXOqc4wIhALpyrzGf6MtucivMv3sVVkRi2OQt8b69e99CELUtLyRRKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzJXsJeeK58U2nW39wq3APNZJ729UGHAlSncP7Y0OWYYN%2FWiCTeu11sME77%2BucVw5G1SBkEgBPZOI5Lb4DCEoE8JEw%2FlXy04FVoayuv7cRrJ89L2D%2F5VliqJZPJEHw2bqDkbClmDoWK5ELLLNHrWwdpfyLXkRuDl71a7mPs38vh%2FcXLVGozZmZVt%2FgfqbfPDNC7r5vdFinQbzheMyo7byYHKNLMHQ8ABGYaSZh9j0MFxCdD2TDgODJS4%2B2M%2BkZoRo%2BN12jyUKzosBD%2B%2B2x7I4fdHWZfy431STkNIS537dfqp8GIZ2dcKW16JGIHiC47gf1Q%2BJcClzTVI%2Ff%2FrKCqo1S7IWT8bvxpMNTWZO7iuYFotRm74WdE0t%2F77IdiviEhT5VJw5bT8CBBEwYQqPTANpzzy1azzxErS%2Bu0gJj%2F9n3d0nA9XNCQ4bKYj4eynK5xAbVrbGIJqMFbeBT3uOxfutxFrnip2nT6cfWMOxSnwpmbHlS5tW4WNF4uJT0SQSEx%2FZg7aKmu6YaBKQqga8pwyCdGFzWgaIElj6XQel01b5C31d7ZT%2BA%2BWApJyrD6vPiCs%2FF0vE8EaHshzg7y2RSFjOVemwWscGScGXsP3xyC1vnurYRdZDd7PiOoFzGbsdmoNT3TQndamcsUpi0YezCDr4%2FRBjqkAXvm3zRMNLbWtH8CSp2d0kI5MTmxG4gbjpvYsOZatwA2L1V%2B5Ael2RiCUB3K226uieqlvsApt3LjjrAr2iP78ksObesOC1R%2F5Iza42AtQkaSwY%2BPgz9i0yVW%2Bmlbdejqbd4G3HdsX4kGZlSEnaAd2AAg8LL4hYAR%2FyG1F4h62pPWn94acKUGLBsy4Yqud00VFIdB2PHsp%2B2LNixbXGdhU4NzLHCp&X-Amz-Signature=229b435b44bcb021c70f515535101da3ae29d268c1014804edf5d6bf4bf549f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667O4SZEJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCn5yMuJE2W%2F8%2BnVJFp4CSwCn39DotW0EhdRyFXXOqc4wIhALpyrzGf6MtucivMv3sVVkRi2OQt8b69e99CELUtLyRRKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzJXsJeeK58U2nW39wq3APNZJ729UGHAlSncP7Y0OWYYN%2FWiCTeu11sME77%2BucVw5G1SBkEgBPZOI5Lb4DCEoE8JEw%2FlXy04FVoayuv7cRrJ89L2D%2F5VliqJZPJEHw2bqDkbClmDoWK5ELLLNHrWwdpfyLXkRuDl71a7mPs38vh%2FcXLVGozZmZVt%2FgfqbfPDNC7r5vdFinQbzheMyo7byYHKNLMHQ8ABGYaSZh9j0MFxCdD2TDgODJS4%2B2M%2BkZoRo%2BN12jyUKzosBD%2B%2B2x7I4fdHWZfy431STkNIS537dfqp8GIZ2dcKW16JGIHiC47gf1Q%2BJcClzTVI%2Ff%2FrKCqo1S7IWT8bvxpMNTWZO7iuYFotRm74WdE0t%2F77IdiviEhT5VJw5bT8CBBEwYQqPTANpzzy1azzxErS%2Bu0gJj%2F9n3d0nA9XNCQ4bKYj4eynK5xAbVrbGIJqMFbeBT3uOxfutxFrnip2nT6cfWMOxSnwpmbHlS5tW4WNF4uJT0SQSEx%2FZg7aKmu6YaBKQqga8pwyCdGFzWgaIElj6XQel01b5C31d7ZT%2BA%2BWApJyrD6vPiCs%2FF0vE8EaHshzg7y2RSFjOVemwWscGScGXsP3xyC1vnurYRdZDd7PiOoFzGbsdmoNT3TQndamcsUpi0YezCDr4%2FRBjqkAXvm3zRMNLbWtH8CSp2d0kI5MTmxG4gbjpvYsOZatwA2L1V%2B5Ael2RiCUB3K226uieqlvsApt3LjjrAr2iP78ksObesOC1R%2F5Iza42AtQkaSwY%2BPgz9i0yVW%2Bmlbdejqbd4G3HdsX4kGZlSEnaAd2AAg8LL4hYAR%2FyG1F4h62pPWn94acKUGLBsy4Yqud00VFIdB2PHsp%2B2LNixbXGdhU4NzLHCp&X-Amz-Signature=06605a7f3dce826de5087dd74cbb56d355e919f4173145135d45efb306c43719&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4667O4SZEJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQCn5yMuJE2W%2F8%2BnVJFp4CSwCn39DotW0EhdRyFXXOqc4wIhALpyrzGf6MtucivMv3sVVkRi2OQt8b69e99CELUtLyRRKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzJXsJeeK58U2nW39wq3APNZJ729UGHAlSncP7Y0OWYYN%2FWiCTeu11sME77%2BucVw5G1SBkEgBPZOI5Lb4DCEoE8JEw%2FlXy04FVoayuv7cRrJ89L2D%2F5VliqJZPJEHw2bqDkbClmDoWK5ELLLNHrWwdpfyLXkRuDl71a7mPs38vh%2FcXLVGozZmZVt%2FgfqbfPDNC7r5vdFinQbzheMyo7byYHKNLMHQ8ABGYaSZh9j0MFxCdD2TDgODJS4%2B2M%2BkZoRo%2BN12jyUKzosBD%2B%2B2x7I4fdHWZfy431STkNIS537dfqp8GIZ2dcKW16JGIHiC47gf1Q%2BJcClzTVI%2Ff%2FrKCqo1S7IWT8bvxpMNTWZO7iuYFotRm74WdE0t%2F77IdiviEhT5VJw5bT8CBBEwYQqPTANpzzy1azzxErS%2Bu0gJj%2F9n3d0nA9XNCQ4bKYj4eynK5xAbVrbGIJqMFbeBT3uOxfutxFrnip2nT6cfWMOxSnwpmbHlS5tW4WNF4uJT0SQSEx%2FZg7aKmu6YaBKQqga8pwyCdGFzWgaIElj6XQel01b5C31d7ZT%2BA%2BWApJyrD6vPiCs%2FF0vE8EaHshzg7y2RSFjOVemwWscGScGXsP3xyC1vnurYRdZDd7PiOoFzGbsdmoNT3TQndamcsUpi0YezCDr4%2FRBjqkAXvm3zRMNLbWtH8CSp2d0kI5MTmxG4gbjpvYsOZatwA2L1V%2B5Ael2RiCUB3K226uieqlvsApt3LjjrAr2iP78ksObesOC1R%2F5Iza42AtQkaSwY%2BPgz9i0yVW%2Bmlbdejqbd4G3HdsX4kGZlSEnaAd2AAg8LL4hYAR%2FyG1F4h62pPWn94acKUGLBsy4Yqud00VFIdB2PHsp%2B2LNixbXGdhU4NzLHCp&X-Amz-Signature=4f798b4330b1d27b85cfa4f73d1b1974c918e0c3a2cd83b2bfd22f58d4250b0f&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBH47AJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHOylfXgRzRIFTYqQPZu6Db%2BMmBooqNFwImd9lhdX1%2BgIhANYfm%2F2zGTXBxKBJHiXVFtf8utiJ%2FFTUTFwpwWaAZfVHKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx8ZD77xF6Qj2d9US8q3APnV1KL8V2CgG%2BxA2cPKbhHz0%2FzxFOt4oydOxQniNemp%2F8LDr%2FvUtbNSxN4SlwKPC%2B059y0bcMPpV8viB1H6M9q%2FC3OcDHGaYL7sTcZHmd1tVV%2FWzn0%2F0fWh9%2BGC%2FulEC4K4pfTKXVTI67KqEHNT4gzCHkqqcaHdfSsFs3zagrHWUMZxsIKWRR6IYSahrIcmVOXOEwuX2qrwAW1ibUQZVP4vyNepM9h9DQwg6HyX5kqmbLBHDbOgjJM2SVOuOdcxbP7Ej2Mfi0%2FgIa5bRYg6tRHT44yw8MLJOSaad%2FvhbESqC4fpFW4B46XhD9e79MB5h9Q5OKf4sSzT7KmtiMVHg1XgUEWXvWTIx0P3G4%2BoLSpSuBmSlcY8AkpaV8fISwVXqNN1r7vMA%2BldfoO%2F8FRAQT3fW2jx8y6%2FUj7nQXMQWGFv1yWIKdhKP0fiCEKLz13XU%2B6bYxrRGZO7iWaZKF60n1JB82SYO5tf%2F4p5qMDpichaanWhLWV2%2Fn5LNrNK8TxjwivhLXZZBCqlvFMpE8zmGl9xlrdzBU%2BOzqCGuQxd3pi13Vk6JPl%2B2S%2BHz%2BIdk2akcQk%2BC3%2BI%2BKIneMwp%2FkmzqFGjzlTQ8w3%2Bhfviyy20tPrPhYGywSAfcB0iARHBzDmro%2FRBjqkAcmY%2FJIKYonK%2FPSz%2F0LRJKga0xy%2FZ3vcLQ6WdRejrT8mXR36qF6%2FawXJkvhKfKUrCkz%2FyUWewcyyNDN3g6FlXhHvp%2FSbEwQo6CS30lGgiMkR%2FrNGZl9nQfgLwAEqv33NhqZtkVIEVdIotrza69fhQLi5mP8cx1GUDP%2FzDqzPpJ%2FdtlOAYc7FDrPHzHhcrbGA4ozVYq50wKvJdsHWS%2F9dszv4wFAG&X-Amz-Signature=49f0357174a6a038199a640d6bcc39acdcc1e4d51dac0155b2fcfc11d549dcc4&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBH47AJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHOylfXgRzRIFTYqQPZu6Db%2BMmBooqNFwImd9lhdX1%2BgIhANYfm%2F2zGTXBxKBJHiXVFtf8utiJ%2FFTUTFwpwWaAZfVHKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx8ZD77xF6Qj2d9US8q3APnV1KL8V2CgG%2BxA2cPKbhHz0%2FzxFOt4oydOxQniNemp%2F8LDr%2FvUtbNSxN4SlwKPC%2B059y0bcMPpV8viB1H6M9q%2FC3OcDHGaYL7sTcZHmd1tVV%2FWzn0%2F0fWh9%2BGC%2FulEC4K4pfTKXVTI67KqEHNT4gzCHkqqcaHdfSsFs3zagrHWUMZxsIKWRR6IYSahrIcmVOXOEwuX2qrwAW1ibUQZVP4vyNepM9h9DQwg6HyX5kqmbLBHDbOgjJM2SVOuOdcxbP7Ej2Mfi0%2FgIa5bRYg6tRHT44yw8MLJOSaad%2FvhbESqC4fpFW4B46XhD9e79MB5h9Q5OKf4sSzT7KmtiMVHg1XgUEWXvWTIx0P3G4%2BoLSpSuBmSlcY8AkpaV8fISwVXqNN1r7vMA%2BldfoO%2F8FRAQT3fW2jx8y6%2FUj7nQXMQWGFv1yWIKdhKP0fiCEKLz13XU%2B6bYxrRGZO7iWaZKF60n1JB82SYO5tf%2F4p5qMDpichaanWhLWV2%2Fn5LNrNK8TxjwivhLXZZBCqlvFMpE8zmGl9xlrdzBU%2BOzqCGuQxd3pi13Vk6JPl%2B2S%2BHz%2BIdk2akcQk%2BC3%2BI%2BKIneMwp%2FkmzqFGjzlTQ8w3%2Bhfviyy20tPrPhYGywSAfcB0iARHBzDmro%2FRBjqkAcmY%2FJIKYonK%2FPSz%2F0LRJKga0xy%2FZ3vcLQ6WdRejrT8mXR36qF6%2FawXJkvhKfKUrCkz%2FyUWewcyyNDN3g6FlXhHvp%2FSbEwQo6CS30lGgiMkR%2FrNGZl9nQfgLwAEqv33NhqZtkVIEVdIotrza69fhQLi5mP8cx1GUDP%2FzDqzPpJ%2FdtlOAYc7FDrPHzHhcrbGA4ozVYq50wKvJdsHWS%2F9dszv4wFAG&X-Amz-Signature=714f434a7f80419cac911def5307808d39c849673e17bc8cf3e28fe6124f2771&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBH47AJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHOylfXgRzRIFTYqQPZu6Db%2BMmBooqNFwImd9lhdX1%2BgIhANYfm%2F2zGTXBxKBJHiXVFtf8utiJ%2FFTUTFwpwWaAZfVHKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx8ZD77xF6Qj2d9US8q3APnV1KL8V2CgG%2BxA2cPKbhHz0%2FzxFOt4oydOxQniNemp%2F8LDr%2FvUtbNSxN4SlwKPC%2B059y0bcMPpV8viB1H6M9q%2FC3OcDHGaYL7sTcZHmd1tVV%2FWzn0%2F0fWh9%2BGC%2FulEC4K4pfTKXVTI67KqEHNT4gzCHkqqcaHdfSsFs3zagrHWUMZxsIKWRR6IYSahrIcmVOXOEwuX2qrwAW1ibUQZVP4vyNepM9h9DQwg6HyX5kqmbLBHDbOgjJM2SVOuOdcxbP7Ej2Mfi0%2FgIa5bRYg6tRHT44yw8MLJOSaad%2FvhbESqC4fpFW4B46XhD9e79MB5h9Q5OKf4sSzT7KmtiMVHg1XgUEWXvWTIx0P3G4%2BoLSpSuBmSlcY8AkpaV8fISwVXqNN1r7vMA%2BldfoO%2F8FRAQT3fW2jx8y6%2FUj7nQXMQWGFv1yWIKdhKP0fiCEKLz13XU%2B6bYxrRGZO7iWaZKF60n1JB82SYO5tf%2F4p5qMDpichaanWhLWV2%2Fn5LNrNK8TxjwivhLXZZBCqlvFMpE8zmGl9xlrdzBU%2BOzqCGuQxd3pi13Vk6JPl%2B2S%2BHz%2BIdk2akcQk%2BC3%2BI%2BKIneMwp%2FkmzqFGjzlTQ8w3%2Bhfviyy20tPrPhYGywSAfcB0iARHBzDmro%2FRBjqkAcmY%2FJIKYonK%2FPSz%2F0LRJKga0xy%2FZ3vcLQ6WdRejrT8mXR36qF6%2FawXJkvhKfKUrCkz%2FyUWewcyyNDN3g6FlXhHvp%2FSbEwQo6CS30lGgiMkR%2FrNGZl9nQfgLwAEqv33NhqZtkVIEVdIotrza69fhQLi5mP8cx1GUDP%2FzDqzPpJ%2FdtlOAYc7FDrPHzHhcrbGA4ozVYq50wKvJdsHWS%2F9dszv4wFAG&X-Amz-Signature=63bb0db40e4a816c767646b102a547fc48f1159706dc50eb1f97982c2c5e206c&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466XBH47AJS%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100238Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQDHOylfXgRzRIFTYqQPZu6Db%2BMmBooqNFwImd9lhdX1%2BgIhANYfm%2F2zGTXBxKBJHiXVFtf8utiJ%2FFTUTFwpwWaAZfVHKogECIH%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1Igx8ZD77xF6Qj2d9US8q3APnV1KL8V2CgG%2BxA2cPKbhHz0%2FzxFOt4oydOxQniNemp%2F8LDr%2FvUtbNSxN4SlwKPC%2B059y0bcMPpV8viB1H6M9q%2FC3OcDHGaYL7sTcZHmd1tVV%2FWzn0%2F0fWh9%2BGC%2FulEC4K4pfTKXVTI67KqEHNT4gzCHkqqcaHdfSsFs3zagrHWUMZxsIKWRR6IYSahrIcmVOXOEwuX2qrwAW1ibUQZVP4vyNepM9h9DQwg6HyX5kqmbLBHDbOgjJM2SVOuOdcxbP7Ej2Mfi0%2FgIa5bRYg6tRHT44yw8MLJOSaad%2FvhbESqC4fpFW4B46XhD9e79MB5h9Q5OKf4sSzT7KmtiMVHg1XgUEWXvWTIx0P3G4%2BoLSpSuBmSlcY8AkpaV8fISwVXqNN1r7vMA%2BldfoO%2F8FRAQT3fW2jx8y6%2FUj7nQXMQWGFv1yWIKdhKP0fiCEKLz13XU%2B6bYxrRGZO7iWaZKF60n1JB82SYO5tf%2F4p5qMDpichaanWhLWV2%2Fn5LNrNK8TxjwivhLXZZBCqlvFMpE8zmGl9xlrdzBU%2BOzqCGuQxd3pi13Vk6JPl%2B2S%2BHz%2BIdk2akcQk%2BC3%2BI%2BKIneMwp%2FkmzqFGjzlTQ8w3%2Bhfviyy20tPrPhYGywSAfcB0iARHBzDmro%2FRBjqkAcmY%2FJIKYonK%2FPSz%2F0LRJKga0xy%2FZ3vcLQ6WdRejrT8mXR36qF6%2FawXJkvhKfKUrCkz%2FyUWewcyyNDN3g6FlXhHvp%2FSbEwQo6CS30lGgiMkR%2FrNGZl9nQfgLwAEqv33NhqZtkVIEVdIotrza69fhQLi5mP8cx1GUDP%2FzDqzPpJ%2FdtlOAYc7FDrPHzHhcrbGA4ozVYq50wKvJdsHWS%2F9dszv4wFAG&X-Amz-Signature=dbd788635a6e6af6b87682fa16c782c855ca1883a15cf15c763fc60a3c7ea486&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665O5S6LIP%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100239Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCICOur361kMGWRhIBJcyhTgb59m20t9L4PkLGZaDUGW9%2BAiEAtzbbjPAunhUlkDLSKuBUI3gu9z5ZBSeC4%2Fl%2Btze2dDEqiAQIgf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDBevjeOiGKj8QInL2SrcA9UvJXEL4hceajU6ICWIM15abaGD4o7G0txSHzORIB4mknlRydeDrGjvnnzXEHO94YjSs%2F3UsqdsT369Ilp86yltR3L9o4z2SEUMfHYWweyVwioH72SN%2BhLzngS1iXwJK1lYYdtLc506TIpeBNSx%2F30CW3WtUZHN3VaZu%2FBkxnhr5qmQ5yN69fxcYKNONlJZDA0tMLYUQ5Fam2uDfHAlDQljLp5FWCD90CmcWfpq6K8QCPf6J13s9QbPydwen4MLudHT8eSOQfZbwDb9mjtwWoIXV3IwKBQ4SgXDLsHCoHpc%2FiivEGCsltl4Hd%2Fp7okU3477lPJcK50rBNaxc5CZ8EOBKcmuZAJ%2F6M%2By4oa6cz2Nxih5KLcjSeC91dcBPUD8RJzRzj9xqzpbAAG0m3rhEP3H%2FgUvO3lGtpD28qWdeqixSzmX9VpP2HIDUpDCCt3IGoflutgujEPX81igPybiDjlUleb3D548140xLvHEi9mDbLdssBB%2BKzeyQszr%2FxwdZrYbAMM6%2FoerxiSIsMcfTOMxqTTP5SkZxbxaqcC7fud3NiOVs%2BpCtktPq9PJzAEV5V4U6owuFUQxe1O8%2BXknZc5PlwrK78PO55%2FH%2BaTYRlByAuYj1CkuHKHDcus0MLeuj9EGOqUBxIXZ6cn68Fq%2BoTkrKWjjTiKTjiLetwBod5eylT1EIC7QEdt92swTVvoBKWdKft4fhOxaLtPoGjtpJNCROYzKBodhteExdz8SSnQtg3xIM7jtvM6My97ycs8F6MtQl%2FtgWCHMX8pF218K1P9Xc8cdmZGhy565aoCWmfnzbjRGbohWeZSz7Abfjk4l7eNBzbgvD%2BoJhY9yi45nFJGiue6QPSeVIb6A&X-Amz-Signature=fb3d491103385f4b1494ea9b6a1e7cd94b51f450f6a214e1cfb65de23dfbc75e&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZQRIRX47%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100239Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDVxZLtp3HCHEThVV%2FDakozLK%2FmiORWqbfvD1Lgp9dnMAiAcM%2F0c0bk4HcrK1bbrdhpO4rVGs2u4sHkd4u2XssxLXiqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMcap1LZlKSTOBjEt%2FKtwD9hrBxfvlS5gKTWvHq06LizZ1RBfHYRqwlCk%2BMDTX4FIrICU1Hue%2BVKoIA24Gg0xwOwNIgnYbH4ZaxCXrrEe2lR02FSiUbjJDUvnlyUQOukWaNMApotWSkg3z9umB6L%2FwDy79SopqlApufh4TyHceQrO696WrFZq9G15uAnyNpGcuYJehMGC6yBdrU70cLsPhDItvxh8oLJJdrUlZMQsZGQkafKi2pEnsHb9MdCk7I0YkUboce9rMPRA3EV%2BNDScPtAC59Iy5jvjOre8UEfjLW0wkAC2%2Fh%2B6ynP7OvcnUmb8zQuPNMTkrwIul1wg%2Bujksoe8FelfZs03cH4I1KPY%2Fcysq3QyKEXiJldUmf4ZBAfm6SbA8umwpv5diNRMLXXt2X2Z%2FoXzQQ36yOE5o2TNOPVOts39ihtkyAsRpGatzkN8HYhyIXUZ%2FOjqPAIgTyGyMvPDeXw%2B6u%2BgIpXZsUGW%2BaNoIydr1pRFaNXv7aGq%2B%2FD9avmz3WaNsH5T9tU7LWzeOK%2Fa0XD6YJMxOywCXsHZsWvFLYYBHkWPxCMrNhSYn%2FT1Z2t4Weq%2FMe2Z4%2Fa6N61rACmuasjPedPxX3m0IUe8tjb8sAcGpDHeMYyiDl1Yis100PlV3WeRt706gtzQw%2BK2P0QY6pgEeDiLt%2F076pVuwWWKjqMrwNSfJrfLwvJrsDLl9IcUHHR1LdY%2B1qv9LhUGJ1FBuEacMC9Hiamln8YUoTUQO1FCOO7wGSzN%2FNmqg5Vg7SRytZZm0Z07%2B9LpwxMNeixEDvqnbYUBTi3UtqYGhi5nEfZQ9JPDs0yX7mqRq3pXcK5FgfMgC1eSHmGajoBd5iMxqc5cEKX3X7B9IvKZ8u%2B5HTjZhtVn%2Fzl4s&X-Amz-Signature=969a13f68926310021b3a476a3c85283b56d85e82276be49fc16ad1868e3b9d1&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466ZQRIRX47%2F20260606%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260606T100239Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjELj%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIDVxZLtp3HCHEThVV%2FDakozLK%2FmiORWqbfvD1Lgp9dnMAiAcM%2F0c0bk4HcrK1bbrdhpO4rVGs2u4sHkd4u2XssxLXiqIBAiB%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMcap1LZlKSTOBjEt%2FKtwD9hrBxfvlS5gKTWvHq06LizZ1RBfHYRqwlCk%2BMDTX4FIrICU1Hue%2BVKoIA24Gg0xwOwNIgnYbH4ZaxCXrrEe2lR02FSiUbjJDUvnlyUQOukWaNMApotWSkg3z9umB6L%2FwDy79SopqlApufh4TyHceQrO696WrFZq9G15uAnyNpGcuYJehMGC6yBdrU70cLsPhDItvxh8oLJJdrUlZMQsZGQkafKi2pEnsHb9MdCk7I0YkUboce9rMPRA3EV%2BNDScPtAC59Iy5jvjOre8UEfjLW0wkAC2%2Fh%2B6ynP7OvcnUmb8zQuPNMTkrwIul1wg%2Bujksoe8FelfZs03cH4I1KPY%2Fcysq3QyKEXiJldUmf4ZBAfm6SbA8umwpv5diNRMLXXt2X2Z%2FoXzQQ36yOE5o2TNOPVOts39ihtkyAsRpGatzkN8HYhyIXUZ%2FOjqPAIgTyGyMvPDeXw%2B6u%2BgIpXZsUGW%2BaNoIydr1pRFaNXv7aGq%2B%2FD9avmz3WaNsH5T9tU7LWzeOK%2Fa0XD6YJMxOywCXsHZsWvFLYYBHkWPxCMrNhSYn%2FT1Z2t4Weq%2FMe2Z4%2Fa6N61rACmuasjPedPxX3m0IUe8tjb8sAcGpDHeMYyiDl1Yis100PlV3WeRt706gtzQw%2BK2P0QY6pgEeDiLt%2F076pVuwWWKjqMrwNSfJrfLwvJrsDLl9IcUHHR1LdY%2B1qv9LhUGJ1FBuEacMC9Hiamln8YUoTUQO1FCOO7wGSzN%2FNmqg5Vg7SRytZZm0Z07%2B9LpwxMNeixEDvqnbYUBTi3UtqYGhi5nEfZQ9JPDs0yX7mqRq3pXcK5FgfMgC1eSHmGajoBd5iMxqc5cEKX3X7B9IvKZ8u%2B5HTjZhtVn%2Fzl4s&X-Amz-Signature=71d48bc1b9929c3efe032e6c759478734f79a325b03ad36d0bd7950110fca3fd&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
