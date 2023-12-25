FROM alpine:3.14 as build

RUN apk add --no-cache build-base

WORKDIR /app

COPY . .

RUN gcc $(find /app/external/ /app/src/ /app/tests/ -type f -name '*.c') -o test_suite

FROM alpine:3.14

COPY --from=build /app/test_suite /app/test_suite

WORKDIR /app

CMD [ "/app/test_suite" ]
