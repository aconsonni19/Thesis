export async function GET( { request }) {
    const cookie = request.headers.get("cookie") || "";
    const backEndResponse = await fetch("http://localhost:5000/{Operation}", {
        headers: request.headers,
        credentials: "include"
    });
    return new Response(backEndResponse.body, {
        status: backEndResponse.status,
        headers: backEndResponse.headers
    });
}