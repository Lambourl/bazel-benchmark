#include "bench/fib.hpp"

// RE Benchmark TU 15104 of 20000 (depth=28, stamp="default")
namespace bench_tu_15104 {
constexpr unsigned long long result = ::bench::slow_fib<28, 15104>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_15104
