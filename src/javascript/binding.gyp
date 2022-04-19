{
    "targets": [
        {
            "target_name": "dicetower",
            "sources": [
                "node_addon.cpp"
            ],
            "libraries": [
                "-Lc_build/dice.so"
            ],
            "include_dirs": [
                "c_includes/",
            ]
        }
    ]
}