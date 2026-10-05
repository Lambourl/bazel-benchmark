#include "bench/fib.hpp"

// RE Benchmark TU 18841 of 20000 (depth=28, stamp="default")
namespace bench_tu_18841 {
constexpr unsigned long long result = ::bench::slow_fib<28, 18841>();
unsigned long long sink() { return result; }
}  // namespace bench_tu_18841
