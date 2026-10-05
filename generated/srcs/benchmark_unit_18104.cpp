#include "bench/fib.hpp"

// RE Benchmark TU 18104 of 20000 (depth=28, stamp="default")
namespace bench_tu_18104 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18104>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18104
