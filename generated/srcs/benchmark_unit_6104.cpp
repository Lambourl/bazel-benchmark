#include "bench/fib.hpp"

// RE Benchmark TU 6104 of 20000 (depth=28, stamp="default")
namespace bench_tu_6104 {
constexpr unsigned long long result = ::bench::slow_fib<28, 6104>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_6104
