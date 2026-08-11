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

![New_Note.jpeg](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fc30da06-f738-4c2c-a16f-77a084f018eb/New_Note.jpeg?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VMGY4RDM%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEM1f0%2FOL6Rxu5dCZ%2FYr%2BG2gwlOqLxOgqc3IlqiApBIwAiB5ODCNsKFuV%2BZowSCAbfwevN3mAUeGm96dP34P07ADziqIBAiw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5XEBE0p%2FO2BGtX5uKtwDbRcr4HcDCmHf5bYEx6cBjYO%2FajIqMO8oIYPTnPl1OMX6emxgbgzFmyaVWlYAvmfx8ZOBknmWIs5orxBXL1NoexUgFS8QPVVjRf4BzWTXmHJYESxyxgsfo%2FtbArtJJu4ZW9LHpc3mY2Pen7cMCZRQevmgMN7QSDWEbpOU36oaAlShyiZoEQDJliCtjlpQq320iq%2B7zcGHYNHSXGtbp4bzYrfBoOotFKdxM05T8uN35WlA4Ij14893js%2BrEQgxsSk0%2BR0SmHpZH8i6w8XqmANsfkSx2pT6e6TpMagZ59dTT1NSOiLoVsVK4h4HZamag3Jv4WcCAgdPBC6tk2J6NO6xWuog%2Fgke%2F%2BlZQkjPft6FfUho6u6iw8zhHyM78hISqEZiIYYaDWWkKEHR4ToMq8xWyZ%2FpFzbn%2F6sO%2FwZyjbWZhEkkbJtcTCV61GdRhZdglSCgDER0FxKsZj%2BPTNPgYrjK2k1EkbeX7ThCUalgWOX98Scaqc8s678ceH3MiZV1Sf9wLJ0jf6X1YWhAlAlaa%2Bsvplq1MpKjlwq%2B%2FGiirA4vzY3I7lRpwcYBCG9uC3R8Lu%2BQDIWMzwjdd5ZX%2BQAyyghpu1mhqHJBXvMoYUxUL0qT8EhmS8RyFr4HP39KP6YwtJDr0wY6pgGpx9N%2Bm38HCXxcMbBlrV%2FC2nJP%2FUUnXoO4oZu71LYyusC1V%2FSrVk%2BXBuKxxKAup7qC%2FWo5m3So3knYo%2FQFj1cEjVLxweTISn4qcyKxBys5%2Ftv2sHeANWx40igQxpYPpA0pSAFwohd5PPWHsyaXJwdc2FuzZShnSS88bwvOWhvVPlqJmV550MrNJH52SpWQEdGzqeh9F7mZq9q01WeOsZGjUmaa5wyq&X-Amz-Signature=03bb7086fe091cb36326b0a6973d0f132d8dfdeb605abf0124fe1c3fd263de8d&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5016.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/10332961-23e6-45c8-ac92-2ca0f365732b/IMG_5016.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VMGY4RDM%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEM1f0%2FOL6Rxu5dCZ%2FYr%2BG2gwlOqLxOgqc3IlqiApBIwAiB5ODCNsKFuV%2BZowSCAbfwevN3mAUeGm96dP34P07ADziqIBAiw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5XEBE0p%2FO2BGtX5uKtwDbRcr4HcDCmHf5bYEx6cBjYO%2FajIqMO8oIYPTnPl1OMX6emxgbgzFmyaVWlYAvmfx8ZOBknmWIs5orxBXL1NoexUgFS8QPVVjRf4BzWTXmHJYESxyxgsfo%2FtbArtJJu4ZW9LHpc3mY2Pen7cMCZRQevmgMN7QSDWEbpOU36oaAlShyiZoEQDJliCtjlpQq320iq%2B7zcGHYNHSXGtbp4bzYrfBoOotFKdxM05T8uN35WlA4Ij14893js%2BrEQgxsSk0%2BR0SmHpZH8i6w8XqmANsfkSx2pT6e6TpMagZ59dTT1NSOiLoVsVK4h4HZamag3Jv4WcCAgdPBC6tk2J6NO6xWuog%2Fgke%2F%2BlZQkjPft6FfUho6u6iw8zhHyM78hISqEZiIYYaDWWkKEHR4ToMq8xWyZ%2FpFzbn%2F6sO%2FwZyjbWZhEkkbJtcTCV61GdRhZdglSCgDER0FxKsZj%2BPTNPgYrjK2k1EkbeX7ThCUalgWOX98Scaqc8s678ceH3MiZV1Sf9wLJ0jf6X1YWhAlAlaa%2Bsvplq1MpKjlwq%2B%2FGiirA4vzY3I7lRpwcYBCG9uC3R8Lu%2BQDIWMzwjdd5ZX%2BQAyyghpu1mhqHJBXvMoYUxUL0qT8EhmS8RyFr4HP39KP6YwtJDr0wY6pgGpx9N%2Bm38HCXxcMbBlrV%2FC2nJP%2FUUnXoO4oZu71LYyusC1V%2FSrVk%2BXBuKxxKAup7qC%2FWo5m3So3knYo%2FQFj1cEjVLxweTISn4qcyKxBys5%2Ftv2sHeANWx40igQxpYPpA0pSAFwohd5PPWHsyaXJwdc2FuzZShnSS88bwvOWhvVPlqJmV550MrNJH52SpWQEdGzqeh9F7mZq9q01WeOsZGjUmaa5wyq&X-Amz-Signature=43599429ac5e10c7b3d60a3fedabe547904e7b04e66fbba68c220af3ac86c4ce&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5018.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/71d60d4b-b1fd-4980-ad3c-eb689eca2606/IMG_5018.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466VMGY4RDM%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIEM1f0%2FOL6Rxu5dCZ%2FYr%2BG2gwlOqLxOgqc3IlqiApBIwAiB5ODCNsKFuV%2BZowSCAbfwevN3mAUeGm96dP34P07ADziqIBAiw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIM5XEBE0p%2FO2BGtX5uKtwDbRcr4HcDCmHf5bYEx6cBjYO%2FajIqMO8oIYPTnPl1OMX6emxgbgzFmyaVWlYAvmfx8ZOBknmWIs5orxBXL1NoexUgFS8QPVVjRf4BzWTXmHJYESxyxgsfo%2FtbArtJJu4ZW9LHpc3mY2Pen7cMCZRQevmgMN7QSDWEbpOU36oaAlShyiZoEQDJliCtjlpQq320iq%2B7zcGHYNHSXGtbp4bzYrfBoOotFKdxM05T8uN35WlA4Ij14893js%2BrEQgxsSk0%2BR0SmHpZH8i6w8XqmANsfkSx2pT6e6TpMagZ59dTT1NSOiLoVsVK4h4HZamag3Jv4WcCAgdPBC6tk2J6NO6xWuog%2Fgke%2F%2BlZQkjPft6FfUho6u6iw8zhHyM78hISqEZiIYYaDWWkKEHR4ToMq8xWyZ%2FpFzbn%2F6sO%2FwZyjbWZhEkkbJtcTCV61GdRhZdglSCgDER0FxKsZj%2BPTNPgYrjK2k1EkbeX7ThCUalgWOX98Scaqc8s678ceH3MiZV1Sf9wLJ0jf6X1YWhAlAlaa%2Bsvplq1MpKjlwq%2B%2FGiirA4vzY3I7lRpwcYBCG9uC3R8Lu%2BQDIWMzwjdd5ZX%2BQAyyghpu1mhqHJBXvMoYUxUL0qT8EhmS8RyFr4HP39KP6YwtJDr0wY6pgGpx9N%2Bm38HCXxcMbBlrV%2FC2nJP%2FUUnXoO4oZu71LYyusC1V%2FSrVk%2BXBuKxxKAup7qC%2FWo5m3So3knYo%2FQFj1cEjVLxweTISn4qcyKxBys5%2Ftv2sHeANWx40igQxpYPpA0pSAFwohd5PPWHsyaXJwdc2FuzZShnSS88bwvOWhvVPlqJmV550MrNJH52SpWQEdGzqeh9F7mZq9q01WeOsZGjUmaa5wyq&X-Amz-Signature=1f670f4de4801363389eceb636e4e33373307e4f575ceb13f1418613e448ece3&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![e0b602d1-e284-4d12-9f97-9c0da6b269fd.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/04534d47-52bd-41da-b25a-3ee7ec40f969/e0b602d1-e284-4d12-9f97-9c0da6b269fd.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QTWTJSB%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6YCQlAMZ%2FMt8r27eZuOqqnfK%2FXn%2F2tQPs0tSNPaFAMQIhANz6Ty5xajVU8uq0UA%2FiQToJyObkXTOiWx312wM%2Bxk%2F8KogECLD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzwnjX7MK7%2BY4O7yXQq3ANHSKVbepPXtdBAZTnLFOzZD9arWFQRpeMAne1DgKPWWagBRic2SCZCKxpYRy48LWx%2FvfJIoinO7ykOdf1h1iyLSR%2Fuo0wFqhe%2Bj169AOA%2BbeBdgTW%2FIi6BVcZjyioU4mJ4icidbu3gDkm048UkwxwMFV89%2F7jHEPvnzhTOTSKgYXkJ0yZdNO8tcUbLdBk%2BhtLvlhIBBHJcpJubwxIj%2BZ3KdC1rQHGLPDh%2BUTmZvPuhZnKlgotQHr%2B2o4JMQj%2Fa6rphh16rtRCUT3RAUEn3dXqhkSe3XfxVcjV2nV9qzN8aRguWiWabBwUEl%2B46ofU6Q598hraDoWHcMF4rla%2BgpYfzhW8Wz7XRVjYlpTy6%2Fq7suhXGHSqsFJw29MTO3bCNjn7QUh4toHgeiBB292H%2FpuMZucJAbAtcMJ3vVuhk2wIg0RxMCqE%2FCVUrddvKro3n0%2BuTYNG%2BbzKXOy6A6cMGms0VNQS9eA3Zc38Unvc8n1wBQR0wd1BcqVhpIc5V%2FVQaLrfQREuMrKJghHukNCiobNc5RKDRct8EtSs8J3vfcb%2FDqEUgXT%2B9sUP9ppvL77%2BVietTSqvcsNDbrXHM9KTJhUHDitSVoCqPpmA%2BkuSGcIftERabywYme1emed99bDDykOvTBjqkAVKTU0Tvg9w%2BTuOPPGR0OF9kZtn%2B8B2yQZCM8QZ5qq2bMMP%2FpVoEukZfCfyl4O837OP0XqWS4lwQX6f06sSGVQ89l1jfmxr%2FOEvd0lmEO4EhLJdnD%2FPtyqKG9OkUefPrFtxDC29xzOrFbmiGMe5jj2SjSW1fLveS5pUlzCK1tGyl2drBVkDqs25diowB33d1plc2lN4vlXopHjfozkgZFcaOmcBk&X-Amz-Signature=244cec2f0182076bed0919454a83908708adf1fb3b6235bb4eb6f3ee637c58f7&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5017.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/d394bc01-d8d5-4fb8-9a76-ab7046fd24f6/IMG_5017.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QTWTJSB%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6YCQlAMZ%2FMt8r27eZuOqqnfK%2FXn%2F2tQPs0tSNPaFAMQIhANz6Ty5xajVU8uq0UA%2FiQToJyObkXTOiWx312wM%2Bxk%2F8KogECLD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzwnjX7MK7%2BY4O7yXQq3ANHSKVbepPXtdBAZTnLFOzZD9arWFQRpeMAne1DgKPWWagBRic2SCZCKxpYRy48LWx%2FvfJIoinO7ykOdf1h1iyLSR%2Fuo0wFqhe%2Bj169AOA%2BbeBdgTW%2FIi6BVcZjyioU4mJ4icidbu3gDkm048UkwxwMFV89%2F7jHEPvnzhTOTSKgYXkJ0yZdNO8tcUbLdBk%2BhtLvlhIBBHJcpJubwxIj%2BZ3KdC1rQHGLPDh%2BUTmZvPuhZnKlgotQHr%2B2o4JMQj%2Fa6rphh16rtRCUT3RAUEn3dXqhkSe3XfxVcjV2nV9qzN8aRguWiWabBwUEl%2B46ofU6Q598hraDoWHcMF4rla%2BgpYfzhW8Wz7XRVjYlpTy6%2Fq7suhXGHSqsFJw29MTO3bCNjn7QUh4toHgeiBB292H%2FpuMZucJAbAtcMJ3vVuhk2wIg0RxMCqE%2FCVUrddvKro3n0%2BuTYNG%2BbzKXOy6A6cMGms0VNQS9eA3Zc38Unvc8n1wBQR0wd1BcqVhpIc5V%2FVQaLrfQREuMrKJghHukNCiobNc5RKDRct8EtSs8J3vfcb%2FDqEUgXT%2B9sUP9ppvL77%2BVietTSqvcsNDbrXHM9KTJhUHDitSVoCqPpmA%2BkuSGcIftERabywYme1emed99bDDykOvTBjqkAVKTU0Tvg9w%2BTuOPPGR0OF9kZtn%2B8B2yQZCM8QZ5qq2bMMP%2FpVoEukZfCfyl4O837OP0XqWS4lwQX6f06sSGVQ89l1jfmxr%2FOEvd0lmEO4EhLJdnD%2FPtyqKG9OkUefPrFtxDC29xzOrFbmiGMe5jj2SjSW1fLveS5pUlzCK1tGyl2drBVkDqs25diowB33d1plc2lN4vlXopHjfozkgZFcaOmcBk&X-Amz-Signature=dfcfce53605b504122641cbc0b138d80ccd4411c2517975620a35cd3cb79e049&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5019.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/fbaaf07e-b836-4861-b202-a74ed548abb8/IMG_5019.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QTWTJSB%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6YCQlAMZ%2FMt8r27eZuOqqnfK%2FXn%2F2tQPs0tSNPaFAMQIhANz6Ty5xajVU8uq0UA%2FiQToJyObkXTOiWx312wM%2Bxk%2F8KogECLD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzwnjX7MK7%2BY4O7yXQq3ANHSKVbepPXtdBAZTnLFOzZD9arWFQRpeMAne1DgKPWWagBRic2SCZCKxpYRy48LWx%2FvfJIoinO7ykOdf1h1iyLSR%2Fuo0wFqhe%2Bj169AOA%2BbeBdgTW%2FIi6BVcZjyioU4mJ4icidbu3gDkm048UkwxwMFV89%2F7jHEPvnzhTOTSKgYXkJ0yZdNO8tcUbLdBk%2BhtLvlhIBBHJcpJubwxIj%2BZ3KdC1rQHGLPDh%2BUTmZvPuhZnKlgotQHr%2B2o4JMQj%2Fa6rphh16rtRCUT3RAUEn3dXqhkSe3XfxVcjV2nV9qzN8aRguWiWabBwUEl%2B46ofU6Q598hraDoWHcMF4rla%2BgpYfzhW8Wz7XRVjYlpTy6%2Fq7suhXGHSqsFJw29MTO3bCNjn7QUh4toHgeiBB292H%2FpuMZucJAbAtcMJ3vVuhk2wIg0RxMCqE%2FCVUrddvKro3n0%2BuTYNG%2BbzKXOy6A6cMGms0VNQS9eA3Zc38Unvc8n1wBQR0wd1BcqVhpIc5V%2FVQaLrfQREuMrKJghHukNCiobNc5RKDRct8EtSs8J3vfcb%2FDqEUgXT%2B9sUP9ppvL77%2BVietTSqvcsNDbrXHM9KTJhUHDitSVoCqPpmA%2BkuSGcIftERabywYme1emed99bDDykOvTBjqkAVKTU0Tvg9w%2BTuOPPGR0OF9kZtn%2B8B2yQZCM8QZ5qq2bMMP%2FpVoEukZfCfyl4O837OP0XqWS4lwQX6f06sSGVQ89l1jfmxr%2FOEvd0lmEO4EhLJdnD%2FPtyqKG9OkUefPrFtxDC29xzOrFbmiGMe5jj2SjSW1fLveS5pUlzCK1tGyl2drBVkDqs25diowB33d1plc2lN4vlXopHjfozkgZFcaOmcBk&X-Amz-Signature=6da5027df5702df1d40c71299e5cf1ac0c040d0e4c005597d19deccbdbccd1a6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/800820a1-f0c0-432c-bc83-8a0f01a31eb4/43c3841b-fa5a-4655-ba7c-2eba69ca20e4.png?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4664QTWTJSB%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJIMEYCIQC6YCQlAMZ%2FMt8r27eZuOqqnfK%2FXn%2F2tQPs0tSNPaFAMQIhANz6Ty5xajVU8uq0UA%2FiQToJyObkXTOiWx312wM%2Bxk%2F8KogECLD%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEQABoMNjM3NDIzMTgzODA1IgzwnjX7MK7%2BY4O7yXQq3ANHSKVbepPXtdBAZTnLFOzZD9arWFQRpeMAne1DgKPWWagBRic2SCZCKxpYRy48LWx%2FvfJIoinO7ykOdf1h1iyLSR%2Fuo0wFqhe%2Bj169AOA%2BbeBdgTW%2FIi6BVcZjyioU4mJ4icidbu3gDkm048UkwxwMFV89%2F7jHEPvnzhTOTSKgYXkJ0yZdNO8tcUbLdBk%2BhtLvlhIBBHJcpJubwxIj%2BZ3KdC1rQHGLPDh%2BUTmZvPuhZnKlgotQHr%2B2o4JMQj%2Fa6rphh16rtRCUT3RAUEn3dXqhkSe3XfxVcjV2nV9qzN8aRguWiWabBwUEl%2B46ofU6Q598hraDoWHcMF4rla%2BgpYfzhW8Wz7XRVjYlpTy6%2Fq7suhXGHSqsFJw29MTO3bCNjn7QUh4toHgeiBB292H%2FpuMZucJAbAtcMJ3vVuhk2wIg0RxMCqE%2FCVUrddvKro3n0%2BuTYNG%2BbzKXOy6A6cMGms0VNQS9eA3Zc38Unvc8n1wBQR0wd1BcqVhpIc5V%2FVQaLrfQREuMrKJghHukNCiobNc5RKDRct8EtSs8J3vfcb%2FDqEUgXT%2B9sUP9ppvL77%2BVietTSqvcsNDbrXHM9KTJhUHDitSVoCqPpmA%2BkuSGcIftERabywYme1emed99bDDykOvTBjqkAVKTU0Tvg9w%2BTuOPPGR0OF9kZtn%2B8B2yQZCM8QZ5qq2bMMP%2FpVoEukZfCfyl4O837OP0XqWS4lwQX6f06sSGVQ89l1jfmxr%2FOEvd0lmEO4EhLJdnD%2FPtyqKG9OkUefPrFtxDC29xzOrFbmiGMe5jj2SjSW1fLveS5pUlzCK1tGyl2drBVkDqs25diowB33d1plc2lN4vlXopHjfozkgZFcaOmcBk&X-Amz-Signature=c570477aa3944790a878191156ae9f45cc9b35a68954e097ab9f2b4572ccea06&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


</details>

<details>
<summary>[Subset Sum Problem ](https://www.geeksforgeeks.org/problems/subset-sum-problem-1611555638/1)- Given an array, return true if a subset exists whose total is equal to target S</summary>
- How is this same as 0/1 Knapsack?  We are trying to include/exclude such that the sum adds up to W as in 0/1 knapsack

![Him_in_hon.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/69a1c905-9003-4298-b76e-e9be5f918415/Him_in_hon.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB466Q4FCVK5E%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085319Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJGMEQCIFiFt1KhbqZXofl%2BF8yNzAveGOW9EhkwRcxWaoyD%2FDHEAiBn2dzGZbwrNjNTNBfckbvmgxlpwMaTUra7jgFkE5v2ZyqIBAiw%2F%2F%2F%2F%2F%2F%2F%2F%2F%2F8BEAAaDDYzNzQyMzE4MzgwNSIMy4fxJNTu5hqOavTLKtwDwpFIlpgetLmngEOoomDlbalOgifLpo1NcLgyeZ5BOlzZ91uYo5gvObvqYPGKEmE9xCuuG5mUSniTUsdnWetpA9VtX54%2FI1%2B5Go9yeBOn1EIE6XdadbxOc0UmXN5iJSjM4ejW5FSOpFQYRK3OEXwilebHNC6XYExldhEemt0%2F0LSJsbZHyOKjIEujonxSsXwtROOVCCPyBm5yERbejBL7DwToQu9Tlsfebz91G0B1gwHADyeBbFjn5Dq0zOW4crSqqaIxeZt6lKCSAcsmAaAw155POnN8SMaxgWt0zy8jVhLCM%2BMarB%2B%2B2F45VcZPgargrd786jUvU10syhmwAJUmvGIqkWXUs5dq8jrNYPHESrOICQTbIFIQij2NyJg0dxXqRm8yVf3b8MphlWooTSWp4pf4NJbqI4koUwxU7crrzxTirj3Fcg4Cwlzfh2d1TkjW%2Fj8ZZXBAb0FZpn29OZ6arMjhtneA9PjnfalAuVM4Kw%2BGFdgo8KDERrdXxizyP4zPVFWZma828g8ymJk53%2Bb8y4NCfvL6T%2FLiJcsE1yw%2FB6tDkwhlfsubWNkd24bdOe3Vb%2FSe1n33FlTgn31K3mOUthf%2F7LhBhNTUhiubrUD%2Bc9qMVLOAiKffPjYtKkcw%2BpPr0wY6pgEyTXDDkikN5amoZ5LanXatOhx27GhXC%2F0393BAQXZdT682%2Bq4vhsc35yN2rrJY88i7%2BPvky9r43JZeLjvaG1pmwhBQLEwv0E0hkBZx6sTfNmnsAFGiiXidXimULTXdlm%2FV9vAwweqivHbTq5jEoevIcBtBGHlAHBYuEaZExJtRl2zPM%2BO5twfwg6sVF7WCoBm0A6MXldxI5TXBSrApcfUmwKksZr9t&X-Amz-Signature=6941f86beb1d65a9bffccd1850a5df116c03e5830a1732adf3e8b66fc7c488c0&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![Sp_2_-_This_antil_the_matrix.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/dcaa4dc5-a991-44bb-b59e-488af2f5ba03/Sp_2_-_This_antil_the_matrix.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FVAMPAX%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085320Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFk9lLilZhTRGaDM4gOFtynVsx4kPaULVmCVw3l%2BFFHzAiEAhb9fSJLZwxLryxYNCAUX7D7a9H5gsS022lkI0AIwwvkqiAQIsP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHtb5LRQ8GAu6c8TJircAxe4NpD8KffB3VR9p%2Fi4t0wEcJwX2v0ktecQWSthi3kBbf6GYNHqw6541%2Fwhwk1xIk9HwpTQKG%2B4P98pr5hIPzBFPAVjGAeR3CNIuXgkW6XQ2hCBnfY1TpFhAV8WkXfYlHETOCSUsBTHcSIcurL8OBUeaWkPoAPAfPIi%2BmjBOV1sjfe5TKgoOSPX2hqC1gEvhImxdWD%2FPD%2BDXvj1PIuCmLtBbv6xE55TWYn3rG5dAqzfZ8az0w%2F7ztiy2QJwbtvpo9TJQajBqcTWVfJJtCdi8TFnFbTWJ7bQLEyNV6LGozluJOxiJMr7P47m%2Fojxbwqz%2FZi2raIfbjWuJpjUtdZM%2FkuRBcf7UiI09IvsHco%2FUB83mwJXod7o02jP3FEw4gY5pp0XnhtgeeOsbsHxvhXM%2ByiB0h80pbyc96TApQqgOZtgONixxbYogT5THJeE9TgPMpzogUSF4NhwHqsYpoHB0xb9iEx13eCw4rh5PrAuqvMkDI6fXJ9jOIxWnop%2FShuRXJgFwyWahPujrMRt6HYFwHXX7xMhnZTE7yElu86aQ8Acq7aSaHjekn5mv%2FArs5KVgRgdRrxmYFOMhE0OCe%2BfX4uDUEFU4EPUPQHtgVw6j40CYStZ5I9rZaGNlBPmMJ%2BR69MGOqUBWUWLnqpV0f0v3NztL54ORppjco2BD2YvfR9ADumdj%2FByu6I%2FIRTaZLIzx5Z3m5BNGidDsfVz%2B0mevnbsJ646z0cG0imH15VpqIRWzHI74JuPdfzRW%2BSYZt2NwwiGjDUNgJSfG6MhHqLLcp%2Bv1OJnBQeUQQd1TiXVySatFTVIyOsu0inBHwMmhXVdQIMFDXTfg0%2F0Nt6NQ3NzDyQiEex1fhejo%2BLI&X-Amz-Signature=c296c6682393c584862336d010bf2f71a7b34edcfa5afa012a1b9bd34323058a&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


![IMG_5023.heic](https://prod-files-secure.s3.us-west-2.amazonaws.com/e7807fc3-a9be-4666-affe-dcc8d60ec207/09ac20c0-ad69-4872-b088-54dbf4149c88/IMG_5023.heic?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Content-Sha256=UNSIGNED-PAYLOAD&X-Amz-Credential=ASIAZI2LB4665FVAMPAX%2F20260811%2Fus-west-2%2Fs3%2Faws4_request&X-Amz-Date=20260811T085320Z&X-Amz-Expires=3600&X-Amz-Security-Token=IQoJb3JpZ2luX2VjEOf%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FwEaCXVzLXdlc3QtMiJHMEUCIFk9lLilZhTRGaDM4gOFtynVsx4kPaULVmCVw3l%2BFFHzAiEAhb9fSJLZwxLryxYNCAUX7D7a9H5gsS022lkI0AIwwvkqiAQIsP%2F%2F%2F%2F%2F%2F%2F%2F%2F%2FARAAGgw2Mzc0MjMxODM4MDUiDHtb5LRQ8GAu6c8TJircAxe4NpD8KffB3VR9p%2Fi4t0wEcJwX2v0ktecQWSthi3kBbf6GYNHqw6541%2Fwhwk1xIk9HwpTQKG%2B4P98pr5hIPzBFPAVjGAeR3CNIuXgkW6XQ2hCBnfY1TpFhAV8WkXfYlHETOCSUsBTHcSIcurL8OBUeaWkPoAPAfPIi%2BmjBOV1sjfe5TKgoOSPX2hqC1gEvhImxdWD%2FPD%2BDXvj1PIuCmLtBbv6xE55TWYn3rG5dAqzfZ8az0w%2F7ztiy2QJwbtvpo9TJQajBqcTWVfJJtCdi8TFnFbTWJ7bQLEyNV6LGozluJOxiJMr7P47m%2Fojxbwqz%2FZi2raIfbjWuJpjUtdZM%2FkuRBcf7UiI09IvsHco%2FUB83mwJXod7o02jP3FEw4gY5pp0XnhtgeeOsbsHxvhXM%2ByiB0h80pbyc96TApQqgOZtgONixxbYogT5THJeE9TgPMpzogUSF4NhwHqsYpoHB0xb9iEx13eCw4rh5PrAuqvMkDI6fXJ9jOIxWnop%2FShuRXJgFwyWahPujrMRt6HYFwHXX7xMhnZTE7yElu86aQ8Acq7aSaHjekn5mv%2FArs5KVgRgdRrxmYFOMhE0OCe%2BfX4uDUEFU4EPUPQHtgVw6j40CYStZ5I9rZaGNlBPmMJ%2BR69MGOqUBWUWLnqpV0f0v3NztL54ORppjco2BD2YvfR9ADumdj%2FByu6I%2FIRTaZLIzx5Z3m5BNGidDsfVz%2B0mevnbsJ646z0cG0imH15VpqIRWzHI74JuPdfzRW%2BSYZt2NwwiGjDUNgJSfG6MhHqLLcp%2Bv1OJnBQeUQQd1TiXVySatFTVIyOsu0inBHwMmhXVdQIMFDXTfg0%2F0Nt6NQ3NzDyQiEex1fhejo%2BLI&X-Amz-Signature=478bd79186bd42ebd8eeb951c1a6eece900853a7850bd4ef24964a6f2dfe27f6&X-Amz-SignedHeaders=host&x-amz-checksum-mode=ENABLED&x-id=GetObject)


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
