import { onMount } from "svelte";
let disassemblyState = {
    disassembly: null,
    error: null,
    isLoading: true
};
let decompileState = {
    decompile: null,
    error: null,
    isLoading: true
};
function fetchData() {
    getData("/api/disassemble",
        ( {data} ) => {
            disassemblyState.disassembly = data.disassembly;
            disassemblyState.isLoading = false;
        }, ( {error} ) => {
            disassemblyState.error = error.message;
            disassemblyState.isLoading = false;
        }
    );
    getData("/api/decompile",
        ( {data} ) => {
            decompileState.decompile = highlightCodeLines(data, hijs);
            decompileState.isLoading = false;
        }, ( {error} ) => {
            decompileState.error = error.message;
            disassemblyState.isLoading = false;
        }
    );
}
onMount(async () => {
    fetchData();
});