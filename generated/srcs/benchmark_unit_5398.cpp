#include "bench/fib.hpp"

// RE Benchmark TU 5398 of 20000 (depth=28, stamp="default")
namespace bench_tu_5398 {
constexpr unsigned long long result = ::bench::slow_fib<28, 5398>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_5398
