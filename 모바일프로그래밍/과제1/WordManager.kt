package com.example.wordseachingservice

import java.io.File
import java.io.FileNotFoundException
import java.util.Scanner

class WordManager {
    private val words = mutableListOf<Word>()

    init {
        try {
            val scanner = Scanner(File("words2.txt"))
            while (scanner.hasNextLine()) {
                val word = scanner.nextLine().trim() // 단어 읽기
                val meaning = if (scanner.hasNextLine()) scanner.nextLine().trim() else "" // 뜻 읽기
                words.add(Word(word, meaning))
            }
        } catch (e: FileNotFoundException) {
            println("파일 위치를 확인하세요.")
        }
    }

    private fun searchWord() {
        print("찾을 영단어를 정확하게 입력하세요 : ")
        val input = readLine()!!.trim()
        val foundWord = words.find { it.word.equals(input, ignoreCase = true) }
        if (foundWord != null) {
            println("${foundWord.word} : ${foundWord.meaning}")
        } else {
            println("찾는 단어가 존재하지 않습니다.")
        }
    }

    private fun searchPartialWord() {
        print("찾을 영단어의 일부를 입력하세요 : ")
        val input = readLine()!!.trim()
        val foundWords = words.filter { it.word.startsWith(input, ignoreCase = true) }
        if (foundWords.isNotEmpty()) {
            foundWords.forEach { println("${it.word} : ${it.meaning}") }
        } else {
            println("찾는 단어가 존재하지 않습니다.")
        }
    }

    private fun searchMeaning() {
        print("찾을 뜻을 입력하세요 (뜻의 일부만 포함) ")
        val input = readLine()!!.trim()
        val foundWords = words.filter { it.meaning.contains(input, ignoreCase = true) }
        if (foundWords.isNotEmpty()) {
            foundWords.forEach { println("${it.word} : ${it.meaning}") }
        } else {
            println("찾는 단어가 존재하지 않습니다.")
        }
    }

    fun runMenu() {
        while (true) {
            print("1) 영어단어 검색 ")
            print("2) 부분 영단어 검색(입력값으로 시작하는) ")
            print("3) 뜻 검색 ")
            println("4) 종료")
            print("메뉴를 선택하세요 : ")

            when (readLine()) {
                "1" -> searchWord()
                "2" -> searchPartialWord()
                "3" -> searchMeaning()
                "4" -> {
                    println("프로그램을 종료합니다.")
                    return
                }

                else -> println("잘못된 입력입니다. 다시 입력해주세요.")
            }
        }
    }
}
