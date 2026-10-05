#include "bench/fib.hpp"

// RE Benchmark TU 288 of 20000 (depth=28, stamp="default")
namespace bench_tu_288 {
constexpr unsigned long long result = ::bench::slow_fib<28, 288>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_288
