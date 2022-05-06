fun main() {
    repeat(readLine()!!.toInt()) {
        println((1 shl readLine()!!.toInt().toString(2).length - 1) - 1)
    }
}

