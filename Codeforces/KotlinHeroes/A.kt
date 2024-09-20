
import kotlin.reflect.typeOf
import kotlin.math.*

private fun readLn() = readLine()!! // string line
private fun readIn() = readLn().toInt() // string int
private fun readLong() = readLn().toLong() // single long
private fun readDouble() = readLn().toDouble() // single double
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints
private fun readLongs() = readStrings().map { it.toLong() } // list of longs
private fun readDoubles() = readStrings().map { it.toDouble() } // list of doubles


fun main(args: Array<String>){
    val n: Int = readIn()
    for(i in 1..n){
        val a = readInts()
        val mayor = max(a[0],a[1])
        val minim = min(a[0],a[1])
        println("$minim $mayor")
    }
}
