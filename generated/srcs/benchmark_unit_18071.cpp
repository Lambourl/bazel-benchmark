#include "bench/fib.hpp"

// RE Benchmark TU 18071 of 20000 (depth=28, stamp="default")
namespace bench_tu_18071 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18071>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18071
