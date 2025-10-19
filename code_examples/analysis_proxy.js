export async function POST({ request }) {
    const backEndResponse = await fetch("http://localhost:5000/analyses/{Analysis}", {
        method: "POST",
        headers: request.headers,
        body: request.body,
        credentials: "include",
        duplex: "half"
    });
    return new Response(backEndResponse.body, {
        status: backEndResponse.status,
        headers: backEndResponse.headers
    });
}